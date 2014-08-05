<?php
/**
 * @file
 * ictdirecta_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subscriute-login';
  $context->description = 'bloque subscripcions pagina login';
  $context->tag = 'login';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('bloque subscripcions pagina login');
  t('login');
  $export['subscriute-login'] = $context;

  return $export;
}
