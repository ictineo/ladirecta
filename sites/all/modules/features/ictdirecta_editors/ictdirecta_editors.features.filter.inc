<?php
/**
 * @file
 * ictdirecta_editors.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ictdirecta_editors_filter_default_formats() {
  $formats = array();

  // Exported format: Editor web - Complert.
  $formats['editor_web_complert'] = array(
    'format' => 'editor_web_complert',
    'name' => 'Editor web - Complert',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
