<?php
/**
 * @file
 * ictdirecta_galvideo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_galvideo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_galvideo_node_info() {
  $items = array(
    'galeria_video' => array(
      'name' => t('Galeria de Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
