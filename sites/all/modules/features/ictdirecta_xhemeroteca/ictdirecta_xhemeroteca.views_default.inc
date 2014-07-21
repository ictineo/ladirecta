<?php
/**
 * @file
 * ictdirecta_xhemeroteca.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_xhemeroteca_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hemeroteca';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Hemeroteca';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hemeroteca exposed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_data' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_data_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'author' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_seccio' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_territori' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Tots',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'type_1' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'Tot',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Selecciona qualsevol filtre per veure els resultats';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Indexed Content: Numero en paper */
  $handler->display->display_options['relationships']['field_numero_en_paper']['id'] = 'field_numero_en_paper';
  $handler->display->display_options['relationships']['field_numero_en_paper']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_numero_en_paper']['field'] = 'field_numero_en_paper';
  /* Relationship: Indexed Content: Butlleti sonor */
  $handler->display->display_options['relationships']['field_bs']['id'] = 'field_bs';
  $handler->display->display_options['relationships']['field_bs']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['relationships']['field_bs']['field'] = 'field_bs';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_autor']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['label'] = '';
  $handler->display->display_options['fields']['field_data']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_databs']['id'] = 'field_databs';
  $handler->display->display_options['fields']['field_databs']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_databs']['field'] = 'field_databs';
  $handler->display->display_options['fields']['field_databs']['relationship'] = 'field_bs';
  $handler->display->display_options['fields']['field_databs']['label'] = '';
  $handler->display->display_options['fields']['field_databs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_databs']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Butlleti sonor */
  $handler->display->display_options['fields']['field_butlleti_sonor']['id'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_butlleti_sonor']['field'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['relationship'] = 'field_bs';
  $handler->display->display_options['fields']['field_butlleti_sonor']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_butlleti_sonor']['type'] = 'jplayer_player';
  $handler->display->display_options['fields']['field_butlleti_sonor']['settings'] = array(
    'mode' => 'playlist',
    'autoplay' => '0',
    'solution' => 'html, flash',
    'preload' => 'metadata',
    'volume' => '80',
    'muted' => '0',
    'repeat' => 'none',
    'backgroundColor' => '000000',
  );
  /* Field: Indexed Content: Fotografia_portada */
  $handler->display->display_options['fields']['field_fotografia_portada']['id'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_fotografia_portada']['field'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['label'] = '';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fotografia_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia_portada']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Indexed Content: Portada numero */
  $handler->display->display_options['fields']['field_portada_numero']['id'] = 'field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_portada_numero']['field'] = 'field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['label'] = '';
  $handler->display->display_options['fields']['field_portada_numero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portada_numero']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_portada_numero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portada_numero']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags_']['id'] = 'field_tags_';
  $handler->display->display_options['fields']['field_tags_']['table'] = 'entity_node';
  $handler->display->display_options['fields']['field_tags_']['field'] = 'field_tags_';
  $handler->display->display_options['fields']['field_tags_']['relationship'] = 'field_numero_en_paper';
  $handler->display->display_options['fields']['field_tags_']['label'] = '';
  $handler->display->display_options['fields']['field_tags_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags_']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_tags_']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_tags_']['bypass_access'] = 0;
  /* Field: Indexed Content: Etiquetes */
  $handler->display->display_options['fields']['field_etiquetes_1']['id'] = 'field_etiquetes_1';
  $handler->display->display_options['fields']['field_etiquetes_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_etiquetes_1']['field'] = 'field_etiquetes';
  $handler->display->display_options['fields']['field_etiquetes_1']['label'] = '';
  $handler->display->display_options['fields']['field_etiquetes_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_etiquetes_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_etiquetes_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_etiquetes_1']['bypass_access'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  /* Filter criterion: Indexed Content: Data */
  $handler->display->display_options['filters']['field_data']['id'] = 'field_data';
  $handler->display->display_options['filters']['field_data']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_data']['field'] = 'field_data';
  $handler->display->display_options['filters']['field_data']['operator'] = '>';
  $handler->display->display_options['filters']['field_data']['group'] = 1;
  $handler->display->display_options['filters']['field_data']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data']['expose']['operator_id'] = 'field_data_op';
  $handler->display->display_options['filters']['field_data']['expose']['label'] = 'Desde';
  $handler->display->display_options['filters']['field_data']['expose']['operator'] = 'field_data_op';
  $handler->display->display_options['filters']['field_data']['expose']['identifier'] = 'field_data';
  $handler->display->display_options['filters']['field_data']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_data']['widget_type'] = 'date_popup';
  /* Filter criterion: Indexed Content: Data */
  $handler->display->display_options['filters']['field_data_1']['id'] = 'field_data_1';
  $handler->display->display_options['filters']['field_data_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_data_1']['field'] = 'field_data';
  $handler->display->display_options['filters']['field_data_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_data_1']['group'] = 1;
  $handler->display->display_options['filters']['field_data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_data_1']['expose']['operator_id'] = 'field_data_1_op';
  $handler->display->display_options['filters']['field_data_1']['expose']['label'] = 'Fins';
  $handler->display->display_options['filters']['field_data_1']['expose']['operator'] = 'field_data_1_op';
  $handler->display->display_options['filters']['field_data_1']['expose']['identifier'] = 'field_data_1';
  $handler->display->display_options['filters']['field_data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_data_1']['widget_type'] = 'date_popup';
  /* Filter criterion: Indexed Content: Author */
  $handler->display->display_options['filters']['author']['id'] = 'author';
  $handler->display->display_options['filters']['author']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['author']['field'] = 'author';
  $handler->display->display_options['filters']['author']['group'] = 1;
  $handler->display->display_options['filters']['author']['exposed'] = TRUE;
  $handler->display->display_options['filters']['author']['expose']['operator_id'] = 'author_op';
  $handler->display->display_options['filters']['author']['expose']['label'] = 'Autor';
  $handler->display->display_options['filters']['author']['expose']['operator'] = 'author_op';
  $handler->display->display_options['filters']['author']['expose']['identifier'] = 'author';
  $handler->display->display_options['filters']['author']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['author']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: Indexed Content: Secció */
  $handler->display->display_options['filters']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['filters']['field_seccio']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['filters']['field_seccio']['value'] = array();
  $handler->display->display_options['filters']['field_seccio']['group'] = 1;
  $handler->display->display_options['filters']['field_seccio']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_seccio']['expose']['operator_id'] = 'field_seccio_op';
  $handler->display->display_options['filters']['field_seccio']['expose']['label'] = 'Secció';
  $handler->display->display_options['filters']['field_seccio']['expose']['operator'] = 'field_seccio_op';
  $handler->display->display_options['filters']['field_seccio']['expose']['identifier'] = 'field_seccio';
  $handler->display->display_options['filters']['field_seccio']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_seccio']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_seccio']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Territori */
  $handler->display->display_options['filters']['field_territori']['id'] = 'field_territori';
  $handler->display->display_options['filters']['field_territori']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_territori']['field'] = 'field_territori';
  $handler->display->display_options['filters']['field_territori']['value'] = array();
  $handler->display->display_options['filters']['field_territori']['group'] = 1;
  $handler->display->display_options['filters']['field_territori']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_territori']['expose']['operator_id'] = 'field_territori_op';
  $handler->display->display_options['filters']['field_territori']['expose']['label'] = 'Territori';
  $handler->display->display_options['filters']['field_territori']['expose']['operator'] = 'field_territori_op';
  $handler->display->display_options['filters']['field_territori']['expose']['identifier'] = 'field_territori';
  $handler->display->display_options['filters']['field_territori']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_territori']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_territori']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipus de contingut';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['type']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Web',
      'operator' => '=',
      'value' => array(
        'butlleti_sonor' => 'butlleti_sonor',
        'noticia' => 'noticia',
        'actualitat' => 0,
        'article' => 0,
        'page' => 0,
        'cd_serveis' => 0,
        'cd_noticies' => 0,
        'esdeveniment_agenda' => 0,
        'faldo' => 0,
        'fotogaleria' => 0,
        'linies_de_recerca' => 0,
        'noticia_paper' => 0,
        'numero_paper' => 0,
        'punts_de_venda' => 0,
        'video' => 0,
      ),
    ),
    2 => array(
      'title' => 'Paper',
      'operator' => '=',
      'value' => array(
        'numero_paper' => 'numero_paper',
        'actualitat' => 0,
        'article' => 0,
        'page' => 0,
        'butlleti_sonor' => 0,
        'cd_serveis' => 0,
        'cd_noticies' => 0,
        'esdeveniment_agenda' => 0,
        'faldo' => 0,
        'fotogaleria' => 0,
        'linies_de_recerca' => 0,
        'noticia_paper' => 0,
        'noticia' => 0,
        'punts_de_venda' => 0,
        'video' => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
  $handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type_1']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type_1']['group_info']['label'] = 'Tipus';
  $handler->display->display_options['filters']['type_1']['group_info']['identifier'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Text',
      'operator' => '=',
      'value' => array(
        'noticia_paper' => 'noticia_paper',
        'noticia' => 'noticia',
        'actualitat' => 0,
        'article' => 0,
        'page' => 0,
        'butlleti_sonor' => 0,
        'cd_serveis' => 0,
        'cd_noticies' => 0,
        'esdeveniment_agenda' => 0,
        'faldo' => 0,
        'fotogaleria' => 0,
        'linies_de_recerca' => 0,
        'numero_paper' => 0,
        'punts_de_venda' => 0,
        'video' => 0,
      ),
    ),
    2 => array(
      'title' => 'Video',
      'operator' => '=',
      'value' => array(
        'video' => 'video',
        'actualitat' => 0,
        'article' => 0,
        'page' => 0,
        'butlleti_sonor' => 0,
        'cd_serveis' => 0,
        'cd_noticies' => 0,
        'esdeveniment_agenda' => 0,
        'faldo' => 0,
        'fotogaleria' => 0,
        'linies_de_recerca' => 0,
        'noticia_paper' => 0,
        'noticia' => 0,
        'numero_paper' => 0,
        'punts_de_venda' => 0,
      ),
    ),
    3 => array(
      'title' => 'Foto',
      'operator' => '=',
      'value' => array(
        'fotogaleria' => 'fotogaleria',
        'actualitat' => 0,
        'article' => 0,
        'page' => 0,
        'butlleti_sonor' => 0,
        'cd_serveis' => 0,
        'cd_noticies' => 0,
        'esdeveniment_agenda' => 0,
        'faldo' => 0,
        'linies_de_recerca' => 0,
        'noticia_paper' => 0,
        'noticia' => 0,
        'numero_paper' => 0,
        'punts_de_venda' => 0,
        'video' => 0,
      ),
    ),
    4 => array(
      'title' => 'audio',
      'operator' => '=',
      'value' => array(
        'faldo' => 'faldo',
        'actualitat' => 0,
        'article' => 0,
        'page' => 0,
        'butlleti_sonor' => 0,
        'cd_serveis' => 0,
        'cd_noticies' => 0,
        'esdeveniment_agenda' => 0,
        'fotogaleria' => 0,
        'linies_de_recerca' => 0,
        'noticia_paper' => 0,
        'noticia' => 0,
        'numero_paper' => 0,
        'punts_de_venda' => 0,
        'video' => 0,
      ),
    ),
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['operator'] = '<>';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'page' => 'page',
    'butlleti_sonor' => 'butlleti_sonor',
    'cd_noticies' => 'cd_noticies',
    'esdeveniment_agenda' => 'esdeveniment_agenda',
    'linies_de_recerca' => 'linies_de_recerca',
    'punts_de_venda' => 'punts_de_venda',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'hemeroteca';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'Selecciona qualsevol filtre per veure els resultats';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Field: Indexed Content: Adjunt */
  $handler->display->display_options['fields']['field_adjunt']['id'] = 'field_adjunt';
  $handler->display->display_options['fields']['field_adjunt']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_adjunt']['field'] = 'field_adjunt';
  $handler->display->display_options['fields']['field_adjunt']['label'] = '';
  $handler->display->display_options['fields']['field_adjunt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adjunt']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '3';
  $handler->display->display_options['path'] = 'hemeroteca';
  $translatables['hemeroteca'] = array(
    t('Master'),
    t('Hemeroteca exposed'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Selecciona qualsevol filtre per veure els resultats'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Numero en paper'),
    t('Butlleti sonor'),
    t('Node ID'),
    t('.'),
    t(','),
    t('Content type'),
    t('Fulltext search'),
    t('Desde'),
    t('Fins'),
    t('Autor'),
    t('Secció'),
    t('Territori'),
    t('Tipus de contingut'),
    t('Tipus'),
    t('Page'),
    t('Excerpt'),
  );
  $export['hemeroteca'] = $view;

  return $export;
}
