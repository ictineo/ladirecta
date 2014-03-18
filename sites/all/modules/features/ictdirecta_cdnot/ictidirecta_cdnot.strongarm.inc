<?php
/**
 * @file
 * ictidirecta_cdnot.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictidirecta_cdnot_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_cd_noticies';
  $strongarm->value = 'edit-easy-social';
  $export['additional_settings__active_tab_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_cd_noticies';
  $strongarm->value = 0;
  $export['comment_anonymous_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_cd_noticies';
  $strongarm->value = '0';
  $export['comment_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_cd_noticies';
  $strongarm->value = 1;
  $export['comment_default_mode_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_cd_noticies';
  $strongarm->value = '50';
  $export['comment_default_per_page_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_cd_noticies';
  $strongarm->value = 1;
  $export['comment_form_location_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_cd_noticies';
  $strongarm->value = '1';
  $export['comment_preview_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_cd_noticies';
  $strongarm->value = 1;
  $export['comment_subject_field_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_noticies_count';
  $strongarm->value = '1';
  $export['easy_social_cd_noticies_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_noticies_type';
  $strongarm->value = '0';
  $export['easy_social_cd_noticies_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_noticies_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_cd_noticies_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_comment_cd_noticies_enable';
  $strongarm->value = 0;
  $export['easy_social_comment_cd_noticies_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_cd_noticies';
  $strongarm->value = '0';
  $export['language_content_type_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_cd_noticies';
  $strongarm->value = array();
  $export['menu_options_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_cd_noticies';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_cd_noticies';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_cd_noticies';
  $strongarm->value = '1';
  $export['node_preview_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_cd_noticies';
  $strongarm->value = 0;
  $export['node_submitted_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_cd_noticies';
  $strongarm->value = '';
  $export['page_title_type_cd_noticies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_cd_noticies_showfield';
  $strongarm->value = 0;
  $export['page_title_type_cd_noticies_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_cd_noticies';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_cd_noticies'] = $strongarm;

  return $export;
}
