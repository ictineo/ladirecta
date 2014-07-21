<?php
/**
 * @file
 * ictdirecta_hemeroteca.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function ictdirecta_xhemeroteca_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'hemeroteca';
  $searcher->label = 'Hemeroteca';
  $searcher->description = '';
  $searcher->search_path = 'hemeroteca';
  $searcher->page_title = 'Hemeroteca';
  $searcher->env_id = 'solr_server';
  $searcher->settings = array(
    'fq' => array(),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['hemeroteca'] = $searcher;

  return $export;
}
