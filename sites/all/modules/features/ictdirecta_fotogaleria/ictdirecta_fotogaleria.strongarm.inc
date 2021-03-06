<?php
/**
 * @file
 * ictdirecta_fotogaleria.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_fotogaleria_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_fotogaleria';
  $strongarm->value = 'edit-easy-social';
  $export['additional_settings__active_tab_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_fotogaleria';
  $strongarm->value = 0;
  $export['comment_anonymous_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_fotogaleria';
  $strongarm->value = 0;
  $export['comment_default_mode_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_fotogaleria';
  $strongarm->value = '50';
  $export['comment_default_per_page_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_fotogaleria';
  $strongarm->value = 1;
  $export['comment_form_location_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_fotogaleria';
  $strongarm->value = '1';
  $export['comment_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_fotogaleria';
  $strongarm->value = '1';
  $export['comment_preview_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_fotogaleria';
  $strongarm->value = 1;
  $export['comment_subject_field_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_fotogaleria_count';
  $strongarm->value = '1';
  $export['easy_social_fotogaleria_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_fotogaleria_enable';
  $strongarm->value = 1;
  $export['easy_social_fotogaleria_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_fotogaleria_type';
  $strongarm->value = '0';
  $export['easy_social_fotogaleria_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_fotogaleria_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_fotogaleria_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_fotografies';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_fotografies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__fotogaleria';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'xmlsitemap' => array(
          'weight' => '1',
        ),
        'flag' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'easy_social_1' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '101',
            'visible' => FALSE,
          ),
        ),
        'flag_portada_cdr' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fotogaleria';
  $strongarm->value = '0';
  $export['language_content_type_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fotogaleria';
  $strongarm->value = array();
  $export['menu_options_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fotogaleria';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fotogaleria';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fotogaleria';
  $strongarm->value = '1';
  $export['node_preview_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fotogaleria';
  $strongarm->value = 0;
  $export['node_submitted_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_fotogaleria';
  $strongarm->value = '';
  $export['page_title_type_fotogaleria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_fotogaleria_showfield';
  $strongarm->value = 0;
  $export['page_title_type_fotogaleria_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_fotogaleria';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_fotogaleria'] = $strongarm;

  return $export;
}
