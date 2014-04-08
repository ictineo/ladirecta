<?php
/**
 * @file
 * ictdirecta_fotogaleria.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_fotogaleria_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
