<?php
/**
 * @file
 * ictdirecta_colabora.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ictdirecta_colabora_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contactanos|node|webform|full';
  $field_group->group_name = 'group_contactanos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contactan\'s',
    'weight' => '3',
    'children' => array(
      0 => 'webform',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contactan\'s',
      'instance_settings' => array(
        'classes' => 'group-contactanos field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_contactanos|node|webform|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webformer|node|webform|default';
  $field_group->group_name = 'group_webformer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacta',
    'weight' => '3',
    'children' => array(
      0 => 'webform',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contacta',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_webformer|node|webform|default'] = $field_group;

  return $export;
}
