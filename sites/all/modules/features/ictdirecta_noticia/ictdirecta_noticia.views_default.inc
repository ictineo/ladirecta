<?php
/**
 * @file
 * ictdirecta_noticia.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_noticia_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'continguts_relacionats';
  $view->description = 'View usada per seleccionar documents, fotogaleria o video relacionats amb la notícia';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Continguts relacionats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Continguts relacionats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contingut: Autor */
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
  /* Field: Contingut: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_seccio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
  /* Field: Contingut: Etiquetes */
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
  /* Field: Contingut: Post date */
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
  /* Filter criterion: Contingut: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contingut: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'documents' => 'documents',
    'fotogaleria' => 'fotogaleria',
    'video' => 'video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contingut: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'continguts-relacionats';

  /* Display: Referència d'entitat */
  $handler = $view->new_display('entityreference', 'Referència d\'entitat', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Noticies relacionades';
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
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Contingut: Autor */
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
  /* Field: Contingut: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contingut: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contingut: Post date */
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
    0 => 'field_collection_item:field_continguts_relacionats_ref:field_continguts_relacionats',
  );
  $translatables['continguts_relacionats'] = array(
    t('Master'),
    t('Continguts relacionats'),
    t('més'),
    t('Apply'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Elements per pàgina'),
    t('- Tot -'),
    t('Desplaçament'),
    t('« primer'),
    t('‹ anterior'),
    t('següent ›'),
    t('últim »'),
    t('Title'),
    t('Autor'),
    t('Secció'),
    t('Etiquetes'),
    t('Post date'),
    t('Tot'),
    t('Page'),
    t('more'),
    t('Referència d\'entitat'),
    t('Noticies relacionades'),
    t('Reference dialog Search'),
  );
  $export['continguts_relacionats'] = $view;

  $view = new view();
  $view->name = 'ultimes_noticies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ultimes noticies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ultimes noticies [field_seccio] ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
  /* Sort criterion: Contingut: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contingut: Secció (field_seccio) */
  $handler->display->display_options['arguments']['field_seccio_tid']['id'] = 'field_seccio_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['arguments']['field_seccio_tid']['field'] = 'field_seccio_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_seccio_tid']['exception']['title'] = 'Tot';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Contingut: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contingut: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'noticia' => 'noticia',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'noticia',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[node:field-seccio:tid]';
  $handler->display->display_options['show_title'] = 1;
  $translatables['ultimes_noticies'] = array(
    t('Master'),
    t('Ultimes noticies [field_seccio] '),
    t('more'),
    t('Apply'),
    t('Reinicialitza'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Tot'),
    t('EVA Field'),
  );
  $export['ultimes_noticies'] = $view;

  return $export;
}
