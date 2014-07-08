<?php
/**
 * @file
 * ictdirecta_faldo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_faldo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_faldo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_faldo_node_info() {
  $items = array(
    'faldo' => array(
      'name' => t('Faldo'),
      'base' => 'node_content',
      'description' => t('Faldó dels dimecres'),
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
