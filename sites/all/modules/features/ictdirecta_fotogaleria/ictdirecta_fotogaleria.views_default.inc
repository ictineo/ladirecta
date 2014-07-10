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
  $view->name = 'fotogaleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fotogaleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fotogaleries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_fotografia_1' => 'field_fotografia_1',
    'title' => 0,
    'field_fotografia' => 0,
    'field_autor_a' => 0,
    'field_peu_fotografia' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'field_fotografia' => 0,
    'field_autor_a' => 0,
    'field_peu_fotografia' => 0,
    'field_fotografia_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Fotografies (field_fotografies) */
  $handler->display->display_options['relationships']['field_fotografies_value']['id'] = 'field_fotografies_value';
  $handler->display->display_options['relationships']['field_fotografies_value']['table'] = 'field_data_field_fotografies';
  $handler->display->display_options['relationships']['field_fotografies_value']['field'] = 'field_fotografies_value';
  $handler->display->display_options['relationships']['field_fotografies_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Fotografia */
  $handler->display->display_options['fields']['field_fotografia']['id'] = 'field_fotografia';
  $handler->display->display_options['fields']['field_fotografia']['table'] = 'field_data_field_fotografia';
  $handler->display->display_options['fields']['field_fotografia']['field'] = 'field_fotografia';
  $handler->display->display_options['fields']['field_fotografia']['relationship'] = 'field_fotografies_value';
  $handler->display->display_options['fields']['field_fotografia']['label'] = '';
  $handler->display->display_options['fields']['field_fotografia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotografia']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Autoría */
  $handler->display->display_options['fields']['field_autor_a']['id'] = 'field_autor_a';
  $handler->display->display_options['fields']['field_autor_a']['table'] = 'field_data_field_autor_a';
  $handler->display->display_options['fields']['field_autor_a']['field'] = 'field_autor_a';
  $handler->display->display_options['fields']['field_autor_a']['relationship'] = 'field_fotografies_value';
  /* Field: Field collection item: Peu fotografia */
  $handler->display->display_options['fields']['field_peu_fotografia']['id'] = 'field_peu_fotografia';
  $handler->display->display_options['fields']['field_peu_fotografia']['table'] = 'field_data_field_peu_fotografia';
  $handler->display->display_options['fields']['field_peu_fotografia']['field'] = 'field_peu_fotografia';
  $handler->display->display_options['fields']['field_peu_fotografia']['relationship'] = 'field_fotografies_value';
  $handler->display->display_options['fields']['field_peu_fotografia']['label'] = '';
  $handler->display->display_options['fields']['field_peu_fotografia']['element_type'] = '0';
  $handler->display->display_options['fields']['field_peu_fotografia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_peu_fotografia']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_peu_fotografia']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_peu_fotografia']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Fotografia */
  $handler->display->display_options['fields']['field_fotografia_1']['id'] = 'field_fotografia_1';
  $handler->display->display_options['fields']['field_fotografia_1']['table'] = 'field_data_field_fotografia';
  $handler->display->display_options['fields']['field_fotografia_1']['field'] = 'field_fotografia';
  $handler->display->display_options['fields']['field_fotografia_1']['relationship'] = 'field_fotografies_value';
  $handler->display->display_options['fields']['field_fotografia_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia_1']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
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
    'fotogaleria' => 'fotogaleria',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fotogaleries';
  $translatables['fotogaleries'] = array(
    t('Master'),
    t('Fotogaleries'),
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
    t('Autoría'),
    t('Fotografia'),
    t('Page'),
  );
  $export['fotogaleries'] = $view;

  return $export;
}
