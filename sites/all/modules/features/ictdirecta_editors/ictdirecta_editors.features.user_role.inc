<?php
/**
 * @file
 * ictdirecta_editors.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ictdirecta_editors_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: blogger.
  $roles['blogger'] = array(
    'name' => 'blogger',
    'weight' => 5,
  );

  // Exported role: gestio_subscripcions.
  $roles['gestio_subscripcions'] = array(
    'name' => 'gestio_subscripcions',
    'weight' => 6,
  );

  // Exported role: redaccio.
  $roles['redaccio'] = array(
    'name' => 'redaccio',
    'weight' => 4,
  );

  // Exported role: site_admin.
  $roles['site_admin'] = array(
    'name' => 'site_admin',
    'weight' => 3,
  );

  // Exported role: subscriptora_activa.
  $roles['subscriptora_activa'] = array(
    'name' => 'subscriptora_activa',
    'weight' => 7,
  );

  // Exported role: usuaria_nosubscrita.
  $roles['usuaria_nosubscrita'] = array(
    'name' => 'usuaria_nosubscrita',
    'weight' => 8,
  );

  return $roles;
}
