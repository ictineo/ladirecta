<?php
/**
 * @file
 * ictdirecta_pvenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_pvenda_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'punts_de_venda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Punts de venda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Punts de venda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_territori_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Contingut: Territori */
  $handler->display->display_options['fields']['field_territoripv']['id'] = 'field_territoripv';
  $handler->display->display_options['fields']['field_territoripv']['table'] = 'field_data_field_territoripv';
  $handler->display->display_options['fields']['field_territoripv']['field'] = 'field_territoripv';
  $handler->display->display_options['fields']['field_territoripv']['label'] = '';
  $handler->display->display_options['fields']['field_territoripv']['element_type'] = '0';
  $handler->display->display_options['fields']['field_territoripv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_territoripv']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_territoripv']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_territoripv']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_territoripv']['settings'] = array(
    'linked' => 0,
  );
  $handler->display->display_options['fields']['field_territoripv']['field_api_classes'] = TRUE;
  /* Field: Contingut: Adreça */
  $handler->display->display_options['fields']['field_adrecapv']['id'] = 'field_adrecapv';
  $handler->display->display_options['fields']['field_adrecapv']['table'] = 'field_data_field_adrecapv';
  $handler->display->display_options['fields']['field_adrecapv']['field'] = 'field_adrecapv';
  $handler->display->display_options['fields']['field_adrecapv']['label'] = '';
  $handler->display->display_options['fields']['field_adrecapv']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adrecapv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adrecapv']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adrecapv']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_adrecapv']['field_api_classes'] = TRUE;
  /* Field: Contingut: Web */
  $handler->display->display_options['fields']['field_webpv']['id'] = 'field_webpv';
  $handler->display->display_options['fields']['field_webpv']['table'] = 'field_data_field_webpv';
  $handler->display->display_options['fields']['field_webpv']['field'] = 'field_webpv';
  $handler->display->display_options['fields']['field_webpv']['label'] = '';
  $handler->display->display_options['fields']['field_webpv']['element_type'] = '0';
  $handler->display->display_options['fields']['field_webpv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_webpv']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_webpv']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_webpv']['field_api_classes'] = TRUE;
  /* Field: Contingut: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'categories_cd' => 0,
    'punts_de_venda' => 0,
    'seccions_paper' => 0,
    'seccions_web' => 0,
    'tags' => 0,
    'territorial' => 0,
  );
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
    'punts_de_venda' => 'punts_de_venda',
  );
  /* Filter criterion: Contingut: Has taxonomy terms (with depth) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Territori';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'territorial';
  $handler->display->display_options['filters']['term_node_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '2';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'puntsdevenda';
  $translatables['punts_de_venda'] = array(
    t('Master'),
    t('Punts de venda'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All taxonomy terms'),
    t('Territori'),
    t('Page'),
  );
  $export['punts_de_venda'] = $view;

  return $export;
}
