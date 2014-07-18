<?php
/**
 * @file
 * ictdirecta_tagadelic.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_tagadelic_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagadelic_taxonomy_vocabularies';
  $strongarm->value = array(
    1 => '1',
    2 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $export['tagadelic_taxonomy_vocabularies'] = $strongarm;

  return $export;
}
