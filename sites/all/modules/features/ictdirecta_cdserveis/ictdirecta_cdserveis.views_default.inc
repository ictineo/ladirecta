<?php
/**
 * @file
 * ictdirecta_cdserveis.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_cdserveis_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cd_serveis';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CD-Serveis';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Llistat de Serveis';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'més';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reinicialitza';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
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
        'any_label' => 'Catalunya',
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
    'field_tipus_de_servei_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logotip */
  $handler->display->display_options['fields']['field_logotip']['id'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['table'] = 'field_data_field_logotip';
  $handler->display->display_options['fields']['field_logotip']['field'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['label'] = '';
  $handler->display->display_options['fields']['field_logotip']['element_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logotip']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logotip']['field_api_classes'] = TRUE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Oferta */
  $handler->display->display_options['fields']['field_oferta']['id'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['table'] = 'field_data_field_oferta';
  $handler->display->display_options['fields']['field_oferta']['field'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['label'] = '';
  $handler->display->display_options['fields']['field_oferta']['element_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_oferta']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_oferta']['field_api_classes'] = TRUE;
  /* Field: Content: Tipus de servei */
  $handler->display->display_options['fields']['field_tipus_de_servei']['id'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['table'] = 'field_data_field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['label'] = '';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Veure detalls >';
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
    'cd_serveis' => 'cd_serveis',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Territori (field_territori) */
  $handler->display->display_options['filters']['field_territori_tid']['id'] = 'field_territori_tid';
  $handler->display->display_options['filters']['field_territori_tid']['table'] = 'field_data_field_territori';
  $handler->display->display_options['filters']['field_territori_tid']['field'] = 'field_territori_tid';
  $handler->display->display_options['filters']['field_territori_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_territori_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_territori_tid']['expose']['operator_id'] = 'field_territori_tid_op';
  $handler->display->display_options['filters']['field_territori_tid']['expose']['label'] = 'Territori ';
  $handler->display->display_options['filters']['field_territori_tid']['expose']['operator'] = 'field_territori_tid_op';
  $handler->display->display_options['filters']['field_territori_tid']['expose']['identifier'] = 'field_territori_tid';
  $handler->display->display_options['filters']['field_territori_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_territori_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_territori_tid']['vocabulary'] = 'territorial';
  /* Filter criterion: Content: Tipus de servei (field_tipus_de_servei) */
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['id'] = 'field_tipus_de_servei_tid';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['table'] = 'field_data_field_tipus_de_servei';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['field'] = 'field_tipus_de_servei_tid';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['value'] = 'All';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['expose']['operator_id'] = 'field_tipus_de_servei_tid_op';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['expose']['label'] = 'Tipus de servei ';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['expose']['operator'] = 'field_tipus_de_servei_tid_op';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['expose']['identifier'] = 'field_tipus_de_servei_tid';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tipus_de_servei_tid']['vocabulary'] = 'categories_cd';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logotip */
  $handler->display->display_options['fields']['field_logotip']['id'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['table'] = 'field_data_field_logotip';
  $handler->display->display_options['fields']['field_logotip']['field'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['label'] = '';
  $handler->display->display_options['fields']['field_logotip']['element_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logotip']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logotip']['field_api_classes'] = TRUE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Oferta */
  $handler->display->display_options['fields']['field_oferta']['id'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['table'] = 'field_data_field_oferta';
  $handler->display->display_options['fields']['field_oferta']['field'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['label'] = 'Oferta:';
  $handler->display->display_options['fields']['field_oferta']['element_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_oferta']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['field_oferta']['field_api_classes'] = TRUE;
  /* Field: Content: Tipus de servei */
  $handler->display->display_options['fields']['field_tipus_de_servei']['id'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['table'] = 'field_data_field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['label'] = 'Tipus de Servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field_api_classes'] = TRUE;
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Subscriu-t\'hi!';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Per poder disfrutar dels descomptes i promocions has de ser soci de la Directa';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'cd_serveis' => 'cd_serveis',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Servei Destacat negre';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Logotip */
  $handler->display->display_options['fields']['field_logotip']['id'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['table'] = 'field_data_field_logotip';
  $handler->display->display_options['fields']['field_logotip']['field'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['label'] = '';
  $handler->display->display_options['fields']['field_logotip']['element_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logotip']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logotip']['field_api_classes'] = TRUE;
  /* Field: Content: Oferta */
  $handler->display->display_options['fields']['field_oferta']['id'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['table'] = 'field_data_field_oferta';
  $handler->display->display_options['fields']['field_oferta']['field'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['label'] = '';
  $handler->display->display_options['fields']['field_oferta']['element_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_oferta']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_oferta']['field_api_classes'] = TRUE;
  /* Field: Content: Tipus de servei */
  $handler->display->display_options['fields']['field_tipus_de_servei']['id'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['table'] = 'field_data_field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['label'] = '';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Veure detalls >';
  $handler->display->display_options['path'] = 'cd-serveis';

  /* Display: Menu lateral */
  $handler = $view->new_display('block', 'Menu lateral', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Títol */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Logotip */
  $handler->display->display_options['fields']['field_logotip']['id'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['table'] = 'field_data_field_logotip';
  $handler->display->display_options['fields']['field_logotip']['field'] = 'field_logotip';
  $handler->display->display_options['fields']['field_logotip']['label'] = '';
  $handler->display->display_options['fields']['field_logotip']['element_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_logotip']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logotip']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logotip']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_logotip']['field_api_classes'] = TRUE;
  /* Field: Content: Adreça */
  $handler->display->display_options['fields']['field_adre_a']['id'] = 'field_adre_a';
  $handler->display->display_options['fields']['field_adre_a']['table'] = 'field_data_field_adre_a';
  $handler->display->display_options['fields']['field_adre_a']['field'] = 'field_adre_a';
  $handler->display->display_options['fields']['field_adre_a']['label'] = '';
  $handler->display->display_options['fields']['field_adre_a']['element_type'] = '0';
  $handler->display->display_options['fields']['field_adre_a']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_adre_a']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_adre_a']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_adre_a']['field_api_classes'] = TRUE;
  /* Field: Content: Oferta */
  $handler->display->display_options['fields']['field_oferta']['id'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['table'] = 'field_data_field_oferta';
  $handler->display->display_options['fields']['field_oferta']['field'] = 'field_oferta';
  $handler->display->display_options['fields']['field_oferta']['label'] = '';
  $handler->display->display_options['fields']['field_oferta']['element_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_oferta']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oferta']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_oferta']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['fields']['field_oferta']['field_api_classes'] = TRUE;
  /* Field: Content: Tipus de servei */
  $handler->display->display_options['fields']['field_tipus_de_servei']['id'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['table'] = 'field_data_field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field'] = 'field_tipus_de_servei';
  $handler->display->display_options['fields']['field_tipus_de_servei']['label'] = '';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tipus_de_servei']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tipus_de_servei']['field_api_classes'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Veure detalls >';
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
    'cd_serveis' => 'cd_serveis',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['cd_serveis'] = array(
    t('Master'),
    t('Llistat de Serveis'),
    t('més'),
    t('Aplica'),
    t('Reinicialitza'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Veure detalls >'),
    t('Territori '),
    t('Tipus de servei '),
    t('Block'),
    t('Oferta:'),
    t('Tipus de Servei'),
    t('Subscriu-t\'hi!'),
    t('Per poder disfrutar dels descomptes i promocions has de ser soci de la Directa'),
    t('Servei Destacat negre'),
    t('Page'),
    t('Menu lateral'),
  );
  $export['cd_serveis'] = $view;

  return $export;
}
