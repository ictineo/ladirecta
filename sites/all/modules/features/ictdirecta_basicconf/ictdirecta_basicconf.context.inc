<?php
/**
 * @file
 * ictdirecta_basicconf.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ictdirecta_basicconf_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'enllac_xxss';
  $context->description = 'enllaç top a xxss';
  $context->tag = '';
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
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-14',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('enllaç top a xxss');
  $export['enllac_xxss'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_lateral';
  $context->description = 'Colocacion menu lateral a la region help';
  $context->tag = '';
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
        'views-agenda_llista-block_1' => array(
          'module' => 'views',
          'delta' => 'agenda_llista-block_1',
          'region' => 'help',
          'weight' => '-10',
        ),
        'views-cd_noticias-block_1' => array(
          'module' => 'views',
          'delta' => 'cd_noticias-block_1',
          'region' => 'help',
          'weight' => '-9',
        ),
        'views-cd_serveis-block_1' => array(
          'module' => 'views',
          'delta' => 'cd_serveis-block_1',
          'region' => 'help',
          'weight' => '-8',
        ),
        'views-linies_de_recerca-block' => array(
          'module' => 'views',
          'delta' => 'linies_de_recerca-block',
          'region' => 'help',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colocacion menu lateral a la region help');
  $export['menu_lateral'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_box';
  $context->description = 'Colocació de la search box';
  $context->tag = '';
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
        'views--exp-hemeroteca-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-hemeroteca-page_1',
          'region' => 'header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colocació de la search box');
  $export['search_box'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'subscriu';
  $context->description = 'asd';
  $context->tag = '';
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
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'header',
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('asd');
  $export['subscriu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'usermenu';
  $context->description = '';
  $context->tag = '';
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
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'header',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['usermenu'] = $context;

  return $export;
}
