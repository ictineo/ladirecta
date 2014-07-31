<?php
/**
 * @file
 * ictdirecta_menu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_menu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_paper';
  $context->description = '';
  $context->tag = 'navigation';
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
        'nice_menus-3' => array(
          'module' => 'nice_menus',
          'delta' => '3',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'navigation',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('navigation');
  $export['menu_paper'] = $context;

  return $export;
}
