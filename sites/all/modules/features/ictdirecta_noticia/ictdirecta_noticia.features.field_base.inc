<?php
/**
 * @file
 * ictdirecta_noticia.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ictdirecta_noticia_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_adre_a_correu_e'
  $field_bases['field_adre_a_correu_e'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_adre_a_correu_e',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_continguts_relacionats'
  $field_bases['field_continguts_relacionats'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_continguts_relacionats',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_continguts_relacionats_ref'
  $field_bases['field_continguts_relacionats_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_continguts_relacionats_ref',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'continguts_relacionats',
        ),
      ),
      'target_type' => 'node',
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_nom_i_cognoms'
  $field_bases['field_nom_i_cognoms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nom_i_cognoms',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'views_base_columns' => array(),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
