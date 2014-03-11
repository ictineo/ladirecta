<?php
/**
 * @file
 * ictidirecta_cdnot.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ictidirecta_cdnot_node_info() {
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
