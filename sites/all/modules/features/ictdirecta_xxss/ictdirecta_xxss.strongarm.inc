<?php
/**
 * @file
 * ictdirecta_xxss.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_xxss_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_article_count';
  $strongarm->value = '1';
  $export['easy_social_article_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_article_enable';
  $strongarm->value = 1;
  $export['easy_social_article_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_article_type';
  $strongarm->value = '0';
  $export['easy_social_article_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_article_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_article_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_override';
  $strongarm->value = 0;
  $export['easy_social_block_1_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_title';
  $strongarm->value = '';
  $export['easy_social_block_1_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_type';
  $strongarm->value = '1';
  $export['easy_social_block_1_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_url_facebook';
  $strongarm->value = '[current-path]';
  $export['easy_social_block_1_url_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_url_googleplus';
  $strongarm->value = '[current-path]';
  $export['easy_social_block_1_url_googleplus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_url_linkedin';
  $strongarm->value = '[current-path]';
  $export['easy_social_block_1_url_linkedin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_url_twitter';
  $strongarm->value = '[current-path]';
  $export['easy_social_block_1_url_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_1_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'linkedin' => 'linkedin',
    'flattr_share_button' => 0,
  );
  $export['easy_social_block_1_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_block_count';
  $strongarm->value = '1';
  $export['easy_social_block_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_butlleti_sonor_enable';
  $strongarm->value = 1;
  $export['easy_social_butlleti_sonor_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_noticies_enable';
  $strongarm->value = 1;
  $export['easy_social_cd_noticies_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_cd_serveis_enable';
  $strongarm->value = 1;
  $export['easy_social_cd_serveis_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_comment_article_enable';
  $strongarm->value = 0;
  $export['easy_social_comment_article_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_esdeveniment_agenda_enable';
  $strongarm->value = 1;
  $export['easy_social_esdeveniment_agenda_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_appid';
  $strongarm->value = '';
  $export['easy_social_facebook_appid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_color_scheme';
  $strongarm->value = 'light';
  $export['easy_social_facebook_color_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_font';
  $strongarm->value = 'default';
  $export['easy_social_facebook_font'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_send_button';
  $strongarm->value = 0;
  $export['easy_social_facebook_send_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_show_faces';
  $strongarm->value = 0;
  $export['easy_social_facebook_show_faces'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_verb';
  $strongarm->value = 'like';
  $export['easy_social_facebook_verb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_widget_type';
  $strongarm->value = 'html5';
  $export['easy_social_facebook_widget_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_width_horizontal';
  $strongarm->value = '88';
  $export['easy_social_facebook_width_horizontal'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_facebook_width_vertical';
  $strongarm->value = '48';
  $export['easy_social_facebook_width_vertical'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_faldo_enable';
  $strongarm->value = 1;
  $export['easy_social_faldo_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_flattr_category';
  $strongarm->value = 'text';
  $export['easy_social_flattr_category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_flattr_id';
  $strongarm->value = 'projecte';
  $export['easy_social_flattr_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_order';
  $strongarm->value = array(
    0 => 'facebook',
    1 => 'twitter',
    2 => 'googleplus',
    3 => 'flattr_share_button',
    4 => 'linkedin',
  );
  $export['easy_social_global_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_type';
  $strongarm->value = '0';
  $export['easy_social_global_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_global_widgets';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'googleplus' => 'googleplus',
    'flattr_share_button' => 'flattr_share_button',
    'linkedin' => 0,
  );
  $export['easy_social_global_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_googleplus_annotation';
  $strongarm->value = 'bubble';
  $export['easy_social_googleplus_annotation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_googleplus_html5';
  $strongarm->value = 1;
  $export['easy_social_googleplus_html5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_linies_de_recerca_enable';
  $strongarm->value = 1;
  $export['easy_social_linies_de_recerca_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_numero_paper_enable';
  $strongarm->value = 1;
  $export['easy_social_numero_paper_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_page_enable';
  $strongarm->value = 1;
  $export['easy_social_page_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_punts_de_venda_enable';
  $strongarm->value = 1;
  $export['easy_social_punts_de_venda_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_account_description';
  $strongarm->value = 'Check it out!';
  $export['easy_social_twitter_account_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_account_related';
  $strongarm->value = '';
  $export['easy_social_twitter_account_related'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_account_via';
  $strongarm->value = '';
  $export['easy_social_twitter_account_via'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_twitter_count_show';
  $strongarm->value = 1;
  $export['easy_social_twitter_count_show'] = $strongarm;

  return $export;
}
