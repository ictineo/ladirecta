<?php
/**
 * @file
 * ictdirecta_fotogaleria.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_fotogaleria_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fotogaleria';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fotogaleria';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fotogaleria';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Content: Fotografies (field_fotografies) */
  $handler->display->display_options['relationships']['field_fotografies_value']['id'] = 'field_fotografies_value';
  $handler->display->display_options['relationships']['field_fotografies_value']['table'] = 'field_data_field_fotografies';
  $handler->display->display_options['relationships']['field_fotografies_value']['field'] = 'field_fotografies_value';
  $handler->display->display_options['relationships']['field_fotografies_value']['delta'] = '-1';
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'fotogaleria' => 'fotogaleria',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'fotogaleria';

  /* Display: Altres Fotogalerias */
  $handler = $view->new_display('block', 'Altres Fotogalerias', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Autoria general */
  $handler->display->display_options['fields']['field_autoria_general']['id'] = 'field_autoria_general';
  $handler->display->display_options['fields']['field_autoria_general']['table'] = 'field_data_field_autoria_general';
  $handler->display->display_options['fields']['field_autoria_general']['field'] = 'field_autoria_general';
  $handler->display->display_options['fields']['field_autoria_general']['label'] = '';
  $handler->display->display_options['fields']['field_autoria_general']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autoria_general']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autoria_general']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autoria_general']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autoria_general']['field_api_classes'] = TRUE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Portada fotogaleria */
  $handler->display->display_options['fields']['field_portada_fotogaleria']['id'] = 'field_portada_fotogaleria';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['table'] = 'field_data_field_portada_fotogaleria';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['field'] = 'field_portada_fotogaleria';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['label'] = '';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portada_fotogaleria']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portada_fotogaleria']['field_api_classes'] = TRUE;
  /* Field: Content: Fotografies (field_fotografies:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_fotografies';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = 'Numero de fotografies';
  $handler->display->display_options['fields']['delta']['element_type'] = '0';
  $handler->display->display_options['fields']['delta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['delta']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'Altres Fotogalerias';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '4';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Portada fotogaleria */
  $handler->display->display_options['fields']['field_portada_fotogaleria']['id'] = 'field_portada_fotogaleria';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['table'] = 'field_data_field_portada_fotogaleria';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['field'] = 'field_portada_fotogaleria';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['label'] = '';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portada_fotogaleria']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portada_fotogaleria']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portada_fotogaleria']['field_api_classes'] = TRUE;
  $handler->display->display_options['block_description'] = 'TotesFotogaleries';
  $translatables['fotogaleria'] = array(
    t('Master'),
    t('Fotogaleria'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('field collection item from field_fotografies'),
    t('Page'),
    t('Altres Fotogalerias'),
    t('Numero de fotografies'),
    t('.'),
    t(','),
    t('Block'),
    t('TotesFotogaleries'),
  );
  $export['fotogaleria'] = $view;

  return $export;
}
