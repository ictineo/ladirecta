<?php
/**
 * @file
 * ictdirecta_portada.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_portada_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_columnaderecha';
  $context->description = '';
  $context->tag = 'portada';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portada_columnaderecha-block_1' => array(
          'module' => 'views',
          'delta' => 'portada_columnaderecha-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portada');
  $export['portada_columnaderecha'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_columnaizquierda';
  $context->description = 'Colocación columna izquierda en portada';
  $context->tag = 'portada';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-d53ccad58cde1c4a6dcb8f018831aab2' => array(
          'module' => 'views',
          'delta' => 'd53ccad58cde1c4a6dcb8f018831aab2',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colocación columna izquierda en portada');
  t('portada');
  $export['portada_columnaizquierda'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_destacadotodascolumnas';
  $context->description = '';
  $context->tag = 'portada';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c721e0c0c017aee43ae86693d23b264b' => array(
          'module' => 'views',
          'delta' => 'c721e0c0c017aee43ae86693d23b264b',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portada');
  $export['portada_destacadotodascolumnas'] = $context;

  return $export;
}
