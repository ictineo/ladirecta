<?php
/**
 * @file
 * ictdirecta_agenda.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_agenda_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_esdeveniment_agenda';
  $strongarm->value = 0;
  $export['comment_anonymous_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_esdeveniment_agenda';
  $strongarm->value = 1;
  $export['comment_default_mode_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_esdeveniment_agenda';
  $strongarm->value = '50';
  $export['comment_default_per_page_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_esdeveniment_agenda';
  $strongarm->value = '0';
  $export['comment_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_esdeveniment_agenda';
  $strongarm->value = 1;
  $export['comment_form_location_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_esdeveniment_agenda';
  $strongarm->value = '1';
  $export['comment_preview_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_esdeveniment_agenda';
  $strongarm->value = 1;
  $export['comment_subject_field_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_esdeveniment_agenda';
  $strongarm->value = '0';
  $export['language_content_type_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_esdeveniment_agenda';
  $strongarm->value = array();
  $export['menu_options_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_esdeveniment_agenda';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_esdeveniment_agenda';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_esdeveniment_agenda';
  $strongarm->value = '1';
  $export['node_preview_esdeveniment_agenda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_esdeveniment_agenda';
  $strongarm->value = 0;
  $export['node_submitted_esdeveniment_agenda'] = $strongarm;

  return $export;
}
