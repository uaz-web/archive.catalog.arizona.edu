<?php
/**
 * @file
 * uams_media.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uams_media_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figcaption|file|image|align_left';
  $field_group->group_name = 'group_figcaption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'align_left';
  $field_group->parent_name = 'group_figure';
  $field_group->data = array(
    'label' => 'Figcaption',
    'weight' => '2',
    'children' => array(
      0 => 'field_uams_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figcaption',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'figcaption',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figcaption|file|image|align_left'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figcaption|file|image|align_right';
  $field_group->group_name = 'group_figcaption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'align_right';
  $field_group->parent_name = 'group_figure';
  $field_group->data = array(
    'label' => 'Figcaption',
    'weight' => '2',
    'children' => array(
      0 => 'field_uams_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figcaption',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'figcaption',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figcaption|file|image|align_right'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figcaption|file|image|full_width';
  $field_group->group_name = 'group_figcaption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'full_width';
  $field_group->parent_name = 'group_figure';
  $field_group->data = array(
    'label' => 'Figcaption',
    'weight' => '1',
    'children' => array(
      0 => 'field_uams_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figcaption',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'figcaption',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figcaption|file|image|full_width'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figcaption|file|image|square';
  $field_group->group_name = 'group_figcaption';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'square';
  $field_group->parent_name = 'group_figure';
  $field_group->data = array(
    'label' => 'Figcaption',
    'weight' => '2',
    'children' => array(
      0 => 'field_uams_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figcaption',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'figcaption',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figcaption|file|image|square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figure|file|image|align_left';
  $field_group->group_name = 'group_figure';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'align_left';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Figure',
    'weight' => '0',
    'children' => array(
      0 => 'file',
      1 => 'group_figcaption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figure',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'pull-left',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figure|file|image|align_left'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figure|file|image|align_right';
  $field_group->group_name = 'group_figure';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'align_right';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Figure',
    'weight' => '0',
    'children' => array(
      0 => 'file',
      1 => 'group_figcaption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figure',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'pull-right',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figure|file|image|align_right'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figure|file|image|full_width';
  $field_group->group_name = 'group_figure';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'full_width';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Figure',
    'weight' => '6',
    'children' => array(
      0 => 'file',
      1 => 'group_figcaption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figure',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figure|file|image|full_width'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figure|file|image|square';
  $field_group->group_name = 'group_figure';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'image';
  $field_group->mode = 'square';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Figure',
    'weight' => '0',
    'children' => array(
      0 => 'file',
      1 => 'group_figcaption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Figure',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_figure|file|image|square'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_responsive_embed|file|video|default';
  $field_group->group_name = 'group_responsive_embed';
  $field_group->entity_type = 'file';
  $field_group->bundle = 'video';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Responsive Embed',
    'weight' => '0',
    'children' => array(
      0 => 'file',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Responsive Embed',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'embed-responsive embed-responsive-16by9',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_responsive_embed|file|video|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Figcaption');
  t('Figure');
  t('Responsive Embed');

  return $field_groups;
}
