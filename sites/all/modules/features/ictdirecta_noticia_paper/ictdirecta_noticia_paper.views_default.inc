<?php
/**
 * @file
 * ictdirecta_noticia_paper.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_noticia_paper_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contingut_relacionat';
  $view->description = 'View usada per seleccionar noticies relacionades';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Noticies relacionades';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Noticies relacionades';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_autor']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_autor']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Field: Content: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_seccio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
  /* Field: Content: Etiquetes */
  $handler->display->display_options['fields']['field_etiquetes']['id'] = 'field_etiquetes';
  $handler->display->display_options['fields']['field_etiquetes']['table'] = 'field_data_field_etiquetes';
  $handler->display->display_options['fields']['field_etiquetes']['field'] = 'field_etiquetes';
  $handler->display->display_options['fields']['field_etiquetes']['element_type'] = '0';
  $handler->display->display_options['fields']['field_etiquetes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_etiquetes']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_etiquetes']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_etiquetes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_etiquetes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_etiquetes']['field_api_classes'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
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
    'noticia' => 'noticia',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'noticies-relacionades';

  /* Display: Referència d'entitat */
  $handler = $view->new_display('entityreference', 'Referència d\'entitat', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contingut relacionat';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_autor' => 'field_autor',
    'created' => 0,
    'field_seccio' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_autor']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_autor']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_autor']['group_columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Field: Content: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'field_collection_item:field_contingut_relacionat_ref:field_contingut_relacionat',
  );
  $translatables['contingut_relacionat'] = array(
    t('Master'),
    t('Noticies relacionades'),
    t('more'),
    t('Apply'),
    t('Reset'),
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
    t('Títol'),
    t('Autor'),
    t('Secció'),
    t('Etiquetes'),
    t('Post date'),
    t('Tot'),
    t('Page'),
    t('Referència d\'entitat'),
    t('Contingut relacionat'),
    t('Reference dialog Search'),
  );
  $export['contingut_relacionat'] = $view;

  return $export;
}
