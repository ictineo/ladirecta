<?php
/**
 * @file
 * ictdirecta_agenda.features.inc
 */

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
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
