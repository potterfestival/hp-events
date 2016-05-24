<?php
/**
 * @file
 * hp_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hp_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|events|form';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'dates',
    'weight' => '3',
    'children' => array(
      0 => 'field_dato',
      1 => 'field_place2book_tickets',
      2 => 'field_price',
      3 => 'group_sale_date',
      4 => 'group_locations',
      5 => 'group_default_ticket_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dates field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_dates|node|events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_default_ticket_name|node|events|form';
  $field_group->group_name = 'group_default_ticket_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dates';
  $field_group->data = array(
    'label' => 'standard billet navn',
    'weight' => '7',
    'children' => array(
      0 => 'field_standard_billet_navn',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-default-ticket-name field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_default_ticket_name|node|events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|events|form';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dates';
  $field_group->data = array(
    'label' => 'locations',
    'weight' => '6',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-locations field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_locations|node|events|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sale_date|node|events|form';
  $field_group->group_name = 'group_sale_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'events';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_dates';
  $field_group->data = array(
    'label' => 'Billet salgs periode',
    'weight' => '5',
    'children' => array(
      0 => 'field_sale_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sale-date field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_sale_date|node|events|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Billet salgs periode');
  t('dates');
  t('locations');
  t('standard billet navn');

  return $field_groups;
}
