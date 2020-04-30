<?php
/**
 * @file
 * uams_block_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uams_block_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_heading|bean|uams_quick_links|default';
  $field_group->group_name = 'group_heading';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'uams_quick_links';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Heading',
    'weight' => '0',
    'children' => array(
      0 => 'group_strong',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Heading',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'margin-align-middle text-uppercase',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_heading|bean|uams_quick_links|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|bean|uams_quick_links|default';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'uams_quick_links';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List Group',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_links',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'list-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_group|bean|uams_quick_links|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_list_group|bean|uams_quick_links|form';
  $field_group->group_name = 'group_list_group';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'uams_quick_links';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List Group',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_links',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'List Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'list-group',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_list_group|bean|uams_quick_links|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strong|bean|uams_quick_links|default';
  $field_group->group_name = 'group_strong';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'uams_quick_links';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_heading';
  $field_group->data = array(
    'label' => 'Strong',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Strong',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'strong',
        'element' => 'strong',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_strong|bean|uams_quick_links|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Heading');
  t('List Group');
  t('Strong');

  return $field_groups;
}
