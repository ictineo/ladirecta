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
  $strongarm->name = 'save_continue_fotogaleria';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_fotogaleria'] = $strongarm;

  return $export;
}
