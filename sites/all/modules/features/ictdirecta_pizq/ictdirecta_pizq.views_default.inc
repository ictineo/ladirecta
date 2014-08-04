<?php
/**
 * @file
 * ictdirecta_pizq.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_pizq_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'portada_columnaizquierda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada-ColumnaIzquierda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portada-ColumnaIzquierda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'asdasdasdasdasdasdasdasdasd';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_ciz';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = '';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_data']['field_api_classes'] = TRUE;
  /* Field: Content: Portada Noticia */
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
    'image_style' => 'large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portada_fotogaleria']['field_api_classes'] = TRUE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_video']['field_api_classes'] = TRUE;
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
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Content: Continguts relacionats */
  $handler->display->display_options['fields']['field_continguts_relacionats']['id'] = 'field_continguts_relacionats';
  $handler->display->display_options['fields']['field_continguts_relacionats']['table'] = 'field_data_field_continguts_relacionats';
  $handler->display->display_options['fields']['field_continguts_relacionats']['field'] = 'field_continguts_relacionats';
  $handler->display->display_options['fields']['field_continguts_relacionats']['label'] = '';
  $handler->display->display_options['fields']['field_continguts_relacionats']['element_type'] = '0';
  $handler->display->display_options['fields']['field_continguts_relacionats']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_continguts_relacionats']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_continguts_relacionats']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_continguts_relacionats']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_continguts_relacionats']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_continguts_relacionats']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_continguts_relacionats']['field_api_classes'] = TRUE;
  /* Field: Content: Noticies relacionades */
  $handler->display->display_options['fields']['field_contingut_relacionat']['id'] = 'field_contingut_relacionat';
  $handler->display->display_options['fields']['field_contingut_relacionat']['table'] = 'field_data_field_contingut_relacionat';
  $handler->display->display_options['fields']['field_contingut_relacionat']['field'] = 'field_contingut_relacionat';
  $handler->display->display_options['fields']['field_contingut_relacionat']['label'] = '';
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat']['type'] = 'field_collection_view';
  $handler->display->display_options['fields']['field_contingut_relacionat']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_contingut_relacionat']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['field_api_classes'] = TRUE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['arguments']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_seccio_web_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'noticia' => 'noticia',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Portada Esquerra */
  $handler = $view->new_display('page', 'Portada Esquerra', 'page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'portada_columnaizquierda:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'portada-columnaizquierda';

  /* Display: Sort  */
  $handler = $view->new_display('page', 'Sort ', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'admin/workbench/portada/ordeni';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Orden Izquierda';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Portada esquerra block */
  $handler = $view->new_display('block', 'Portada esquerra block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Portada esquerra';

  /* Display: Portada esquerra block seccions */
  $handler = $view->new_display('block', 'Portada esquerra block seccions', 'block_2');
  $handler->display->display_options['block_description'] = 'Portada esquerra seccions';
  $translatables['portada_columnaizquierda'] = array(
    t('Master'),
    t('Portada-ColumnaIzquierda'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('asdasdasdasdasdasdasdasdasd'),
    t('flag'),
    t('All'),
    t('Portada Esquerra'),
    t('more'),
    t('Sort '),
    t('Nid'),
    t('Content'),
    t('Portada esquerra block'),
    t('Portada esquerra'),
    t('Portada esquerra block seccions'),
    t('Portada esquerra seccions'),
  );
  $export['portada_columnaizquierda'] = $view;

  return $export;
}
