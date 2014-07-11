<?php
/**
 * @file
 * Modifies definitions of base tables, fields, and joins for views.
 *
 * @author Jim Berry ("solotandem", http://drupal.org/user/240748)
 */

/**
 * Adds field table as base table to views.
 */
function views_field_add_base_table(&$data, $field, $module, $base_table) {
  $is_revision = substr($base_table, 0, 15) == 'field_revision_';
  $group = $is_revision ? t('Revision tables') : t('Field tables');
  $field_name_string = vf_ucfirst($field['field_name']);

  // Copy the table information so we can order the fields.
  // When creating a view using a field table as the base, Views grabs the first
  // field and places it on the view. Without ordering the fields, the first
  // field would be the "Content: Value" for a node. An attempt to preview the
  // view will result in an error. Regular field API fields may not be added to
  // these views (except by adding a relationship to the entity table).
  $old_table = $data[$base_table];
  unset($old_table['table']);

  // Remove everything but the table entry.
  $data[$base_table] = array('table' => $data[$base_table]['table']);

  foreach ($old_table as $index => $old_item) {
    if (in_array($index, array('table', 'entity_id', 'revision_id', $field['field_name'], $field['field_name'] . '-revision_id'))) {
      // We only want to modify the field "columns" like "value" and "format."
      // Views "moved" the entity_id and revision_id column definitions to:
      // $data[$base_table][$field['field_name']]
      // $data[$base_table][$field['field_name'] . '-revision_id']
      // This seems a bit inconsistent as a naming convention.
      // The entity_id and revision_id array elements also exist.
      continue;
    }
    $column = substr($index, strlen($field['field_name']) + 1);
    if (!in_array($column, $field['settings']['views_base_columns'])) {
      // Ignore columns not selected to be exposed.
      continue;
    }

    // Views now includes a "field" item on the entity_id and revision_id column
    // definitions, eliminating the need for the next line.
    // Add a field handler to views field since the aliased field is not passed
    // as $field to views_get_handler($table, $field, $key, $override = NULL).
    // This has an unintended side effect of exposing the columns in the Views
    // "Add fields" form.
//     $data[$base_table][$index]['field'] = array(
//       'handler' => 'views_handler_field', // @todo Now called views_handler_field_field?
//       'click sortable' => TRUE,
//     );

    // Copy the views generated item.
    $item = $old_item;
    // Use "real field" with field columns so the base table can coexist with
    // standard views "field API" field functionality.
    $item['real field'] = $index;
    $item['group'] = $group;
    foreach (array('argument', 'filter', 'sort') as $type) {
      if (isset($item[$type])) {
        // Remove the field API properties.
        $handler = $item[$type]['handler'];
        $item[$type] = array('handler' => $handler);
        // @todo Maintain ['sort']['allow empty'] = 1?
      }
    }
    // Make the column an official views field that may be selected in UI.
    // @todo The need to set the views field above makes this unnecessary.
    $item['field'] = array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    );
    // Format the title for consistency with other columns.
    // Include the column name for clarity.
    $item['title'] = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    $item['title short'] = $item['title'];
    // Add the new data item.
    $data[$base_table][$index . '_raw'] = $item;
  }

  // Declare a base table.
  $table_type = $is_revision ? ' (revision)' : '';
  // We don't want to set group at the table level, like this:
  // $data[$base_table]['table']['group'] = t('Field tables');
  // @todo With revision table, views does not join on entity_id, revision_id, and entity_type
  $data[$base_table]['table']['base'] = array(
    'field' => $is_revision ? 'revision_id_raw' : 'entity_id_raw',
    'title' => t('@field_name', array('@field_name' => $field_name_string . $table_type)),
    'help' => t('Columns from the @field table.', array('@field' => $field_name_string . $table_type)),
    'access query tag' => 'user_access', // @todo ???
  );

  // entity_type
  if (in_array($column = 'entity_type', $field['settings']['views_base_columns'])) {
    $title = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    $data[$base_table][$column] = array(
      'group' => $group,
      'title' => $title,
      'title short' => $title,
      'label' => $title,
      'help' => t('The entity type this data is attached to.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'title' => $title, // @todo Why only set title on this item?
        'help' => t('The entity type. This filter does not utilize autocomplete.')
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    );
  }

  // bundle
  if (in_array($column = 'bundle', $field['settings']['views_base_columns'])) {
    $title = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    $data[$base_table][$column] = array(
      'group' => $group,
      'title' => $title,
      'title short' => $title,
      'label' => $title,
      'help' => t('The field instance bundle the data is associated with.'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
        'help' => t('The field instance bundle the data is associated with. This filter does not utilize autocomplete.')
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    );
  }

  // deleted
  if (in_array($column = 'deleted', $field['settings']['views_base_columns'])) {
    $title = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    $data[$base_table][$column] = array(
      'group' => $group,
      'title' => $title,
      'title short' => $title,
      'label' => $title,
      'help' => t('A boolean indicating whether the data item has been deleted.'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'numeric' => TRUE,
      ),
    );
  }

  // Handle entity_id and revision_id.
  $id_fields = array('entity', 'revision');
  foreach ($id_fields as $id_field) {
    if (!in_array($id_field . '_id', $field['settings']['views_base_columns'])) {
      if ($is_revision && $id_field == 'entity' || !$is_revision && $id_field == 'revision') {
        continue;
      }
    }
    $column = $id_field . ' id';
    $title = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    // @todo Is this as simple as checking isset($data[$base_table][$field_name])?
    $is_raw = (!$is_revision && $id_field == 'entity') || ($is_revision && $id_field == 'revision');
    $field_name_raw = $field_name = $id_field . '_id';
    $field_name_raw .= $is_raw ? '_raw' : '';
    $data[$base_table][$field_name_raw] = array(
      'real field' => $field_name,
      'group' => $group,
      'title' => $title,
      'title short' => $title,
      'label' => $title,
      'help' => t('The @id_field ID.', array('@id_field' => $id_field)),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'numeric' => TRUE,
      ),
    );

    // Build the relationships between the field table and the entity tables.
    foreach ($field['bundles'] as $entity => $bundles) {
      $entity_info = entity_get_info($entity);

      if ($is_revision) {
        if (empty($entity_info['entity keys']['revision']) || empty($entity_info['revision table'])) {
          continue;
        }
        $relationship_field = $entity_info['entity keys']['revision'];
        $relationship_table = $entity_info['revision table'];
      }
      else {
        $relationship_field = $entity_info['entity keys']['id'];
        $relationship_table = $entity_info['base table'];
      }

      // In Views, a relationship is a join from a base table to a destination
      // table (which may also be a base table). Once added to a view built from
      // the base table, the relationship makes the fields of the destination
      // table available to the view.
      // @todo A name conflict exists if two entities have the same entity keys.
      $variables = array(
        '@base_table' => $field_name_string, '@relationship_table' => vf_ucfirst($relationship_table),
        '@base_field' => vf_ucfirst($field_name), '@relationship_field' => vf_ucfirst($relationship_field),
      );
      $data[$base_table][$relationship_field] = array(
        'real field' => $field_name,
        'title' => $relationship_field,
        'help' => t("The $entity relationship."),
        'relationship' => array(
          'title' => t('@base_table => @relationship_table', $variables),
          'help' => t('Relate the @base_table table to the @relationship_table table using @base_field => @relationship_field.', $variables),
          'group' => $group,
          'base' => $relationship_table,
          'base field' => $relationship_field,
          'handler' => 'views_handler_relationship',
          'skip base' => array($relationship_table),
//           'extra' => array(
//             array('field' => 'entity_type', 'value' => $entity),
//             array('field' => 'deleted', 'value' => 0, 'numeric' => TRUE),
//           ),
        ),
      );
    }
  }

  // language
  if (in_array($column = 'language', $field['settings']['views_base_columns'])) {
    $title = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    $data[$base_table][$column] = array(
      'group' => $group,
      'title' => $title,
      'title short' => $title,
      'label' => $title,
      'help' => t('The language of the data item'),
      'field' => array(
        'handler' => 'views_handler_field',
        'click sortable' => TRUE,
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_string',
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_string',
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    );
  }

  // delta
  if (in_array($column = 'delta', $field['settings']['views_base_columns'])) {
    $title = t('@field_name => @column', array('@field_name' => $field_name_string, '@column' => vf_ucfirst($column)));
    // Views defines this field if multiplicity != 1.
    $field_name_raw = isset($data[$base_table]['delta']) ? 'delta_raw' : 'delta';
    $data[$base_table][$field_name_raw] = array(
      'real field' => 'delta',
      'group' => $group,
      'title' => $title,
      'title short' => $title,
      'label' => $title,
      'help' => t('The sequence number of the data item (multi-value fields).'),
      'field' => array(
        'handler' => 'views_handler_field_numeric',
      ),
      'argument' => array(
        'handler' => 'views_handler_argument_numeric',
        'numeric' => TRUE,
      ),
      'filter' => array(
        'handler' => 'views_handler_filter_numeric',
        'numeric' => TRUE,
      ),
      'sort' => array(
        'handler' => 'views_handler_sort',
      ),
    );
  }

  // Restore fields from views.
  $data[$base_table] += $old_table;
}

/**
 * Returns text with underscores replaced by spaces and first letter capped.
 *
 * @param string $text
 *   The text to format.
 *
 * @return
 *   Formatted text.
 */
function vf_ucfirst($text) {
  return str_replace('_', ' ', ucfirst($text));
}

/**
 * Adds a multi-column join definition between two field tables.
 *
 * The join uses the primary key columns.
 *
 * In Views, a join is from a source table (which may also be a base table) to a
 * base table. The join automatically makes the fields of the source table
 * available on a view built from the base table.
 *
 * @param array $data
 *   The views data definition.
 * @param string $base_field
 *   Together with $base_type, this defines the base table whose data definition
 *   is to be modified.
 * @param string $join_field
 *   Together with $base_type, this defines the table to join the base table to.
 *   Note: when called by field_group_views, this should be the primary field.
 * @param string $base_type
 *   The prefix applied to $base_field and $join_field to determine the base and
 *   join tables. Allowed values are 'field_data' and 'field_revision.'
 */
function views_field_add_multi_join(&$data, $base_field, $join_field, $base_type = 'field_data') {
  if ($base_type != 'field_data' && $base_type != 'field_revision') {
    return;
  }

  $base_table = $base_type . '_' . $base_field;
  $join_table = $base_type . '_' . $join_field;
  if (!isset($data[$base_table])) {
    return;
  }

  // The primary key columns of a field table.
  $fields = drupal_map_assoc(array('entity_type', 'entity_id', 'revision_id', 'deleted', 'delta', 'language'));
  if ($base_type == 'field_data' || !isset($data[$base_table]['revision_id'])) {
    unset($fields['revision_id']);
  }
  // Define the join.
  $data[$base_table]['table']['join'][$join_table] = array(
    'handler' => 'views_field_join',
    'left_field' => $fields,
    'field' => $fields,
    'type' => 'INNER',
    'extra' => array(
      array('field' => 'deleted', 'value' => 0, 'numeric' => TRUE),
    ),
  );
  // Only expose the join definition to alteration.
  $context = array(
    'base_field' => $base_field,
    'join_field' => $join_field,
    'base_type' => $base_type,
  );
  drupal_alter('views_field_add_multi_join', $data[$base_table]['table']['join'][$join_table], $context);
}
