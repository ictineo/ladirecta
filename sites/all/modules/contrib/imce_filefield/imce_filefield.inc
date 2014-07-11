<?php

/**
 * @file
 * Integrates IMCE into FileField.
 */

/**
 * Outputs the IMCE browser for FileField.
 */
function imce_filefield_page($entity_type, $bundle_name, $field_name) {
  global $conf;

  // Check access.
  if (!imce_access() || !($instance = field_info_instance($entity_type, $field_name, $bundle_name)) || empty($instance['widget']['settings']['imce_filefield_on'])) {
    return drupal_access_denied();
  }

  $field = field_info_field($field_name);
  $conf['imce_custom_scan'] = 'imce_filefield_custom_scan';
  module_load_include('inc', 'imce', 'inc/imce.page');
  return imce($field['settings']['uri_scheme']);
}

/**
 * Custom scan callback for IMCE.
 */
function imce_filefield_custom_scan($dirname, &$imce) {
  return imce_scan_directory($dirname, $imce);
}

/**
 * Extends file widget element.
 */
function _imce_filefield_field_process($element, &$form_state, $form) {
  static $jsadded, $access;
  if (!isset($access)) {
    $access = imce_access();
  }

  // Check imce access.
  if (!$access) {
    return $element;
  }

  // Check field instance.
  if (!isset($element['#field_name']) || !($instance = field_widget_instance($element, $form_state))) {
    return $element;
  }

  // Check settings.
  if (empty($instance['widget']['settings']['imce_filefield_on'])) {
    return $element;
  }

  // Adjust the Ajax settings so that on upload and remove of any individual
  // file, the entire group of file fields is updated together.
  // Copied from file_field_widget_process().
  $field = field_widget_field($element, $form_state);
  if ($field['cardinality'] != 1) {
    $parents = array_slice($element['#array_parents'], 0, -1);
    $ajax_path = 'file/ajax/' . implode('/', $parents) . '/' . $form['form_build_id']['#value'];
    $field_element = drupal_array_get_nested_value($form, $parents);
    $ajax_wrapper = $field_element['#id'] . '-ajax-wrapper';
  }
  else {
    $ajax_path = 'file/ajax/' . implode('/', $element['#array_parents']) . '/' . $form['form_build_id']['#value'];
    $ajax_wrapper = $element['#id'] . '-ajax-wrapper';
  }

  $element['imce_filefield_fid'] = array(
    '#attributes' => array('id' => $element['#id'] . '-imce-filefield-fid'),
    '#type' => 'hidden',
    '#value' => '',
  );
  $element['imce_filefield_submit'] = array(
    '#type' => 'submit',
    '#value' => t('Select'),
    '#validate' => array(),
    '#submit' => array('imce_filefield_field_submit'),
    '#limit_validation_errors' => array(array_slice($element['#parents'], 0, -1)),
    '#name' => $element['#name'] . '[imce_filefield_submit]',
    '#id' => $element['#id'] . '-imce-filefield-submit',
    '#attributes' => array('style' => 'display: none;'),
    '#ajax' => array(
      'path' => $ajax_path,
      'wrapper' => $ajax_wrapper,
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );
  return $element;
}

/**
 * Submit handler for the IMCE widget.
 */
function imce_filefield_field_submit(&$form, &$form_state) {
  file_field_widget_submit($form, $form_state);
  $form_state['rebuild'] = TRUE;
}

/**
 * Field value callback.
 */
function _imce_filefield_field_value($element, &$item, &$form_state) {
  if ($file = file_load($item['imce_filefield_fid'])) {
    if (imce_filefield_element_validate($element, $file)) {
      $item = array_merge($item, (array) $file);
    }
  }
  else {
    form_error($element, t('The referenced file could not be used because the file does not exist in the database.'));
  }
  $item['imce_filefield_fid'] = '';
}

/**
 * Pre render callback. Add page elements.
 */
function _imce_filefield_field_pre_render(&$element) {
  imce_filefield_jscss();
  $jset['imce_filefield']['fields'][$element['#id']] = array('path' => $element['#entity_type']  . '/' . $element['#bundle'] . '/' . $element['#field_name']);
  drupal_add_js($jset, 'setting');
  if (!empty($element['#value']['fid'])) {
    $element['imce_filefield_fid']['#access'] = FALSE;
    $element['imce_filefield_submit']['#access'] = FALSE;
  }
}

/**
 * Validate a file with element validators.
 */
function imce_filefield_element_validate($element, $file) {
  $errors = array();

  // Check download access first
  if (file_uri_scheme($file->uri) !== 'public' && !imce_filefield_download_access($file)) {
    form_error($element, t('You do not have permission to use the selected file.'));
    return FALSE;
  }

  // Validate.
  foreach ($element['#upload_validators'] as $function => $args) {
    array_unshift($args, NULL);
    $args[0] = &$file;
    $errors = array_merge($errors, call_user_func_array($function, $args));
  }

  // Set errors.
  if (!empty($errors)) {
    $message = isset($errors[1]) ? '<ul><li>' . implode('</li><li>', $errors) . '</li></ul>' : $errors[0];
    form_error($element, $message);
    return FALSE;
  }

  return TRUE;
}

/**
 * Adds main js, css files and settings.
 */
function imce_filefield_jscss() {
  static $done;
  if (!isset($done)) {
    $done = TRUE;
    $path = drupal_get_path('module', 'imce_filefield');
    drupal_add_css($path . '/imce_filefield.css');
    drupal_add_js($path . '/imce_filefield.js');
    drupal_add_js(array('imce_filefield' => array('url' => url('imce-filefield'), 'token' => drupal_get_token('imce_filefield'))), 'setting');
  }
}

/**
 * IMCE file field operation.
 */
function _imce_js_imce_filefield(&$imce) {
  if (!isset($_GET['token']) || !drupal_valid_token($_GET['token'], 'imce_filefield') || empty($_GET['filenames'])) {
    return;
  }
  $ids = array();
  foreach ($_GET['filenames'] as $encodedname) {
    $filename = rawurldecode($encodedname);
    if (!isset($imce['files'][$filename])) {
      continue;
    }
    $uri = imce_dir_uri($imce) . $filename;
    $file = file_load_multiple(array(), array('uri' => $uri));
    $file = reset($file);
    // File is already in DB.
    if ($file) {
      $usage = file_usage_list($file);
      if (empty($usage)) {
        imce_file_register($file);
      }
    }
    // Add new entry for the file.
    else {
      $file = (object) array(
        'uid' => $imce['uid'],
        'filename' => $filename,
        'uri' => $uri,
        'filesize' => $imce['files'][$filename]['size'],
        'timestamp' => $imce['files'][$filename]['date'],
        'filemime' => file_get_mimetype($uri),
        'status' => FILE_STATUS_PERMANENT,
      );
      file_save($file);
      if (!empty($file->fid)) {
        imce_file_register($file);
      }
    }
    // Add the file id to the list
    if (!empty($file->fid)) {
      $ids[$encodedname] = $file->fid;
    }
  }
  return array('ids' => $ids);
}

/**
 * Check download access to a file.
 */
function imce_filefield_download_access($file) {
  $headers = array();
  foreach (module_implements('file_download') as $module) {
    $function = $module . '_file_download';
    if ($result = $function($file->uri)) {
      if ($result == -1) {
        return FALSE;
      }
      if (is_array($result)) {
        $headers = array_merge($headers, $result);
      }
    }
  }
  return !empty($headers);
}