<?php
/**
 * @file
 * ictdirecta_cdserveis.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_cdserveis_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'filtres_serveis_node_final';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'cd_serveis' => 'cd_serveis',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-cd_serveis-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-cd_serveis-page_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['filtres_serveis_node_final'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'serveis_colocacio';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'cd-serveis' => 'cd-serveis',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cd_noticias-block' => array(
          'module' => 'views',
          'delta' => 'cd_noticias-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-cd_serveis-block' => array(
          'module' => 'views',
          'delta' => 'cd_serveis-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views--exp-cd_serveis-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-cd_serveis-page_1',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['serveis_colocacio'] = $context;

  return $export;
}
