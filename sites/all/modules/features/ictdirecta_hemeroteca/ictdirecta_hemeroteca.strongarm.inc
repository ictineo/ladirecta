<?php
/**
 * @file
 * ictdirecta_hemeroteca.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ictdirecta_hemeroteca_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_excluded_mime';
  $strongarm->value = array(
    'audio/x-aiff' => 1,
    'image/x-jg' => 1,
    'video/x-msvideo' => 1,
    'image/x-ms-bmp' => 1,
    'image/gif' => 1,
    'image/vnd.microsoft.icon' => 1,
    'image/jpeg' => 1,
    'video/quicktime' => 1,
    'audio/mpeg' => 1,
    'video/mp4' => 1,
    'video/mpeg' => 1,
    'audio/ogg' => 1,
    'video/ogg' => 1,
    'image/png' => 1,
    'image/x-photoshop' => 1,
    'audio/x-realaudio' => 1,
    'audio/x-pn-realaudio' => 1,
    'image/x-rgb' => 1,
    'image/tiff' => 1,
    'video/x-ms-wmv' => 1,
  );
  $export['apachesolr_attachments_excluded_mime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_default_search_page';
  $strongarm->value = 'hemeroteca';
  $export['apachesolr_search_default_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = '30nxk2';
  $export['apachesolr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_extracting_servlet_path';
  $strongarm->value = 'contrib/extraction/lib';
  $export['search_api_attachments_extracting_servlet_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_extract_using';
  $strongarm->value = 'tika';
  $export['search_api_attachments_extract_using'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_tika_jar';
  $strongarm->value = 'tika-app-1.5.jar';
  $export['search_api_attachments_tika_jar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_attachments_tika_path';
  $strongarm->value = '/var/opt/tika-1.5/tika-app/target';
  $export['search_api_attachments_tika_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_last_optimize';
  $strongarm->value = 1405075755;
  $export['search_api_solr_last_optimize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_site_hash';
  $strongarm->value = 'lpety8';
  $export['search_api_solr_site_hash'] = $strongarm;

  return $export;
}
