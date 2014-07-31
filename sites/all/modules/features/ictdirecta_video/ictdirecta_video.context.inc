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
    'path' => array(
      'values' => array(
        'videogaleria' => 'videogaleria',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-videogaleria-block' => array(
          'module' => 'views',
          'delta' => 'videogaleria-block',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['galeria_video'] = $context;

  return $export;
}
