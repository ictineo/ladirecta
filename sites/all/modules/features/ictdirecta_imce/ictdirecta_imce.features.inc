<?php
/**
 * @file
 * ictdirecta_imce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_imce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
