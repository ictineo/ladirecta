<?php
/**
 * @file
 * ictdirecta_butlletisonor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_butlletisonor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_butlletisonor_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_butlletisonor_node_info() {
  $items = array(
    'butlleti_sonor' => array(
      'name' => t('Butlleti sonor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
