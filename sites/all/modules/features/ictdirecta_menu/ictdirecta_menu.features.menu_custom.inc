<?php
/**
 * @file
 * ictdirecta_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ictdirecta_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-menu-paper.
  $menus['menu-menu-paper'] = array(
    'menu_name' => 'menu-menu-paper',
    'title' => 'Menu Paper',
    'description' => '',
  );
  // Exported menu: menu-menu-territorial.
  $menus['menu-menu-territorial'] = array(
    'menu_name' => 'menu-menu-territorial',
    'title' => 'Menu Territorial',
    'description' => '',
  );
  // Exported menu: menu-seccions-web.
  $menus['menu-seccions-web'] = array(
    'menu_name' => 'menu-seccions-web',
    'title' => 'Seccions web',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menu Paper');
  t('Menu Territorial');
  t('Seccions web');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
