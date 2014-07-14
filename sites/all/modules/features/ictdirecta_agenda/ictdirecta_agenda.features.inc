<?php
/**
 * @file
 * ictdirecta_agenda.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_agenda_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_agenda_node_info() {
  $items = array(
    'esdeveniment_agenda' => array(
      'name' => t('Esdeveniment agenda'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
