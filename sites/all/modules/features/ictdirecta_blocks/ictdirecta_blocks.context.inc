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
  $context->name = 'footer';
  $context->description = 'footer';
  $context->tag = 'footer';
  $context->conditions = array();
  $context->reactions = array(
    'menu' => 'admin/structure/menu/manage/menu-menu-footer',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('footer');
  $export['footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_blocks';
  $context->description = 'blocks footer';
  $context->tag = 'footer';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-menu-footer' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-footer',
          'region' => 'footer',
          'weight' => '-39',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'footer',
          'weight' => '-38',
        ),
        'views--exp-hemeroteca-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-hemeroteca-page_1',
          'region' => 'footer',
          'weight' => '-37',
        ),
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-36',
        ),
        'nice_menus-3' => array(
          'module' => 'nice_menus',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-35',
        ),
        'menu-menu-menu-xxss' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-xxss',
          'region' => 'footer',
          'weight' => '-34',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'footer',
          'weight' => '-33',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blocks footer');
  t('footer');
  $export['footer_blocks'] = $context;

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
