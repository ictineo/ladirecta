<?php
/**
 * @file
 * ictdirecta_noticia.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ictdirecta_noticia_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_noticia-field_adjunt'
  $field_instances['comment-comment_node_noticia-field_adjunt'] = array(
    'bundle' => 'comment_node_noticia',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'comment',
    'fences_wrapper' => 'div',
    'field_name' => 'field_adjunt',
    'label' => 'Arxiu',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx xls xlsx ppt pptx html zip tar gz bz2 rar gif png jpg jpeg mp3 ogg avi mpg mpeg rtf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'comment-comment_node_noticia-field_adre_a_correu_e'
  $field_instances['comment-comment_node_noticia-field_adre_a_correu_e'] = array(
    'bundle' => 'comment_node_noticia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'comment',
    'fences_wrapper' => 'div',
    'field_name' => 'field_adre_a_correu_e',
    'label' => 'Adreça correu-e',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'comment-comment_node_noticia-field_nom_i_cognoms'
  $field_instances['comment-comment_node_noticia-field_nom_i_cognoms'] = array(
    'bundle' => 'comment_node_noticia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'fences_wrapper' => 'div',
    'field_name' => 'field_nom_i_cognoms',
    'label' => 'Nom i cognoms',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_continguts_relacionats-field_continguts_relacionats_ref'
  $field_instances['field_collection_item-field_continguts_relacionats-field_continguts_relacionats_ref'] = array(
    'bundle' => 'field_continguts_relacionats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'token',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_continguts_relacionats_ref',
    'label' => 'Continguts relacionats',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 1,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_continguts_relacionats-field_destacat'
  $field_instances['field_collection_item-field_continguts_relacionats-field_destacat'] = array(
    'bundle' => 'field_continguts_relacionats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_destacat',
    'label' => 'Destacat',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_continguts_relacionats-field_promogut_portada'
  $field_instances['field_collection_item-field_continguts_relacionats-field_promogut_portada'] = array(
    'bundle' => 'field_continguts_relacionats',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_promogut_portada',
    'label' => 'Mostra\'l en portada	',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-noticia-field_continguts_relacionats'
  $field_instances['node-noticia-field_continguts_relacionats'] = array(
    'bundle' => 'noticia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Cercar i seleccionar documents, fotogaleries o videos relacionats amb la notícia',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'token',
        ),
        'type' => 'field_collection_fields',
        'weight' => 7,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_continguts_relacionats',
    'label' => 'Continguts relacionats',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-noticia-field_fotografies'
  $field_instances['node-noticia-field_fotografies'] = array(
    'bundle' => 'noticia',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'token',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'token',
        ),
        'type' => 'field_collection_fields',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_fotografies',
    'label' => 'Fotografia portada',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adreça correu-e');
  t('Arxiu');
  t('Cercar i seleccionar documents, fotogaleries o videos relacionats amb la notícia');
  t('Continguts relacionats');
  t('Destacat');
  t('Fotografia portada');
  t('Mostra\'l en portada	');
  t('Nom i cognoms');

  return $field_instances;
}
