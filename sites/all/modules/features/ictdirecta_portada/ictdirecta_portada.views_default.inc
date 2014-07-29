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
  /* Sort criterion: Contingut: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contingut: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'directa-portada';
  $translatables['directa_portada'] = array(
    t('Master'),
    t('Directa_Portada'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('more'),
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
    'edit_node' => 'edit_node',
    'ops_1' => 'ops_1',
    'ops' => 'ops',
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
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="portada/ordend"> Ordre columna dreta</a>
<a href="portada/ordeni"> Ordre columna esquerra</a>';
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
  /* Relationship: Contingut: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Type */
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
  /* Field: Contingut: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Última actualització';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Contingut: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Accions';
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edita';
  /* Sort criterion: Contingut: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Contingut: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'actualitat' => 'actualitat',
    'fotogaleria' => 'fotogaleria',
    'noticia' => 'noticia',
    'video' => 'video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
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
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Edit link */
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
  $handler->display->display_options['fields']['ops_1']['label'] = 'Columna  Esquerra';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = 'Columna Dreta';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_2']['id'] = 'ops_2';
  $handler->display->display_options['fields']['ops_2']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops_2']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_2']['relationship'] = 'flag_content_rel_2';
  $handler->display->display_options['fields']['ops_2']['label'] = 'Destacat 3 Col';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contingut: Updated date */
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
    t('<a href="portada/ordend"> Ordre columna dreta</a>
<a href="portada/ordeni"> Ordre columna esquerra</a>'),
    t('There is no content available for you to edit.'),
    t('flag'),
    t('author'),
    t('Title'),
    t('Type'),
    t('Autor'),
    t('Última actualització'),
    t('Accions'),
    t('edita'),
    t('Page'),
    t('more'),
    t('flag_dret'),
    t('flag_izq'),
    t('flag_dest3col'),
    t('Columna  Esquerra'),
    t('Columna Dreta'),
    t('Destacat 3 Col'),
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
  $handler->display->display_options['title'] = 'Portada_DestacadoTodasColumnas';
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
  /* Field: Contingut: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Field: Contingut: Data */
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
  /* Field: Contingut: Fotografia_portada */
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
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Body */
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
  /* Field: Contingut: Continguts relacionats */
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
  /* Field: Contingut: Contingut relacionat */
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
  /* Sort criterion: Contingut: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contingut: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Field: Contingut: Data */
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
  /* Field: Contingut: Fotografia_portada */
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
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Body */
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
  /* Field: Contingut: Continguts relacionats */
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

  /* Display: Attachment 2 */
  $handler = $view->new_display('attachment', 'Attachment 2', 'attachment_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
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
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'destacado_portada';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contingut: Contingut relacionat */
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
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $translatables['portada_destacadotodascolumnas'] = array(
    t('Master'),
    t('Portada_DestacadoTodasColumnas'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('flag_destacado3col'),
    t('Block'),
    t('more'),
    t('Attachment 2'),
    t('All'),
  );
  $export['portada_destacadotodascolumnas'] = $view;

  return $export;
}
