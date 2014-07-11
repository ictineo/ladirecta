<?php
/**
 * @file
 * Contains core functions for the Views module support.
 */

/*
 * Implements hook_views_plugins().
 *
 * This function annnounces the style plugin for Galleria views.
 */
function galleria_views_plugins() {
  return array(
    'module' => 'galleria', // This just tells our themes are elsewhere.
    'style' => array(
      // Style plugin for the navigation.
      'galleria' => array(
        'title' => t('Galleria'),
        'help' => t('Display the results as a galleria image gallery.'),
        'handler' => 'views_plugin_style_galleria',
        'theme' => 'views_view_galleria',
        'theme file' => 'theme.inc',
        'theme path' => drupal_get_path('module', 'galleria') . '/theme',
        'uses row plugin' => FALSE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
        'even empty' => FALSE,
      ),
    ),
  );
}
