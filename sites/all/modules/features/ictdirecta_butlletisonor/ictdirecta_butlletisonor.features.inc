<?php
/**
 * @file
 * ictdirecta_butlletisonor.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ictdirecta_butlletisonor_node_info() {
  $items = array(
    'butlleti_sonor' => array(
      'name' => t('Butlleti sonor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Títol'),
      'help' => '',
    ),
  );
  return $items;
}
