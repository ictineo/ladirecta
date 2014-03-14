<?php
/**
 * @file
 * ictdirecta_cdserveis.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_cdserveis_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ictdirecta_cdserveis_node_info() {
  $items = array(
    'cd_serveis' => array(
      'name' => t('CD-Serveis'),
      'base' => 'node_content',
      'description' => t('Per afegir serveis que s\'ofereixen al Complement Directa'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
