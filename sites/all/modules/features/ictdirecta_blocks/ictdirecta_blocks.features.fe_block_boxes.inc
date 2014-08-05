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
  $fe_block_boxes->info = 'accedeix_login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'accedeix_login';
  $fe_block_boxes->body = 'Accedeix';

  $export['accedeix_login'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'caixa de login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'customlogin';
  $fe_block_boxes->body = '<a href="/user">Inicia sessió</a>';

  $export['customlogin'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'login-pass';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'login_pass';
  $fe_block_boxes->body = 'Has oblidat la teva <a href="user/password">contrassenya</a>?';

  $export['login_pass'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'nou_directa_login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'nou_directa_login';
  $fe_block_boxes->body = 'Nou a la Directa?';

  $export['nou_directa_login'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'botin despliegue secciones';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'sections_button';
  $fe_block_boxes->body = '<a href="">Seccions</a>';

  $export['sections_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'subscriute-login';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'subscriute_login';
  $fe_block_boxes->body = '<a href="">Susbcriute</a>';

  $export['subscriute_login'] = $fe_block_boxes;

  return $export;
}
