<?php
/**
 * @file
 * ictdirecta_cdnot.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_cdnot_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_cdnot_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_cdnot_node_info() {
  $items = array(
    'cd_noticies' => array(
      'name' => t('Cd-Noticies'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
