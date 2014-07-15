<?php
/**
 * @file
 * ictdirecta_agenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_agenda_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agenda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agenda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data_ag']['id'] = 'field_data_ag';
  $handler->display->display_options['fields']['field_data_ag']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['fields']['field_data_ag']['field'] = 'field_data_ag';
  $handler->display->display_options['fields']['field_data_ag']['label'] = '';
  $handler->display->display_options['fields']['field_data_ag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_data_ag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data_ag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data_ag']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data_ag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data_ag']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_data_ag']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['sorts']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['sorts']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['sorts']['field_data_ag_value']['field'] = 'field_data_ag_value';
  /* Contextual filter: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['arguments']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['arguments']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['arguments']['field_data_ag_value']['field'] = 'field_data_ag_value';
  $handler->display->display_options['arguments']['field_data_ag_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_data_ag_value']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_data_ag_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_data_ag_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_data_ag_value']['summary_options']['items_per_page'] = '25';
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
    'esdeveniment_agenda' => 'esdeveniment_agenda',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['filters']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['filters']['field_data_ag_value']['field'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_data_ag_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_data_ag_value']['default_date'] = '!2';

  /* Display: Enllaç anterior */
  $handler = $view->new_display('entity_view', 'Enllaç anterior', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'esdeveniment_agenda',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[node:field_data_ag]';

  /* Display: Enllaç posterior */
  $handler = $view->new_display('entity_view', 'Enllaç posterior', 'entity_view_2');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['sorts']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['sorts']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['sorts']['field_data_ag_value']['field'] = 'field_data_ag_value';
  $handler->display->display_options['sorts']['field_data_ag_value']['order'] = 'DESC';
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
    'esdeveniment_agenda' => 'esdeveniment_agenda',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['filters']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['filters']['field_data_ag_value']['field'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_data_ag_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_data_ag_value']['default_date'] = '!2';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'esdeveniment_agenda',
  );
  $handler->display->display_options['argument_mode'] = 'token';
  $handler->display->display_options['default_argument'] = '[node:field_data_ag]';
  $translatables['agenda'] = array(
    t('Master'),
    t('Agenda'),
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
    t('All'),
    t('Type'),
    t('Enllaç anterior'),
    t('Enllaç posterior'),
  );
  $export['agenda'] = $view;

  $view = new view();
  $view->name = 'agenda_llista';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agenda Llista';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda Llista';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Data */
  $handler->display->display_options['fields']['field_data_ag']['id'] = 'field_data_ag';
  $handler->display->display_options['fields']['field_data_ag']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['fields']['field_data_ag']['field'] = 'field_data_ag';
  $handler->display->display_options['fields']['field_data_ag']['label'] = '';
  $handler->display->display_options['fields']['field_data_ag']['element_type'] = '0';
  $handler->display->display_options['fields']['field_data_ag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_data_ag']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_data_ag']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data_ag']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_data_ag']['field_api_classes'] = TRUE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Lloc/Adreça */
  $handler->display->display_options['fields']['field_adreca']['id'] = 'field_adreca';
  $handler->display->display_options['fields']['field_adreca']['table'] = 'field_data_field_adreca';
  $handler->display->display_options['fields']['field_adreca']['field'] = 'field_adreca';
  $handler->display->display_options['fields']['field_adreca']['label'] = '';
  $handler->display->display_options['fields']['field_adreca']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adreca']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adreca']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adreca']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_adreca']['field_api_classes'] = TRUE;
  /* Field: Content: Resum */
  $handler->display->display_options['fields']['field_resum']['id'] = 'field_resum';
  $handler->display->display_options['fields']['field_resum']['table'] = 'field_data_field_resum';
  $handler->display->display_options['fields']['field_resum']['field'] = 'field_resum';
  $handler->display->display_options['fields']['field_resum']['label'] = '';
  $handler->display->display_options['fields']['field_resum']['element_type'] = '0';
  $handler->display->display_options['fields']['field_resum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resum']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_resum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_resum']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = '+info';
  /* Sort criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['sorts']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['sorts']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['sorts']['field_data_ag_value']['field'] = 'field_data_ag_value';
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
    'esdeveniment_agenda' => 'esdeveniment_agenda',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['filters']['field_data_ag_value']['id'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['filters']['field_data_ag_value']['field'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_data_ag_value']['group'] = 1;
  $handler->display->display_options['filters']['field_data_ag_value']['default_date'] = 'now -2 day';
  /* Filter criterion: Content: Data -  start date (field_data_ag) */
  $handler->display->display_options['filters']['field_data_ag_value_1']['id'] = 'field_data_ag_value_1';
  $handler->display->display_options['filters']['field_data_ag_value_1']['table'] = 'field_data_field_data_ag';
  $handler->display->display_options['filters']['field_data_ag_value_1']['field'] = 'field_data_ag_value';
  $handler->display->display_options['filters']['field_data_ag_value_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_data_ag_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_data_ag_value_1']['default_date'] = 'now +4 day';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agenda-llista';
  $translatables['agenda_llista'] = array(
    t('Master'),
    t('Agenda Llista'),
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
    t('+info'),
    t('Page'),
  );
  $export['agenda_llista'] = $view;

  return $export;
}
