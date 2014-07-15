<?php
/**
 * @file
 * ictdirecta_video.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_video_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'galeria_video';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-galeria_video-block' => array(
          'module' => 'views',
          'delta' => 'galeria_video-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-galeria_video-block_1' => array(
          'module' => 'views',
          'delta' => 'galeria_video-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['galeria_video'] = $context;

  return $export;
}
