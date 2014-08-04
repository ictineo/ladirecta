<?php
/**
 * @file
 * ictdirecta_fotogaleria.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_fotogaleria_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_fotogaleria_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_fotogaleria_node_info() {
  $items = array(
    'fotogaleria' => array(
      'name' => t('Fotogaleria'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
