<?php
/**
 * @file
 * ictdirecta_tagadelic.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_tagadelic_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tagadelic';
  $context->description = '';
  $context->tag = '';
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
        'tagadelic_taxonomy-tagadelic_taxonomy' => array(
          'module' => 'tagadelic_taxonomy',
          'delta' => 'tagadelic_taxonomy',
          'region' => 'sidebar_second',
          'weight' => '4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['tagadelic'] = $context;

  return $export;
}
