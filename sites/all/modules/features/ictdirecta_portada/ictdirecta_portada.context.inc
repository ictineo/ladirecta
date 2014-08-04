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
  $context->name = 'customlogin';
  $context->description = 'Block de login unregistered users';
  $context->tag = 'header';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block de login unregistered users');
  t('header');
  $export['customlogin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_columnaderecha';
  $context->description = 'Colocación columna derecha en first side bar';
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
        'views-52ac42fa3c76d4864389298401da2087' => array(
          'module' => 'views',
          'delta' => '52ac42fa3c76d4864389298401da2087',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colocación columna derecha en first side bar');
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
          'region' => 'destacat',
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
