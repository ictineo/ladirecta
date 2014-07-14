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
  $context->name = 'fotogalerias';
  $context->description = 'bloques fotogalerias';
  $context->tag = 'fotogalerias';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'fotogaleria' => 'fotogaleria',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('bloques fotogalerias');
  t('fotogalerias');
  $export['fotogalerias'] = $context;

  return $export;
}
