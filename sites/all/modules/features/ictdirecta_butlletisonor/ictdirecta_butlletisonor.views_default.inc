<?php
/**
 * @file
 * ictdirecta_butlletisonor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_butlletisonor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'butlletisonor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Butlletisonor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Butlletisonor';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nº */
  $handler->display->display_options['fields']['field_n_']['id'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['table'] = 'field_data_field_n_';
  $handler->display->display_options['fields']['field_n_']['field'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
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
    'butlleti_sonor' => 'butlleti_sonor',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'butlletisonor';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_n_' => 'field_n_',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nº */
  $handler->display->display_options['fields']['field_n_']['id'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['table'] = 'field_data_field_n_';
  $handler->display->display_options['fields']['field_n_']['field'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Butlleti sonor */
  $handler->display->display_options['fields']['field_butlleti_sonor']['id'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['table'] = 'field_data_field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['field'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['label'] = '';
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_butlleti_sonor']['click_sort_column'] = 'fid';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'faldo',
  );
  $translatables['butlletisonor'] = array(
    t('Master'),
    t('Butlletisonor'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nº'),
    t('Page'),
    t('Entity Reference'),
    t('EVA Field'),
  );
  $export['butlletisonor'] = $view;

  return $export;
}
