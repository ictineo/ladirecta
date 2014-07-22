<?php
/**
 * @file
 * ictdirecta_pvenda.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_pvenda_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_pvenda_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_pvenda_node_info() {
  $items = array(
    'punts_de_venda' => array(
      'name' => t('Punts de Venda'),
      'base' => 'node_content',
      'description' => t('Per afegir un nou punt de venda'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
