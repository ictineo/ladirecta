<?php
/**
 * @file
 * ictdirecta_actualitat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_actualitat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_actualitat_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_actualitat_node_info() {
  $items = array(
    'actualitat' => array(
      'name' => t('Notícia'),
      'base' => 'node_content',
      'description' => t('Element principal de contingut. Pensat per continguts treballats i relativament extensos, en la portada es mostrarà a la columna esquerra. No te limitació de caràcters'),
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
