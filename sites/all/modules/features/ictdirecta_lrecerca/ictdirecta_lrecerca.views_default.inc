<?php
/**
 * @file
 * ictdirecta_lrecerca.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_lrecerca_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'linies_de_recerca';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Linies de Recerca';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Linies de Recerca';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '1';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Linies de Recerca';
  $handler->display->display_options['header']['area']['content'] = 'Quadre de text inclós abans de les línis de recerca, preguntar que es Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Footer: Global: Unfiltered text */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<a href=/linies-de-recerca> Veure totes les línies -> </a>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['prefix'] = '[Icon] ';
  $handler->display->display_options['fields']['comment_count']['suffix'] = ' Aportacions';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'linies_de_recerca' => 'linies_de_recerca',
  );
  /* Filter criterion: Content: Revisat (field_revisat) */
  $handler->display->display_options['filters']['field_revisat_value']['id'] = 'field_revisat_value';
  $handler->display->display_options['filters']['field_revisat_value']['table'] = 'field_data_field_revisat';
  $handler->display->display_options['filters']['field_revisat_value']['field'] = 'field_revisat_value';
  $handler->display->display_options['filters']['field_revisat_value']['value'] = array(
    'Si' => 'Si',
  );

  /* Display: Totes les ĺínies */
  $handler = $view->new_display('page', 'Totes les ĺínies', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['path'] = 'linies-de-recerca';

  /* Display: Menu lateral */
  $handler = $view->new_display('block', 'Menu lateral', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Intern per admin */
  $handler = $view->new_display('block', 'Intern per admin', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'linies_de_recerca' => 'linies_de_recerca',
  );
  $translatables['linies_de_recerca'] = array(
    t('Master'),
    t('Linies de Recerca'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Quadre de text inclós abans de les línis de recerca, preguntar que es Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es
Quadre de text inclós abans de les línis de recerca, preguntar que es'),
    t('<a href=/linies-de-recerca> Veure totes les línies -> </a>'),
    t('.'),
    t(','),
    t('[Icon] '),
    t(' Aportacions'),
    t('Totes les ĺínies'),
    t('more'),
    t('Menu lateral'),
    t('Intern per admin'),
  );
  $export['linies_de_recerca'] = $view;

  return $export;
}
