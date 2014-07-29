<?php
/**
 * @file
 * ictdirecta_faldo.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ictdirecta_faldo_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fald_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faldó';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faldó';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordena per';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_fotografia_portada' => 'field_fotografia_portada',
    'field_seccio' => 'field_seccio',
    'title_1' => 'title_1',
    'field_autor' => 'field_autor',
    'field_data' => 'field_data',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_numero_en_paper_target_id']['id'] = 'field_numero_en_paper_target_id';
  $handler->display->display_options['relationships']['field_numero_en_paper_target_id']['table'] = 'field_data_field_numero_en_paper';
  $handler->display->display_options['relationships']['field_numero_en_paper_target_id']['field'] = 'field_numero_en_paper_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bs_target_id']['id'] = 'field_bs_target_id';
  $handler->display->display_options['relationships']['field_bs_target_id']['table'] = 'field_data_field_bs';
  $handler->display->display_options['relationships']['field_bs_target_id']['field'] = 'field_bs_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_contingut_relacionat_ref_target_id']['id'] = 'field_contingut_relacionat_ref_target_id';
  $handler->display->display_options['relationships']['field_contingut_relacionat_ref_target_id']['table'] = 'field_data_field_contingut_relacionat_ref';
  $handler->display->display_options['relationships']['field_contingut_relacionat_ref_target_id']['field'] = 'field_contingut_relacionat_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_contingut_relacionat_desta_target_id']['id'] = 'field_contingut_relacionat_desta_target_id';
  $handler->display->display_options['relationships']['field_contingut_relacionat_desta_target_id']['table'] = 'field_data_field_contingut_relacionat_desta';
  $handler->display->display_options['relationships']['field_contingut_relacionat_desta_target_id']['field'] = 'field_contingut_relacionat_desta_target_id';
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Contingut: Portada numero */
  $handler->display->display_options['fields']['field_portada_numero']['id'] = 'field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['table'] = 'field_data_field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['field'] = 'field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['relationship'] = 'field_numero_en_paper_target_id';
  $handler->display->display_options['fields']['field_portada_numero']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_portada_numero']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portada_numero']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portada_numero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portada_numero']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_portada_numero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portada_numero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portada_numero']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portada_numero']['field_api_classes'] = TRUE;
  /* Field: Contingut: Easy Social */
  $handler->display->display_options['fields']['easy_social']['id'] = 'easy_social';
  $handler->display->display_options['fields']['easy_social']['table'] = 'node';
  $handler->display->display_options['fields']['easy_social']['field'] = 'easy_social';
  $handler->display->display_options['fields']['easy_social']['relationship'] = 'field_bs_target_id';
  $handler->display->display_options['fields']['easy_social']['label'] = 'Comparteix';
  $handler->display->display_options['fields']['easy_social']['exclude'] = TRUE;
  $handler->display->display_options['fields']['easy_social']['easy_social_type'] = '0';
  /* Field: Contingut: Butlleti sonor */
  $handler->display->display_options['fields']['field_butlleti_sonor']['id'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['table'] = 'field_data_field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['field'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['relationship'] = 'field_bs_target_id';
  $handler->display->display_options['fields']['field_butlleti_sonor']['label'] = '';
  $handler->display->display_options['fields']['field_butlleti_sonor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_butlleti_sonor']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id=faldo_subscriptors>
<a href="/subscriptors"> <h2> Subscriute </h2> </a> 
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Contingut: Fotografia_portada */
  $handler->display->display_options['fields']['field_fotografia_portada']['id'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['table'] = 'field_data_field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['field'] = 'field_fotografia_portada';
  $handler->display->display_options['fields']['field_fotografia_portada']['relationship'] = 'field_contingut_relacionat_desta_target_id';
  $handler->display->display_options['fields']['field_fotografia_portada']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_fotografia_portada']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fotografia_portada']['element_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_fotografia_portada']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fotografia_portada']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fotografia_portada']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_fotografia_portada']['field_api_classes'] = TRUE;
  /* Field: Contingut: Secció */
  $handler->display->display_options['fields']['field_seccio']['id'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['table'] = 'field_data_field_seccio';
  $handler->display->display_options['fields']['field_seccio']['field'] = 'field_seccio';
  $handler->display->display_options['fields']['field_seccio']['relationship'] = 'field_contingut_relacionat_desta_target_id';
  $handler->display->display_options['fields']['field_seccio']['label'] = '';
  $handler->display->display_options['fields']['field_seccio']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_seccio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_seccio']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_seccio']['field_api_classes'] = TRUE;
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_contingut_relacionat_desta_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Contingut: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['relationship'] = 'field_contingut_relacionat_desta_target_id';
  $handler->display->display_options['fields']['field_autor']['label'] = '';
  $handler->display->display_options['fields']['field_autor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_autor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_autor']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_autor']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_autor']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_autor']['field_api_classes'] = TRUE;
  /* Field: Contingut: Data */
  $handler->display->display_options['fields']['field_data']['id'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['table'] = 'field_data_field_data';
  $handler->display->display_options['fields']['field_data']['field'] = 'field_data';
  $handler->display->display_options['fields']['field_data']['relationship'] = 'field_contingut_relacionat_desta_target_id';
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
  /* Field: Contingut: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_contingut_relacionat_desta_target_id';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Field: Field: Contingut relacionat */
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['id'] = 'field_contingut_relacionat_ref';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['table'] = 'field_data_field_contingut_relacionat_ref';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['field'] = 'field_contingut_relacionat_ref';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['label'] = '';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['element_type'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_contingut_relacionat_ref']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div id=faldo-general>

  <div id=faldo_esquerra>

    <div id=faldo_esquerra_portada>
   [field_portada_numero]
    </div>
    <div id=faldo_esquerra_dreta>
     [easy_social]
    [field_butlleti_sonor]
    [nothing]
    </div>
  </div>
  <div id=faldo_dreta>
    <div id=faldo_dreta_destacat>
      <div id=faldo_dreta_destacat_fotografai>
      [field_fotografia_portada]
      </div>
      <div id=faldo_dreta_destacat_noticia>
        <div id=seccio_autor> 
           [field_seccio]
           [field_autor]
           [field_data]
      </div>
        <div id=titol_destacada>      
             [title_1]
             [body]
        </div>
      </div>
    </div>
    <div id=faldo_dreta_noticies>
    [field_contingut_relacionat_ref]
    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
    'faldo' => 'faldo',
  );

  /* Display: Faldo dimecres */
  $handler = $view->new_display('block', 'Faldo dimecres', 'block');

  /* Display: Bs portada */
  $handler = $view->new_display('block', 'Bs portada', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Contingut: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Contingut: Portada numero */
  $handler->display->display_options['fields']['field_portada_numero']['id'] = 'field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['table'] = 'field_data_field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['field'] = 'field_portada_numero';
  $handler->display->display_options['fields']['field_portada_numero']['relationship'] = 'field_numero_en_paper_target_id';
  $handler->display->display_options['fields']['field_portada_numero']['label'] = 'Foto';
  $handler->display->display_options['fields']['field_portada_numero']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portada_numero']['element_type'] = '0';
  $handler->display->display_options['fields']['field_portada_numero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portada_numero']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_portada_numero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portada_numero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portada_numero']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_portada_numero']['field_api_classes'] = TRUE;
  /* Field: Contingut: Butlleti sonor */
  $handler->display->display_options['fields']['field_butlleti_sonor']['id'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['table'] = 'field_data_field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['field'] = 'field_butlleti_sonor';
  $handler->display->display_options['fields']['field_butlleti_sonor']['relationship'] = 'field_bs_target_id';
  $handler->display->display_options['fields']['field_butlleti_sonor']['label'] = '';
  $handler->display->display_options['fields']['field_butlleti_sonor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_type'] = '0';
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_butlleti_sonor']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_butlleti_sonor']['field_api_classes'] = TRUE;
  /* Field: Contingut: Nº */
  $handler->display->display_options['fields']['field_n_']['id'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['table'] = 'field_data_field_n_';
  $handler->display->display_options['fields']['field_n_']['field'] = 'field_n_';
  $handler->display->display_options['fields']['field_n_']['relationship'] = 'field_numero_en_paper_target_id';
  $handler->display->display_options['fields']['field_n_']['label'] = '';
  $handler->display->display_options['fields']['field_n_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_n_']['element_type'] = '0';
  $handler->display->display_options['fields']['field_n_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_n_']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_n_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_n_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_n_']['field_api_classes'] = TRUE;
  /* Field: Contingut: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Hemeroteca';
  /* Field: Contingut: Data */
  $handler->display->display_options['fields']['field_dataf_1']['id'] = 'field_dataf_1';
  $handler->display->display_options['fields']['field_dataf_1']['table'] = 'field_data_field_dataf';
  $handler->display->display_options['fields']['field_dataf_1']['field'] = 'field_dataf';
  $handler->display->display_options['fields']['field_dataf_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataf_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Contingut: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['relationship'] = 'field_numero_en_paper_target_id';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['alter']['text'] = 'Visualitza';
  $handler->display->display_options['fields']['field_pdf']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pdf']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_pdf']['settings'] = array(
    'text' => 'Visualitza',
  );
  $handler->display->display_options['fields']['field_pdf']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div id=faldo-general>

  <div id=faldo_esquerra>

    <div id=faldo_esquerra_portada>
   [field_portada_numero]
    </div>
    <div id=faldo_esquerra_dreta>
    [field_dataf_1]
    [field_n_]
    [field_pdf]
    [view_node]
    [field_butlleti_sonor]

    </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $translatables['fald_'] = array(
    t('Master'),
    t('Faldó'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Ordena per'),
    t('Asc'),
    t('Desc'),
    t('Contingut entity referenced from field_numero_en_paper'),
    t('Contingut entity referenced from field_bs'),
    t('Contingut entity referenced from field_contingut_relacionat_ref'),
    t('Contingut entity referenced from field_contingut_relacionat_desta'),
    t('Foto'),
    t('Comparteix'),
    t('<div id=faldo_subscriptors>
<a href="/subscriptors"> <h2> Subscriute </h2> </a> 
</div>'),
    t('<div id=faldo-general>

  <div id=faldo_esquerra>

    <div id=faldo_esquerra_portada>
   [field_portada_numero]
    </div>
    <div id=faldo_esquerra_dreta>
     [easy_social]
    [field_butlleti_sonor]
    [nothing]
    </div>
  </div>
  <div id=faldo_dreta>
    <div id=faldo_dreta_destacat>
      <div id=faldo_dreta_destacat_fotografai>
      [field_fotografia_portada]
      </div>
      <div id=faldo_dreta_destacat_noticia>
        <div id=seccio_autor> 
           [field_seccio]
           [field_autor]
           [field_data]
      </div>
        <div id=titol_destacada>      
             [title_1]
             [body]
        </div>
      </div>
    </div>
    <div id=faldo_dreta_noticies>
    [field_contingut_relacionat_ref]
    </div>
  </div>
</div>'),
    t('Faldo dimecres'),
    t('Bs portada'),
    t('Hemeroteca'),
    t('Data'),
    t('Visualitza'),
    t('<div id=faldo-general>

  <div id=faldo_esquerra>

    <div id=faldo_esquerra_portada>
   [field_portada_numero]
    </div>
    <div id=faldo_esquerra_dreta>
    [field_dataf_1]
    [field_n_]
    [field_pdf]
    [view_node]
    [field_butlleti_sonor]

    </div>
  </div>
</div>'),
  );
  $export['fald_'] = $view;

  return $export;
}
