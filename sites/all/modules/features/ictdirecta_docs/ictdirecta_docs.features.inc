<?php
/**
 * @file
 * ictdirecta_docs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_docs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_docs_node_info() {
  $items = array(
    'documents' => array(
      'name' => t('Documents'),
      'base' => 'node_content',
      'description' => t('Documents per associar a una notícia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
