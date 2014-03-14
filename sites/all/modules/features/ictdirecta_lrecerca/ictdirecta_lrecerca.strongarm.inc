<?php
/**
 * @file
 * ictdirecta_lrecerca.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_lrecerca_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_linies_de_recerca';
  $strongarm->value = 'edit-easy-social';
  $export['additional_settings__active_tab_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_linies_de_recerca';
  $strongarm->value = 0;
  $export['comment_anonymous_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_linies_de_recerca';
  $strongarm->value = 1;
  $export['comment_default_mode_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_linies_de_recerca';
  $strongarm->value = '50';
  $export['comment_default_per_page_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_linies_de_recerca';
  $strongarm->value = 1;
  $export['comment_form_location_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_linies_de_recerca';
  $strongarm->value = '2';
  $export['comment_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_linies_de_recerca';
  $strongarm->value = '1';
  $export['comment_preview_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_linies_de_recerca';
  $strongarm->value = 1;
  $export['comment_subject_field_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_linies_de_recerca_count';
  $strongarm->value = '1';
  $export['easy_social_linies_de_recerca_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_linies_de_recerca_enable';
  $strongarm->value = 1;
  $export['easy_social_linies_de_recerca_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_linies_de_recerca_type';
  $strongarm->value = '0';
  $export['easy_social_linies_de_recerca_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_linies_de_recerca_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_linies_de_recerca_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_linies_de_recerca';
  $strongarm->value = '0';
  $export['language_content_type_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_linies_de_recerca';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_linies_de_recerca';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_linies_de_recerca';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_linies_de_recerca';
  $strongarm->value = '1';
  $export['node_preview_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_linies_de_recerca';
  $strongarm->value = 1;
  $export['node_submitted_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_linies_de_recerca';
  $strongarm->value = '';
  $export['page_title_type_linies_de_recerca'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_linies_de_recerca_showfield';
  $strongarm->value = 0;
  $export['page_title_type_linies_de_recerca_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_linies_de_recerca';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_linies_de_recerca'] = $strongarm;

  return $export;
}
