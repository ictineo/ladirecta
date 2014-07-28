<?php
/**
 * @file
 * ictdirecta_noticia.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_noticia_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_noticia';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_noticia';
  $strongarm->value = '0';
  $export['comment_anonymous_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_noticia';
  $strongarm->value = 0;
  $export['comment_default_mode_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_noticia';
  $strongarm->value = '50';
  $export['comment_default_per_page_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_noticia';
  $strongarm->value = 0;
  $export['comment_form_location_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_noticia';
  $strongarm->value = '2';
  $export['comment_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_noticia';
  $strongarm->value = '1';
  $export['comment_preview_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_noticia';
  $strongarm->value = 0;
  $export['comment_subject_field_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_comment_noticia_enable';
  $strongarm->value = 0;
  $export['easy_social_comment_noticia_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_noticia_count';
  $strongarm->value = '1';
  $export['easy_social_noticia_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_noticia_enable';
  $strongarm->value = 1;
  $export['easy_social_noticia_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_noticia_type';
  $strongarm->value = '0';
  $export['easy_social_noticia_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_noticia_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_noticia_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_comment__comment_node_noticia';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'author' => array(
          'weight' => '0',
        ),
        'subject' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_comment__comment_node_noticia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'field_collection_item' => array(
      0 => 'field_collection_item',
      1 => 'item_id',
    ),
    'flagging' => array(
      0 => 'flagging',
      1 => 'flagging_id',
    ),
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'search_api_server' => array(
      0 => 'search_api_server',
      1 => 'id',
    ),
    'search_api_index' => array(
      0 => 'search_api_index',
      1 => 'id',
    ),
    'search_api_autocomplete_search' => array(
      0 => 'search_api_autocomplete_search',
      1 => 'id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
    'menu_link' => array(
      0 => 'menu_links',
      1 => 'mlid',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_field_collection_item__field_continguts_relacionats';
  $strongarm->value = array(
    'view_modes' => array(
      'token' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '3',
        ),
        'xmlsitemap' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(
        'easy_social_1' => array(
          'teaser' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'ultimes_noticies_entity_view_1' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
      ),
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_field_collection_item__field_continguts_relacionats'] = $strongarm;

  return $export;
}
