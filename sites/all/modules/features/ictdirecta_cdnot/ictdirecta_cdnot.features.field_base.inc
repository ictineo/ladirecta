<?php
/**
 * @file
 * ictdirecta_cdnot.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ictdirecta_cdnot_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_destacar'
  $field_bases['field_destacar'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_destacar',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'Destacar',
      ),
      'allowed_values_function' => '',
      'views_base_columns' => array(),
      'views_base_table' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
