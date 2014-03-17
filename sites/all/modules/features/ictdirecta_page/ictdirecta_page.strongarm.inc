<?php
/**
 * @file
 * ictdirecta_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = FALSE;
  $export['node_submitted_page'] = $strongarm;

  return $export;
}
