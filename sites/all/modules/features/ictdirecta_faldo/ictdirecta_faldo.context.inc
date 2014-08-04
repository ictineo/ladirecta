<?php
/**
 * @file
 * ictdirecta_faldo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_faldo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bs_faldo_portada';
  $context->description = 'Colocació del faldo petit a la second side bar';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'seccionsweb/*' => 'seccionsweb/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fald_-block_1' => array(
          'module' => 'views',
          'delta' => 'fald_-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colocació del faldo petit a la second side bar');
  $export['bs_faldo_portada'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faldo';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-fald_-block' => array(
          'module' => 'views',
          'delta' => 'fald_-block',
          'region' => 'faldo',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['faldo'] = $context;

  return $export;
}
