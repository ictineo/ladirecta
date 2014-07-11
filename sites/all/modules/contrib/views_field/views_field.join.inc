<?php
/**
 * @file
 * Provides a multi-column join on field tables.
 *
 * @author Jim Berry ("solotandem", http://drupal.org/user/240748)
 */

/**
 * A function class to represent a multi-column join and create the SQL necessary to implement the join.
 *
 * Modifications to join definition keys in parent class:
 * - field: array of fields to join on (right field)
 * - left_field: array of fields to join to (left field)
 */
class views_field_join extends views_join {

  /**
   * Build the SQL for the join this object represents.
   *
   * This is identical to parent method except for condition clause.
   *
   * @param $select_query
   *   An implementation of SelectQueryInterface.
   * @param $table
   *   The base table to join.
   * @param $view_query
   *   The source query, implementation of views_plugin_query.
   */
  function build_join($select_query, $table, $view_query) {
    if (empty($this->definition['table formula'])) {
      $right_table = $this->table;
    }
    else {
      $right_table = $this->definition['table formula'];
    }

    // This is all that differs from the parent function.
    $condition = $this->build_multi_join($table, $view_query);

    $arguments = array();

    // Tack on the extra.
    if (isset($this->extra)) {
      if (is_array($this->extra)) {
        $extras = array();
        foreach ($this->extra as $info) {
          $extra = '';
          // Figure out the table name. Remember, only use aliases provided
          // if at all possible.
          $join_table = '';
          if (!array_key_exists('table', $info)) {
            $join_table = $table['alias'] . '.';
          }
          elseif (isset($info['table'])) {
            // If we're aware of a table alias for this table, use the table
            // alias instead of the table name.
            if (isset($left) && $left['table'] == $info['table']) {
              $join_table = $left['alias'] . '.';
            }
            else {
              $join_table = $info['table'] . '.';
            }
          }

          // Convert a single-valued array of values to the single-value case,
          // and transform from IN() notation to = notation
          if (is_array($info['value']) && count($info['value']) == 1) {
            if (empty($info['operator'])) {
              $operator = '=';
            }
            else {
              $operator = $info['operator'] == 'NOT IN' ? '!=' : '=';
            }
            $info['value'] = array_shift($info['value']);
          }

          if (is_array($info['value'])) {
            // With an array of values, we need multiple placeholders and the
            // 'IN' operator is implicit.
            foreach ($info['value'] as $value) {
              $placeholder_i = ':views_join_condition_' . $select_query->nextPlaceholder();
              $arguments[$placeholder_i] = $value;
            }

            $operator = !empty($info['operator']) ? $info['operator'] : 'IN';
            $placeholder = '( ' . implode(', ', array_keys($arguments)) . ' )';
          }
          else {
            // With a single value, the '=' operator is implicit.
            $operator = !empty($info['operator']) ? $info['operator'] : '=';
            $placeholder = ':views_join_condition_' . $select_query->nextPlaceholder();
            $arguments[$placeholder] = $info['value'];
          }

          $extras[] = "$join_table$info[field] $operator $placeholder";
        }

        if ($extras) {
          if (count($extras) == 1) {
            $condition .= ' AND ' . array_shift($extras);
          }
          else {
            $condition .= ' AND (' . implode(' ' . $this->extra_type . ' ', $extras) . ')';
          }
        }
      }
      elseif ($this->extra && is_string($this->extra)) {
        $condition .= " AND ($this->extra)";
      }
    }

    $select_query->addJoin($this->type, $right_table, $table['alias'], $condition, $arguments);
  }

  function build_multi_join($table, $view_query) {
    // Handle either join field not being an array.
    // @todo Handle item counts not the same.
    if (!is_array($this->left_field)) {
      $this->left_field = array($this->left_field);
    }
    if (!is_array($this->field)) {
      $this->field = array($this->field);
    }

    $conditions = array();
    foreach ($this->left_field as $key => $left_field) {
      if ($this->left_table) {
        $left = $view_query->get_table_info($this->left_table);
        $left_field = "$left[alias].$left_field";
      }
//       else {
//         // This can be used if left_field is a formula or something. It should be used only *very* rarely.
//         $left_field = $left_field;
//       }

      $conditions[] = "$left_field = $table[alias].{$this->field[$key]}";
    }
    return implode(' AND ', $conditions);
  }
}
