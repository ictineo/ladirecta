<?php
/**
 * @file
 * ictdirecta_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ictdirecta_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'caixa de login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'customlogin';
  $fe_block_boxes->body = '<a href="/user">Inicia sessió</a>';

  $export['customlogin'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'botin despliegue secciones';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sections_button';
  $fe_block_boxes->body = '<a href="">Seccions</a>';

  $export['sections_button'] = $fe_block_boxes;

  return $export;
}
