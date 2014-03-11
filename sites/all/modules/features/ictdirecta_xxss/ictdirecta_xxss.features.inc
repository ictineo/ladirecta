<?php
/**
 * @file
 * ictdirecta_xxss.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_xxss_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
