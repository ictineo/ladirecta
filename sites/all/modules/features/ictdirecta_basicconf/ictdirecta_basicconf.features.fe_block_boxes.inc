<?php
/**
 * @file
 * ictdirecta_basicconf.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ictdirecta_basicconf_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'enllaç de subscripcions';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'subscriu';
  $fe_block_boxes->body = '<a href=subscripcions> <div id=subscriu> Subscriu\'t-hi! </div> </a>';

  $export['subscriu'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Enllaços de xxss';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'xss_header';
  $fe_block_boxes->body = '<a class="tw" href=""></a>
<a class="fb" href=""></a>
<a class="vi" href=""></a>
';

  $export['xss_header'] = $fe_block_boxes;

  return $export;
}
