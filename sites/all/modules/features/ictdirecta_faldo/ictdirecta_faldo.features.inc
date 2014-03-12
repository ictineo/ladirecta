<?php
/**
 * @file
 * ictdirecta_faldo.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ictdirecta_faldo_node_info() {
  $items = array(
    'faldo' => array(
      'name' => t('Faldo'),
      'base' => 'node_content',
      'description' => t('Faldó dels dimecres'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
