<?php
/**
 * @file
 * ictdirecta_n_paper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_n_paper_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_n_paper_node_info() {
  $items = array(
    'noticia_paper' => array(
      'name' => t('Noticia paper'),
      'base' => 'node_content',
      'description' => t('Continguts procedents del paper'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
