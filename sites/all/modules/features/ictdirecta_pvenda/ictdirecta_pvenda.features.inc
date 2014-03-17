<?php
/**
 * @file
 * ictdirecta_pvenda.features.inc
 */

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
