<?php
/**
 * @file
 * ictdirecta_numeropaper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_numeropaper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'numpaper';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Numpaper';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Numpaper_faldo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: : field_imatge_portada */
  $handler->display->display_options['fields']['field_imatge_portada']['id'] = 'field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['table'] = 'field_data_field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['field'] = 'field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_portada']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imatge_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_portada']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nº */
  $handler->display->display_options['fields']['field_n_']['id'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['table'] = 'field_data_field_n_';
  $handler->display->display_options['fields']['field_n_']['field'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_n_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags_']['id'] = 'field_tags_';
  $handler->display->display_options['fields']['field_tags_']['table'] = 'field_data_field_tags_';
  $handler->display->display_options['fields']['field_tags_']['field'] = 'field_tags_';
  $handler->display->display_options['fields']['field_tags_']['label'] = '';
  $handler->display->display_options['fields']['field_tags_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
    'numero_paper' => 'numero_paper',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nº */
  $handler->display->display_options['fields']['field_n_']['id'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['table'] = 'field_data_field_n_';
  $handler->display->display_options['fields']['field_n_']['field'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['label'] = '';
  $handler->display->display_options['fields']['field_n_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_n_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_n_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags_']['id'] = 'field_tags_';
  $handler->display->display_options['fields']['field_tags_']['table'] = 'field_data_field_tags_';
  $handler->display->display_options['fields']['field_tags_']['field'] = 'field_tags_';
  $handler->display->display_options['fields']['field_tags_']['label'] = '';
  $handler->display->display_options['fields']['field_tags_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'numpaper';

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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nº */
  $handler->display->display_options['fields']['field_n_']['id'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['table'] = 'field_data_field_n_';
  $handler->display->display_options['fields']['field_n_']['field'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: : field_imatge_portada */
  $handler->display->display_options['fields']['field_imatge_portada']['id'] = 'field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['table'] = 'field_data_field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['field'] = 'field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_portada']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: : field_imatge_portada */
  $handler->display->display_options['fields']['field_imatge_portada']['id'] = 'field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['table'] = 'field_data_field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['field'] = 'field_imatge_portada';
  $handler->display->display_options['fields']['field_imatge_portada']['label'] = '';
  $handler->display->display_options['fields']['field_imatge_portada']['element_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_portada']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_imatge_portada']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imatge_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge_portada']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_imatge_portada']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'butlleti_sonor',
    1 => 'faldo',
  );
  $handler->display->display_options['argument_mode'] = 'none';
  $translatables['numpaper'] = array(
    t('Master'),
    t('Numpaper_faldo'),
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
    t('Nº'),
    t('Title'),
    t('Page'),
    t('Entity Reference'),
    t('EVA Field'),
  );
  $export['numpaper'] = $view;

  return $export;
}
