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
  $context->name = 'desplegar_secc';
  $context->description = 'Boton desplegable menu secciones';
  $context->tag = 'header';
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
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'header',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Boton desplegable menu secciones');
  t('header');
  $export['desplegar_secc'] = $context;

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
        'views-portada_columnadreta-block_1' => array(
          'module' => 'views',
          'delta' => 'portada_columnadreta-block_1',
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
  $context->name = 'portada_columnaizq_seccions';
  $context->description = '';
  $context->tag = 'portada';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'seccionsweb/*' => 'seccionsweb/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-52ac42fa3c76d4864389298401da2087' => array(
          'module' => 'views',
          'delta' => '52ac42fa3c76d4864389298401da2087',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('portada');
  $export['portada_columnaizq_seccions'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_dreta_seccions';
  $context->description = '';
  $context->tag = 'portada';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'seccionsweb/*' => 'seccionsweb/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portada_columnadreta-block_2' => array(
          'module' => 'views',
          'delta' => 'portada_columnadreta-block_2',
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
  $export['portada_dreta_seccions'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_dreta_territori';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'territorial/*' => 'territorial/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-portada_columnadreta-block_3' => array(
          'module' => 'views',
          'delta' => 'portada_columnadreta-block_3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portada_dreta_territori'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_esquerra_territori';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'territorial/*' => 'territorial/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-e6c39e78393a5534ee4b34f8efc858ca' => array(
          'module' => 'views',
          'delta' => 'e6c39e78393a5534ee4b34f8efc858ca',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portada_esquerra_territori'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_expresions_territorial';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'territorial/*' => 'territorial/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-160100222da673a8132c52dad64ea9c2' => array(
          'module' => 'views',
          'delta' => '160100222da673a8132c52dad64ea9c2',
          'region' => 'interior',
          'weight' => '-10',
        ),
        'views-e7607627710ba8b9dcad21d78ca817fc' => array(
          'module' => 'views',
          'delta' => 'e7607627710ba8b9dcad21d78ca817fc',
          'region' => 'interior',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portada_expresions_territorial'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_negreta';
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
        'views-9e43a5859a02b156a0111ba48933a77f' => array(
          'module' => 'views',
          'delta' => '9e43a5859a02b156a0111ba48933a77f',
          'region' => 'interior',
          'weight' => '-10',
        ),
        'views-b6fc8349d2e36602d9ec641764829686' => array(
          'module' => 'views',
          'delta' => 'b6fc8349d2e36602d9ec641764829686',
          'region' => 'interior',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portada_negreta'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'portada_seccions_inferior';
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
        'views-portada_seccions-block' => array(
          'module' => 'views',
          'delta' => 'portada_seccions-block',
          'region' => 'seccion_portada',
          'weight' => '-10',
        ),
        'views-portada_seccions-block_1' => array(
          'module' => 'views',
          'delta' => 'portada_seccions-block_1',
          'region' => 'seccion_portada',
          'weight' => '-9',
        ),
        'views-portada_seccions-block_2' => array(
          'module' => 'views',
          'delta' => 'portada_seccions-block_2',
          'region' => 'seccion_portada',
          'weight' => '-8',
        ),
        'views-portada_seccions-block_3' => array(
          'module' => 'views',
          'delta' => 'portada_seccions-block_3',
          'region' => 'seccion_portada',
          'weight' => '-7',
        ),
        'views-portada_seccions-block_4' => array(
          'module' => 'views',
          'delta' => 'portada_seccions-block_4',
          'region' => 'seccion_portada',
          'weight' => '-6',
        ),
        'views-portada_seccions-block_5' => array(
          'module' => 'views',
          'delta' => 'portada_seccions-block_5',
          'region' => 'seccion_portada',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['portada_seccions_inferior'] = $context;

  return $export;
}
