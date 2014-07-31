<?php
/**
 * @file
 * ictdirecta_basicconf.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ictdirecta_basicconf_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-subscriu'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'subscriu',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'directa' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'directa',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-xss_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'xss_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'directa' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'directa',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
