<?php
/**
 * @file
 * ictdirecta_noticianew_paper.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_noticianew_paper_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_noticianew_paper_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
