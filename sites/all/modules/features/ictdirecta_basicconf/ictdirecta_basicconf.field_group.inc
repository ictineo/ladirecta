<?php
/**
 * @file
 * ictdirecta_basicconf.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ictdirecta_basicconf_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compte|profile2|main|form';
  $field_group->group_name = 'group_compte';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pagament';
  $field_group->data = array(
    'label' => 'compte',
    'weight' => '7',
    'children' => array(
      0 => 'field_compte1',
      1 => 'field_compte2',
      2 => 'field_compte3',
      3 => 'field_compte4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'compte',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-compte field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_compte|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pagament|profile2|main|form';
  $field_group->group_name = 'group_pagament';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pagament',
    'weight' => '2',
    'children' => array(
      0 => 'field_pagament',
      1 => 'field_forma_pagament',
      2 => 'field_transferencia',
      3 => 'field_domicialiacio',
      4 => 'field_altres',
      5 => 'field_altres_input',
      6 => 'group_compte',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pagament field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pagament|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perfil|profile2|main|form';
  $field_group->group_name = 'group_perfil';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En quan rebem les dades ens posarem en contacte amb tu per formalitzar la subscripció',
    'weight' => '1',
    'children' => array(
      0 => 'field_nom_usuari',
      1 => 'field_cognom',
      2 => 'field_adreca_usuari',
      3 => 'field_poblacio',
      4 => 'field_comarca',
      5 => 'field_codi_postal_usuari',
      6 => 'field_telefono_usuari',
      7 => 'field_e_mail',
      8 => 'field_modifica_perfil',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'En quan rebem les dades ens posarem en contacte amb tu per formalitzar la subscripció',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-perfil field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_perfil|profile2|main|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subscripcio|profile2|main|form';
  $field_group->group_name = 'group_subscripcio';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Escull quina quota de pagament vols tenir',
    'weight' => '0',
    'children' => array(
      0 => 'field_subscripcions',
      1 => 'field_subscripcions_markup',
      2 => 'field_titol_subscripcion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Escull quina quota de pagament vols tenir',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-subscripcio field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_subscripcio|profile2|main|form'] = $field_group;

  return $export;
}
