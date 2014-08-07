<?php
/**
 * @file
 * ictdirecta_portada.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_portada_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'directa_portada';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada_total';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directa_Portada';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'portada_columnaizquierda';
  $handler->display->display_options['fields']['view']['display'] = 'page';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'portada_columnaderecha';
  $handler->display->display_options['fields']['view_1']['display'] = 'page';
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
  $translatables['directa_portada'] = array(
    t('Master'),
    t('Directa_Portada'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
  );
  $export['directa_portada'] = $view;

  $view = new view();
  $view->name = 'gestioportada';
  $view->description = 'Content overview page for Workbench.';
  $view->tag = 'Workbench';
  $view->base_table = 'node';
  $view->human_name = 'GestioPortada';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Tot el contingut recent';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'veure tots';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access workbench';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per pàgina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tot -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplaçament';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primer';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'següent ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'últim »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'created' => 'created',
    'field_seccio_web' => 'field_seccio_web',
    'edit_node' => 'edit_node',
    'ops_1' => 'ops_1',
    'ops' => 'ops',
    'ops_2' => 'ops_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seccio_web' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'There is no content available for you to edit.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_ciz';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autor';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Última actualització';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Accions';
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edita';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actualitat' => 'actualitat',
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );

  /* Display: Gestio Web */
  $handler = $view->new_display('page', 'Gestio Web', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: portada_cdr */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_dret';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_cdr';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'flag_izq';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'portada_ciz';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  /* Relationship: Flags: destacado_portada */
  $handler->display->display_options['relationships']['flag_content_rel_2']['id'] = 'flag_content_rel_2';
  $handler->display->display_options['relationships']['flag_content_rel_2']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_2']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_2']['label'] = 'flag_dest3col';
  $handler->display->display_options['relationships']['flag_content_rel_2']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_2']['flag'] = 'destacado_portada';
  $handler->display->display_options['relationships']['flag_content_rel_2']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Data de publicació';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Seccio';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Accions';
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edita';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Columna  Esquerra / Central';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Columna Dreta';
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<div class= "[field_seccio_web]" > [ops] </div>';
  $handler->display->display_options['fields']['ops']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops']['element_class'] = '[field_seccio_web]';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = 'Destacat 3 Col';
  $handler->display->display_options['fields']['ops_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['ops_2']['alter']['text'] = '<div id=[type] > [ops_2] </div>';
  $handler->display->display_options['fields']['ops_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops_2']['element_class'] = '[field_seccio_web]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'admin/workbench/portada';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Portada';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Gestio Paper */
  $handler = $view->new_display('page', 'Gestio Paper', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: portada_cdr */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_dret';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_cdr';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel_1']['id'] = 'flag_content_rel_1';
  $handler->display->display_options['relationships']['flag_content_rel_1']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel_1']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel_1']['label'] = 'flag_izq';
  $handler->display->display_options['relationships']['flag_content_rel_1']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel_1']['flag'] = 'portada_ciz';
  $handler->display->display_options['relationships']['flag_content_rel_1']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Data de publicació';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = 'Secció Paper';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Accions';
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edita';
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel_1';
  $handler->display->display_options['fields']['ops_1']['label'] = 'Columna  Esquerra / Central';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Columna Dreta';
  $handler->display->display_options['fields']['ops']['alter']['text'] = '<div class= "[field_seccio_web]" > [ops] </div>';
  $handler->display->display_options['fields']['ops']['element_type'] = 'div';
  $handler->display->display_options['fields']['ops']['element_class'] = '[field_seccio_web]';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'noticia_paper' => 'noticia_paper',
  );
  $handler->display->display_options['path'] = 'admin/workbench/portadapaper';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Portada Paper';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['gestioportada'] = array(
    t('Defaults'),
    t('Tot el contingut recent'),
    t('veure tots'),
    t('Aplica'),
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
    t('There is no content available for you to edit.'),
    t('flag'),
    t('author'),
    t('Title'),
    t('Type'),
    t('Autor'),
    t('Última actualització'),
    t('Accions'),
    t('edita'),
    t('Gestio Web'),
    t('more'),
    t('flag_dret'),
    t('flag_izq'),
    t('flag_dest3col'),
    t('Data de publicació'),
    t('Seccio'),
    t('Columna  Esquerra / Central'),
    t('Columna Dreta'),
    t('<div class= "[field_seccio_web]" > [ops] </div>'),
    t('Destacat 3 Col'),
    t('<div id=[type] > [ops_2] </div>'),
    t('Gestio Paper'),
    t('Secció Paper'),
  );
  $export['gestioportada'] = $view;

  $view = new view();
  $view->name = 'portada_destacadotodascolumnas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada_DestacadoTodasColumnas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: destacado_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_destacado3col';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'destacado_portada';
  /* Field: Content: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
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
  /* Field: Content: Fotografia_portada */
  $handler->display->display_options['fields']['field_fotografia_portada']['id'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['table'] = 'field_data_field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['field'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['label'] = '';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia_portada']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotografia_portada']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
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
  $handler->display->display_options['fields']['field_continguts_relacionats']['settings'] = array(
    'view_mode' => 'token',
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
  $handler->display->display_options['fields']['field_contingut_relacionat']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_contingut_relacionat']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_contingut_relacionat']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['field_api_classes'] = TRUE;
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
    'noticia' => 'noticia',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: destacado_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_destacado3col';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'destacado_portada';
  /* Relationship: Content: Continguts relacionats (field_continguts_relacionats) */
  $handler->display->display_options['relationships']['field_continguts_relacionats_value']['id'] = 'field_continguts_relacionats_value';
  $handler->display->display_options['relationships']['field_continguts_relacionats_value']['table'] = 'field_data_field_continguts_relacionats';
  $handler->display->display_options['relationships']['field_continguts_relacionats_value']['field'] = 'field_continguts_relacionats_value';
  $handler->display->display_options['relationships']['field_continguts_relacionats_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_continguts_relacionats_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Secció */
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
  /* Field: Content: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_data']['exclude'] = TRUE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pretitular">[field_seccio][field_autor][field_data]</div> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
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
    'view_mode' => 'token',
    'empty' => 1,
  );
  $handler->display->display_options['fields']['field_continguts_relacionats']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_continguts_relacionats']['field_api_classes'] = TRUE;
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
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Attachment 2 */
  $handler = $view->new_display('attachment', 'Attachment 2', 'attachment_2');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: destacado_portada */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['label'] = 'flag_destacado3col';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'destacado_portada';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Noticies relacionades */
  $handler->display->display_options['fields']['field_contingut_relacionat']['id'] = 'field_contingut_relacionat';
  $handler->display->display_options['fields']['field_contingut_relacionat']['table'] = 'field_data_field_contingut_relacionat';
  $handler->display->display_options['fields']['field_contingut_relacionat']['field'] = 'field_contingut_relacionat';
  $handler->display->display_options['fields']['field_contingut_relacionat']['label'] = '';
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_contingut_relacionat']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat']['delta_limit'] = '4';
  $handler->display->display_options['fields']['field_contingut_relacionat']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Flags: Content ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'flagging';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';
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
    'noticia' => 'noticia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['portada_destacadotodascolumnas'] = array(
    t('Master'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('flag_destacado3col'),
    t('Block'),
    t('more'),
    t('field collection item from field_continguts_relacionats'),
    t('<div class="pretitular">[field_seccio][field_autor][field_data]</div> '),
    t('Attachment 2'),
    t('All'),
  );
  $export['portada_destacadotodascolumnas'] = $view;

  $view = new view();
  $view->name = 'portada_expresions_impresions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada-Expresions-impresions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expresions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_ciz';
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
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    0 => '22',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';

  /* Display: Portada Expresions */
  $handler = $view->new_display('block', 'Portada Expresions', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_ciz';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'portada_expresions_impresions';
  $handler->display->display_options['fields']['view']['display'] = 'block_3';
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Veure mes';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_seccio_web']['element_class'] = 'negreta';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Expresions';

  /* Display: Portada Impresions */
  $handler = $view->new_display('block', 'Portada Impresions', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impresions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Veure mes';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_seccio_web']['element_class'] = 'negreta';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'Portada impresions';

  /* Display: Portada expresions auxiliar */
  $handler = $view->new_display('block', 'Portada expresions auxiliar', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portada Expresions auxiliar';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_ciz';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_seccio_web']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Portada expresions auxiliar';
  $translatables['portada_expresions_impresions'] = array(
    t('Master'),
    t('Expresions'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('All'),
    t('Portada Expresions'),
    t('more'),
    t('Type'),
    t('Veure mes'),
    t('Portada Impresions'),
    t('Impresions'),
    t('Portada impresions'),
    t('Portada expresions auxiliar'),
    t('Portada Expresions auxiliar'),
  );
  $export['portada_expresions_impresions'] = $view;

  $view = new view();
  $view->name = 'portada_expresions_territorial';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada-Expresions-territorial';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Expresions';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
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
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    0 => '22',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';

  /* Display: Portada Expresions */
  $handler = $view->new_display('block', 'Portada Expresions', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'portada_expresions_territorial';
  $handler->display->display_options['fields']['view']['display'] = 'block_3';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Veure mes';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_seccio_web']['element_class'] = 'negreta';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Territori (field_territori) */
  $handler->display->display_options['arguments']['field_territori_tid']['id'] = 'field_territori_tid';
  $handler->display->display_options['arguments']['field_territori_tid']['table'] = 'field_data_field_territori';
  $handler->display->display_options['arguments']['field_territori_tid']['field'] = 'field_territori_tid';
  $handler->display->display_options['arguments']['field_territori_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_territori_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_territori_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_territori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_territori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_territori_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Expresions territorial';

  /* Display: Portada Impresions */
  $handler = $view->new_display('block', 'Portada Impresions', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impresions';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Veure mes';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_seccio_web']['element_class'] = 'negreta';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Territori (field_territori) */
  $handler->display->display_options['arguments']['field_territori_tid']['id'] = 'field_territori_tid';
  $handler->display->display_options['arguments']['field_territori_tid']['table'] = 'field_data_field_territori';
  $handler->display->display_options['arguments']['field_territori_tid']['field'] = 'field_territori_tid';
  $handler->display->display_options['arguments']['field_territori_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_territori_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_territori_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_territori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_territori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_territori_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'Portada impresions territorial';

  /* Display: Portada expresions auxiliar */
  $handler = $view->new_display('block', 'Portada expresions auxiliar', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portada Expresions auxiliar';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Territori (field_territori) */
  $handler->display->display_options['arguments']['field_territori_tid']['id'] = 'field_territori_tid';
  $handler->display->display_options['arguments']['field_territori_tid']['table'] = 'field_data_field_territori';
  $handler->display->display_options['arguments']['field_territori_tid']['field'] = 'field_territori_tid';
  $handler->display->display_options['arguments']['field_territori_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_territori_tid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_territori_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_territori_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_territori_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Portada expresions territorial auxiliar';
  $translatables['portada_expresions_territorial'] = array(
    t('Master'),
    t('Expresions'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Content'),
    t('All'),
    t('Portada Expresions'),
    t('more'),
    t('Type'),
    t('Veure mes'),
    t('Expresions territorial'),
    t('Portada Impresions'),
    t('Impresions'),
    t('Portada impresions territorial'),
    t('Portada expresions auxiliar'),
    t('Portada Expresions auxiliar'),
    t('Portada expresions territorial auxiliar'),
  );
  $export['portada_expresions_territorial'] = $view;

  $view = new view();
  $view->name = 'portada_general';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada-general';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portada-general';
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
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Estem a la seccio:';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_seccio_web']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Columna Esquerra';
  $handler->display->display_options['fields']['view']['view'] = 'portada_columnaizquierda';
  $handler->display->display_options['fields']['view']['display'] = 'page';
  $handler->display->display_options['fields']['view']['arguments'] = '%1';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Columna Dreta';
  $handler->display->display_options['fields']['view_1']['view'] = 'portada_columnadreta';
  $handler->display->display_options['fields']['view_1']['display'] = 'page';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!1';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '!1';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['arguments']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['default_argument_options']['argument'] = 'Hola';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_seccio_web_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Portada general seccions */
  $handler = $view->new_display('page', 'Portada general seccions', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Estem a la seccio:';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_seccio_web']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Columna Esquerra';
  $handler->display->display_options['fields']['view']['view'] = 'portada_columnaizquierda';
  $handler->display->display_options['fields']['view']['display'] = 'page';
  $handler->display->display_options['fields']['view']['arguments'] = '%1';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Columna Dreta';
  $handler->display->display_options['fields']['view_1']['view'] = 'portada_columnadreta';
  $handler->display->display_options['fields']['view_1']['display'] = 'page';
  $handler->display->display_options['fields']['view_1']['arguments'] = '!1';
  $handler->display->display_options['path'] = 'portada-general/seccionsweb/%';

  /* Display: Portada general  */
  $handler = $view->new_display('page', 'Portada general ', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Estem a la seccio:';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_seccio_web']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Columna Esquerra';
  $handler->display->display_options['fields']['view']['view'] = 'portada_columnaizquierda';
  $handler->display->display_options['fields']['view']['display'] = 'page';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Columna Dreta';
  $handler->display->display_options['fields']['view_1']['view'] = 'portada_columnadreta';
  $handler->display->display_options['fields']['view_1']['display'] = 'page';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'portada-general';
  $translatables['portada_general'] = array(
    t('Master'),
    t('Portada-general'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Estem a la seccio:'),
    t('Columna Esquerra'),
    t('Columna Dreta'),
    t('Custom text'),
    t('!1'),
    t('All'),
    t('Portada general seccions'),
    t('Portada general '),
  );
  $export['portada_general'] = $view;

  $view = new view();
  $view->name = 'portada_seccions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portada-seccions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Economia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_portada_fotogaleria' => 'field_portada_fotogaleria',
    'field_video' => 'field_portada_fotogaleria',
    'title' => 'title',
    'body' => 'title',
    'field_seccio_web' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_portada_fotogaleria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seccio_web' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
    'image_style' => 'medium',
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
  /* Field: Content: Seccio web */
  $handler->display->display_options['fields']['field_seccio_web']['id'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['field'] = 'field_seccio_web';
  $handler->display->display_options['fields']['field_seccio_web']['label'] = 'Veure mes';
  $handler->display->display_options['fields']['field_seccio_web']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio_web']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio_web']['field_api_classes'] = TRUE;
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
    'noticia' => 'noticia',
    'video' => 'video',
  );
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    17 => '17',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';

  /* Display: Economia */
  $handler = $view->new_display('block', 'Economia', 'block');
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'portada-seccions-economia';

  /* Display: Llibertats */
  $handler = $view->new_display('block', 'Llibertats', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Llibertats';
  $handler->display->display_options['block_description'] = 'portada-seccions-llibertats';

  /* Display: Drets */
  $handler = $view->new_display('block', 'Drets', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Drets';
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'portada-seccions-drets';

  /* Display: Internacional */
  $handler = $view->new_display('block', 'Internacional', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Internacional';
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'portada-iseccions-nternacional';

  /* Display: Politica */
  $handler = $view->new_display('block', 'Politica', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politica';
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    16 => '16',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'portada-seccions-politica';

  /* Display: Territori */
  $handler = $view->new_display('block', 'Territori', 'block_5');
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
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );
  /* Filter criterion: Content: Seccio web (field_seccio_web) */
  $handler->display->display_options['filters']['field_seccio_web_tid']['id'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['table'] = 'field_data_field_seccio_web';
  $handler->display->display_options['filters']['field_seccio_web_tid']['field'] = 'field_seccio_web_tid';
  $handler->display->display_options['filters']['field_seccio_web_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_seccio_web_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_web_tid']['vocabulary'] = 'seccions_web';
  $handler->display->display_options['block_description'] = 'portada-seccions-territori';
  $translatables['portada_seccions'] = array(
    t('Master'),
    t('Economia'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Veure mes'),
    t('portada-seccions-economia'),
    t('Llibertats'),
    t('portada-seccions-llibertats'),
    t('Drets'),
    t('portada-seccions-drets'),
    t('Internacional'),
    t('portada-iseccions-nternacional'),
    t('Politica'),
    t('portada-seccions-politica'),
    t('Territori'),
    t('portada-seccions-territori'),
  );
  $export['portada_seccions'] = $view;

  $view = new view();
  $view->name = 'portadapaper_columnadreta';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Portadapaper-ColumnaDreta';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portada-ColumnaDreta-seccions';
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
  /* Relationship: Flags: portada_cdr */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_cdr';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Field: Content: Fotografia_portada */
  $handler->display->display_options['fields']['field_fotografia_portada']['id'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['table'] = 'field_data_field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['field'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['label'] = '';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia_portada']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotografia_portada']['field_api_classes'] = TRUE;
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
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portada_fotogaleria']['field_api_classes'] = TRUE;
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
    'noticia_paper' => 'noticia_paper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Secció (field_seccio) */
  $handler->display->display_options['filters']['field_seccio_tid']['id'] = 'field_seccio_tid';
  $handler->display->display_options['filters']['field_seccio_tid']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['filters']['field_seccio_tid']['field'] = 'field_seccio_tid';
  $handler->display->display_options['filters']['field_seccio_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_seccio_tid']['value'] = array(
    0 => '29',
    1 => '21',
    2 => '8',
    3 => '23',
  );
  $handler->display->display_options['filters']['field_seccio_tid']['vocabulary'] = 'seccions_paper';

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
  $handler->display->display_options['path'] = 'admin/workbench/portadapaper/ordend';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Ordre columna dreta paper';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Portada dreta */
  $handler = $view->new_display('block', 'Portada dreta', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Portada-ColumnaDreta';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
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
  /* Field: Content: Fotografia_portada */
  $handler->display->display_options['fields']['field_fotografia_portada']['id'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['table'] = 'field_data_field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['field'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['label'] = '';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia_portada']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_fotografia_portada']['field_api_classes'] = TRUE;
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
    'image_style' => 'medium',
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'portada_columnadreta:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Portada paper dreta';

  /* Display: Portada dreta seccions */
  $handler = $view->new_display('block', 'Portada dreta seccions', 'block_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Secció (field_seccio) */
  $handler->display->display_options['arguments']['field_seccio_tid']['id'] = 'field_seccio_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['arguments']['field_seccio_tid']['field'] = 'field_seccio_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'noticia_paper' => 'noticia_paper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Portada paper dreta seccions';
  $translatables['portadapaper_columnadreta'] = array(
    t('Master'),
    t('Portada-ColumnaDreta-seccions'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('Sort '),
    t('more'),
    t('Nid'),
    t('Content'),
    t('Portada dreta'),
    t('Portada-ColumnaDreta'),
    t('Portada paper dreta'),
    t('Portada dreta seccions'),
    t('All'),
    t('Portada paper dreta seccions'),
  );
  $export['portadapaper_columnadreta'] = $view;

  $view = new view();
  $view->name = 'portadapaper_columnaizquierda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PortadaPaper-ColumnaIzquierda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PortadaPaper-ColumnaIzquierda';
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
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'portada_columnaizquierda:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'noticia_paper' => 'noticia_paper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Secció (field_seccio) */
  $handler->display->display_options['filters']['field_seccio_tid']['id'] = 'field_seccio_tid';
  $handler->display->display_options['filters']['field_seccio_tid']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['filters']['field_seccio_tid']['field'] = 'field_seccio_tid';
  $handler->display->display_options['filters']['field_seccio_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_seccio_tid']['value'] = array(
    23 => '23',
    8 => '8',
    21 => '21',
    29 => '29',
  );
  $handler->display->display_options['filters']['field_seccio_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_seccio_tid']['vocabulary'] = 'seccions_paper';

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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/portadapaper/ordeni';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Orden Izquierda Paper';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Portada paper esquerra block */
  $handler = $view->new_display('block', 'Portada paper esquerra block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: portada_ciz */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'portada_ciz';
  $handler->display->display_options['relationships']['flag_content_rel']['user_scope'] = 'any';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Portada paper esquerra';

  /* Display: Portada Paper esquerra block seccions */
  $handler = $view->new_display('block', 'Portada Paper esquerra block seccions', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_seccio_web']['exclude'] = TRUE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Secció (field_seccio) */
  $handler->display->display_options['arguments']['field_seccio_tid']['id'] = 'field_seccio_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['arguments']['field_seccio_tid']['field'] = 'field_seccio_tid';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_seccio_tid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_seccio_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'noticia_paper' => 'noticia_paper',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Portada Paper esquerra seccions';
  $translatables['portadapaper_columnaizquierda'] = array(
    t('Master'),
    t('PortadaPaper-ColumnaIzquierda'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('flag'),
    t('All'),
    t('Sort '),
    t('more'),
    t('Nid'),
    t('Content'),
    t('Portada paper esquerra block'),
    t('Portada paper esquerra'),
    t('Portada Paper esquerra block seccions'),
    t('Portada Paper esquerra seccions'),
  );
  $export['portadapaper_columnaizquierda'] = $view;

  return $export;
}
