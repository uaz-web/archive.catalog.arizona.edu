<?php
/**
 * @file
 * uaqs_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uaqs_person_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottom_row|node|uaqs_person|full';
  $field_group->group_name = 'group_bottom_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Bottom Row',
    'weight' => '4',
    'children' => array(
      0 => 'field_uaqs_bio',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Bottom Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_bottom_row|node|uaqs_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_block_1|node|uaqs_person|uaqs_card';
  $field_group->group_name = 'group_card_block_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'uaqs_card';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Card Block',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_email',
      1 => 'field_uaqs_phones',
      2 => 'field_uaqs_titles',
      3 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Block',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-block',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card_block_1|node|uaqs_person|uaqs_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|node|uaqs_person|uaqs_card';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'uaqs_card';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_photo',
      1 => 'group_card_block_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card|node|uaqs_person|uaqs_card'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_left|node|uaqs_person|teaser';
  $field_group->group_name = 'group_column_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_photo',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-3',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_column_left|node|uaqs_person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_middle|node|uaqs_person|teaser';
  $field_group->group_name = 'group_column_middle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Middle Column',
    'weight' => '1',
    'children' => array(
      0 => 'field_uaqs_titles',
      1 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Middle Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-5',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_column_middle|node|uaqs_person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_right|node|uaqs_person|teaser';
  $field_group->group_name = 'group_column_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_email',
      1 => 'field_uaqs_phones',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Right Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-4',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_column_right|node|uaqs_person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|uaqs_person|full';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_photo',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Left Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-3',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_left|node|uaqs_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|uaqs_person|full';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '3',
    'children' => array(
      0 => 'field_uaqs_addresses',
      1 => 'field_uaqs_email',
      2 => 'field_uaqs_phones',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Right Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_right|node|uaqs_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|uaqs_person|full';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alignment Row',
    'weight' => '0',
    'children' => array(
      0 => 'group_left',
      1 => 'group_right',
      2 => 'group_bottom_row',
      3 => 'group_top_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alignment Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_row|node|uaqs_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|uaqs_person|teaser';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '3',
    'children' => array(
      0 => 'group_column_left',
      1 => 'group_column_middle',
      2 => 'group_column_right',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row border-separator',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|node|uaqs_person|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_row|node|uaqs_person|full';
  $field_group->group_name = 'group_top_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Top Row',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'field_uaqs_titles',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Top Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-md-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_top_row|node|uaqs_person|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_uaqs_contact_area|node|uaqs_person|default';
  $field_group->group_name = 'group_uaqs_contact_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_addresses',
      1 => 'field_uaqs_email',
      2 => 'field_uaqs_phones',
      3 => 'field_uaqs_photo',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-uaqs-person-contact-area field-group-div clearfix',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_uaqs_contact_area|node|uaqs_person|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Alignment Row');
  t('Bottom Row');
  t('Card');
  t('Card Block');
  t('Left Column');
  t('Middle Column');
  t('Right Column');
  t('Row');
  t('Top Row');

  return $field_groups;
}
