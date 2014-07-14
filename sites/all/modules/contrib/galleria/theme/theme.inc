<?php
/**
 * @file
 * Theming functions for the Galleria module.
 * 
 * Preprocessor functions fill variables for templates and helper
 * functions to make theming easier.
 */

/**
 * Template preprocess handler for 'galleria_container' theme.
 */
function template_preprocess_galleria_container(&$vars) {
  // Each Galleria instance gets a unique id
  $galleria_id = &drupal_static('galleria_id', 0);
  $vars['id'] = ++$galleria_id;

  // Load the used option set
  if (!empty($vars['settings']['optionset'])) {
    $optionset = galleria_optionset_load($vars['settings']['optionset']);
  }
  if (empty($optionset)) {
    // Fall back to 'default' option set
    $optionset = galleria_optionset_load('default');
  }

  // Attach Galleria JavaScript
  galleria_add_js($galleria_id, $optionset);

  // Prepare image elements
  $items = $vars['items'];
  $vars['items'] = array();
  $thumb_style = empty($optionset['imagestyle_thumb']) ? 'galleria_thumb' : $optionset['imagestyle_thumb'];
  foreach ($items as $delta => $item) {
    // Stop errors for empty URI. See issue [#1319268] for details.
    if (empty($item['uri'])) {
      continue;
    }

    // Get URL for "normal" image
    if (empty($optionset['imagestyle_normal'])) {
       $normal_url = file_create_url($item['uri']);
    }
    else {
       $normal_url = image_style_url($optionset['imagestyle_normal'], $item['uri']);
    }

    // Get URL for "big" image (for lightbox and fullscreen)
    if (empty($optionset['imagestyle_big'])) {
      $big_url = file_create_url($item['uri']);
    }
    elseif ($optionset['imagestyle_big'] != $optionset['imagestyle_normal']) {
      $big_url = image_style_url($optionset['imagestyle_big'], $item['uri']);
    }

    if (!empty($big_url)) {
      $options = array(
        'attributes' => array(
          'rel' => $big_url,
        )
      );
    }
    else {
      $options = array();
    }
    $vars['items'][$delta] = array(
      '#theme' => 'image_formatter',
      '#item' => $item,
      '#image_style' => $thumb_style,
      '#path' => array(
         'path' => $normal_url,
         'options' => $options,
      ),
    );
  }
}

/**
 * Theme 'views_view_galleria'.
 */
function theme_views_view_galleria($vars) {
  $items = array();

  $view = $vars['view'];
  $img_field_name = $vars['img_field_name'];
  foreach ($vars['rows'] as $row) {
    $lang = $row->_field_data[$view->base_field]['entity']->language;
    // omit rows without image field.
    if (!isset($row->_field_data[$view->base_field]['entity']->{$img_field_name})) {
      continue;
    }
    $item = $row->_field_data[$view->base_field]['entity']->{$img_field_name}[$lang][0];
    $items[] = $item;
  }

  return theme('galleria_container', array(
    'items' => $items,
    'settings' => $vars['options'],
  ));
}
