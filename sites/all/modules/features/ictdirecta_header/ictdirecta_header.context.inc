<?php
/**
 * @file
 * ictdirecta_header.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_header_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'caixa_login';
  $context->description = 'caixa de login';
  $context->tag = 'header';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('caixa de login');
  t('header');
  $export['caixa_login'] = $context;

  return $export;
}
