<?php
/**
 * @file
 * ictdirecta_lrecerca.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_lrecerca_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_lrecerca_node_info() {
  $items = array(
    'linies_de_recerca' => array(
      'name' => t('Linies de recerca'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
