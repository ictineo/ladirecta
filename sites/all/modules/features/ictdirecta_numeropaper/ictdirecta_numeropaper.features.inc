<?php
/**
 * @file
 * ictdirecta_numeropaper.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ictdirecta_numeropaper_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_numeropaper_node_info() {
  $items = array(
    'numero_paper' => array(
      'name' => t('Numero Paper'),
      'base' => 'node_content',
      'description' => t('Per publicar un número en paper sencer de La Directa'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
