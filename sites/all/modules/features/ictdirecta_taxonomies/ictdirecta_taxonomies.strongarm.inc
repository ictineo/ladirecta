<?php
/**
 * @file
 * ictdirecta_taxonomies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_taxonomies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_seccions_web_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_seccions_web_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_taxonomy_term_territorial';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_taxonomy_term_territorial'] = $strongarm;

  return $export;
}
