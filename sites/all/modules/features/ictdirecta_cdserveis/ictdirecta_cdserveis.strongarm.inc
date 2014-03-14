<?php
/**
 * @file
 * ictdirecta_cdserveis.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_cdserveis_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_cd_serveis';
  $strongarm->value = 'edit-easy-social';
  $export['additional_settings__active_tab_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cd_serveis';
  $strongarm->value = 0;
  $export['comment_anonymous_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cd_serveis';
  $strongarm->value = '2';
  $export['comment_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cd_serveis';
  $strongarm->value = 1;
  $export['comment_default_mode_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cd_serveis';
  $strongarm->value = '50';
  $export['comment_default_per_page_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cd_serveis';
  $strongarm->value = 1;
  $export['comment_form_location_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cd_serveis';
  $strongarm->value = '1';
  $export['comment_preview_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cd_serveis';
  $strongarm->value = 1;
  $export['comment_subject_field_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_serveis_count';
  $strongarm->value = '1';
  $export['easy_social_cd_serveis_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_serveis_enable';
  $strongarm->value = 0;
  $export['easy_social_cd_serveis_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_serveis_type';
  $strongarm->value = '0';
  $export['easy_social_cd_serveis_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_serveis_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_cd_serveis_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__cd_serveis';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_cd_serveis';
  $strongarm->value = '0';
  $export['language_content_type_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cd_serveis';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cd_serveis';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cd_serveis';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cd_serveis';
  $strongarm->value = '1';
  $export['node_preview_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cd_serveis';
  $strongarm->value = 1;
  $export['node_submitted_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_cd_serveis';
  $strongarm->value = '';
  $export['page_title_type_cd_serveis'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_cd_serveis_showfield';
  $strongarm->value = 0;
  $export['page_title_type_cd_serveis_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_cd_serveis';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_cd_serveis'] = $strongarm;

  return $export;
}
