<?php
/**
 * @file
 * ictdirecta_basicconf.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function ictdirecta_basicconf_locale_default_languages() {
  $languages = array();

  // Exported language: ca.
  $languages['ca'] = array(
    'language' => 'ca',
    'name' => 'Catalan',
    'native' => 'Català',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'ca',
    'weight' => 0,
  );
  return $languages;
}
