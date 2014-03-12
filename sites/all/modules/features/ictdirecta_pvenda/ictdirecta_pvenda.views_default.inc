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
  $view->name = 'puntsvenda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Puntsvenda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Puntsvenda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Adreça */
  $handler->display->display_options['fields']['field_adrecapv']['id'] = 'field_adrecapv';
  $handler->display->display_options['fields']['field_adrecapv']['table'] = 'field_data_field_adrecapv';
  $handler->display->display_options['fields']['field_adrecapv']['field'] = 'field_adrecapv';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Codi Postal */
  $handler->display->display_options['fields']['field_codi_postal']['id'] = 'field_codi_postal';
  $handler->display->display_options['fields']['field_codi_postal']['table'] = 'field_data_field_codi_postal';
  $handler->display->display_options['fields']['field_codi_postal']['field'] = 'field_codi_postal';
  $handler->display->display_options['fields']['field_codi_postal']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Correu-e */
  $handler->display->display_options['fields']['field_correu_e']['id'] = 'field_correu_e';
  $handler->display->display_options['fields']['field_correu_e']['table'] = 'field_data_field_correu_e';
  $handler->display->display_options['fields']['field_correu_e']['field'] = 'field_correu_e';
  $handler->display->display_options['fields']['field_correu_e']['delta_offset'] = '0';
  /* Field: Content: Horari */
  $handler->display->display_options['fields']['field_horari']['id'] = 'field_horari';
  $handler->display->display_options['fields']['field_horari']['table'] = 'field_data_field_horari';
  $handler->display->display_options['fields']['field_horari']['field'] = 'field_horari';
  /* Field: Content: Imatge */
  $handler->display->display_options['fields']['field_imatge']['id'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['table'] = 'field_data_field_imatge';
  $handler->display->display_options['fields']['field_imatge']['field'] = 'field_imatge';
  $handler->display->display_options['fields']['field_imatge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imatge']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Telèfon */
  $handler->display->display_options['fields']['field_tel_fon']['id'] = 'field_tel_fon';
  $handler->display->display_options['fields']['field_tel_fon']['table'] = 'field_data_field_tel_fon';
  $handler->display->display_options['fields']['field_tel_fon']['field'] = 'field_tel_fon';
  $handler->display->display_options['fields']['field_tel_fon']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_tel_fon']['delta_offset'] = '0';
  /* Field: Content: Territori */
  $handler->display->display_options['fields']['field_territoripv']['id'] = 'field_territoripv';
  $handler->display->display_options['fields']['field_territoripv']['table'] = 'field_data_field_territoripv';
  $handler->display->display_options['fields']['field_territoripv']['field'] = 'field_territoripv';
  /* Field: Content: Web */
  $handler->display->display_options['fields']['field_webpv']['id'] = 'field_webpv';
  $handler->display->display_options['fields']['field_webpv']['table'] = 'field_data_field_webpv';
  $handler->display->display_options['fields']['field_webpv']['field'] = 'field_webpv';
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
    'punts_de_venda' => 'punts_de_venda',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'puntsvenda';
  $export['puntsvenda'] = $view;

  return $export;
}
