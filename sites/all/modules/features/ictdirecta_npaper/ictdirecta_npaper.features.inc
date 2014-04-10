<?php
/**
 * @file
 * ictdirecta_npaper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_npaper_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_npaper_node_info() {
  $items = array(
    'npaper' => array(
      'name' => t('Noticies paper'),
      'base' => 'node_content',
      'description' => t('Notícies procedents del paper'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
