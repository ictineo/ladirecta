<?php
/**
 * @file
 * ictdirecta_fotogaleria.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_fotogaleria_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'fotogaleries';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fotogaleries' => 'fotogaleries',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fotogaleries-block' => array(
          'module' => 'views',
          'delta' => 'fotogaleries-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-fotogaleries-block_2' => array(
          'module' => 'views',
          'delta' => 'fotogaleries-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['fotogaleries'] = $context;

  return $export;
}
