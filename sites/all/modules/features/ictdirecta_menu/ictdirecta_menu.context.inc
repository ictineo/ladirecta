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
  $context->tag = '';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-seccions-web' => array(
          'module' => 'menu',
          'delta' => 'menu-seccions-web',
          'region' => 'featured',
          'weight' => '0',
        ),
        'menu-menu-menu-territorial' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-territorial',
          'region' => 'featured',
          'weight' => '0',
        ),
        'menu-menu-menu-paper' => array(
          'module' => 'menu',
          'delta' => 'menu-menu-paper',
          'region' => 'featured',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['menu_paper'] = $context;

  return $export;
}
