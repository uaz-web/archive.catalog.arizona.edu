<?php
/**
 * @file
 * uaqs_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uaqs_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|uaqs_news|teaser';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link';
  $field_group->data = array(
    'label' => 'Text Muted',
    'weight' => '3',
    'children' => array(
      0 => 'field_uaqs_published',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text Muted',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-muted',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_date|node|uaqs_news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_h4|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_h4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_media_body';
  $field_group->data = array(
    'label' => 'h4',
    'weight' => '14',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'h4',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-heading',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_h4|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_heading|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = 'group_media_body';
  $field_group->data = array(
    'label' => 'Heading',
    'weight' => '18',
    'children' => array(
      0 => 'group_strong_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Heading',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-heading',
        'element' => 'h6',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_heading|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_heading|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_media_body';
  $field_group->data = array(
    'label' => 'Heading',
    'weight' => '27',
    'children' => array(
      0 => 'group_strong_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Heading',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-heading',
        'element' => 'h4',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_heading|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lead|node|uaqs_news|default';
  $field_group->group_name = 'group_lead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text_column';
  $field_group->data = array(
    'label' => 'Lead',
    'weight' => '9',
    'children' => array(
      0 => 'field_uaqs_summary_short',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Lead',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'lead',
        'element' => 'p',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_lead|node|uaqs_news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Media object',
    'weight' => '3',
    'children' => array(
      0 => 'field_uaqs_photo',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media object',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-right',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_left_column|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_placement|node|uaqs_news|teaser';
  $field_group->group_name = 'group_link_placement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link';
  $field_group->data = array(
    'label' => 'Link Placement',
    'weight' => '5',
    'children' => array(
      0 => 'group_strong',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Link Placement',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'small',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_link_placement|node|uaqs_news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|uaqs_news|teaser';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_short_title',
      1 => 'field_uaqs_summary',
      2 => 'field_uaqs_photo',
      3 => 'group_date',
      4 => 'group_link_placement',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'field_uaqs_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'list-link-block',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|node|uaqs_news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'group_media',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'field_uaqs_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'list-link-block',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link',
    'weight' => '0',
    'children' => array(
      0 => 'group_media',
    ),
    'format_type' => 'link',
    'format_settings' => array(
      'label' => 'Link',
      'instance_settings' => array(
        'link_to' => 'field_uaqs_link',
        'custom_url' => '',
        'custom_url_normalize' => 0,
        'target' => 'default',
        'classes' => 'list-link-block',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_link|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_content|node|uaqs_news|form';
  $field_group->group_name = 'group_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra fields',
    'weight' => '8',
    'children' => array(
      0 => 'field_uaqs_attachments',
      1 => 'field_uaqs_contacts',
      2 => 'field_uaqs_photos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Extra fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-main-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_main_content|node|uaqs_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_body|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_media_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Media Body',
    'weight' => '15',
    'children' => array(
      0 => 'group_heading',
      1 => 'group_read_more',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-body',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_body|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_body|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_media_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Media Body',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_summary',
      1 => 'group_text_muted',
      2 => 'group_heading',
      3 => 'group_read_more',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Body',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-body',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_body|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media_object|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_media_object';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Media Object',
    'weight' => '16',
    'children' => array(
      0 => 'field_uaqs_photo',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media Object',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media-right',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media_object|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = 'group_link';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '12',
    'children' => array(
      0 => 'group_media_body',
      1 => 'group_media_object',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_link';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '1',
    'children' => array(
      0 => 'group_left_column',
      1 => 'group_media_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'media',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_media|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_read_more|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_read_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = 'group_media_body';
  $field_group->data = array(
    'label' => 'Read More',
    'weight' => '19',
    'children' => array(
      0 => 'field_uaqs_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Read More',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-red',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_read_more|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_read_more|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_read_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_media_body';
  $field_group->data = array(
    'label' => 'Read More',
    'weight' => '30',
    'children' => array(
      0 => 'group_strong',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Read More',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'page-row-padding-top',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_read_more|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_row|node|uaqs_news|default';
  $field_group->group_name = 'group_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '1',
    'children' => array(
      0 => 'group_text_column',
      1 => 'group_title_column',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_row|node|uaqs_news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strong_title|node|uaqs_news|uaqs_sidebar_teaser_list';
  $field_group->group_name = 'group_strong_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_sidebar_teaser_list';
  $field_group->parent_name = 'group_heading';
  $field_group->data = array(
    'label' => 'Strong',
    'weight' => '21',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Strong',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'strong',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_strong_title|node|uaqs_news|uaqs_sidebar_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strong_title|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_strong_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_heading';
  $field_group->data = array(
    'label' => 'strong',
    'weight' => '28',
    'children' => array(
      0 => 'title_field',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'strong',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'element' => 'strong',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_strong_title|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strong|node|uaqs_news|teaser';
  $field_group->group_name = 'group_strong';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_link_placement';
  $field_group->data = array(
    'label' => 'Strong',
    'weight' => '6',
    'children' => array(
      0 => 'field_uaqs_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Strong',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-red',
        'element' => 'strong',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_strong|node|uaqs_news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_strong|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_strong';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_read_more';
  $field_group->data = array(
    'label' => 'Strong',
    'weight' => '31',
    'children' => array(
      0 => 'field_uaqs_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Strong',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-red btn-arrow small',
        'element' => 'strong',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_strong|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary|node|uaqs_news|form';
  $field_group->group_name = 'group_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary fields',
    'weight' => '7',
    'children' => array(
      0 => 'field_uaqs_expiration_date',
      1 => 'field_uaqs_link',
      2 => 'field_uaqs_short_title',
      3 => 'field_uaqs_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary|node|uaqs_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_column|node|uaqs_news|default';
  $field_group->group_name = 'group_text_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Text Column',
    'weight' => '16',
    'children' => array(
      0 => 'field_uaqs_body',
      1 => 'field_uaqs_photo',
      2 => 'field_uaqs_main_content',
      3 => 'group_lead',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-lg-10 col-lg-push-1',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_text_column|node|uaqs_news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_muted|node|uaqs_news|default';
  $field_group->group_name = 'group_text_muted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_title_block';
  $field_group->data = array(
    'label' => 'Text Muted',
    'weight' => '17',
    'children' => array(
      0 => 'field_uaqs_published',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text Muted',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-muted',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_text_muted|node|uaqs_news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_muted|node|uaqs_news|uaqs_teaser_list';
  $field_group->group_name = 'group_text_muted';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'uaqs_teaser_list';
  $field_group->parent_name = 'group_media_body';
  $field_group->data = array(
    'label' => 'Text Muted',
    'weight' => '28',
    'children' => array(
      0 => 'field_uaqs_published',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Text Muted',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-muted',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_text_muted|node|uaqs_news|uaqs_teaser_list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_block|node|uaqs_news|default';
  $field_group->group_name = 'group_title_block';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_title_column';
  $field_group->data = array(
    'label' => 'Title Block',
    'weight' => '15',
    'children' => array(
      0 => 'field_uaqs_byline',
      1 => 'title_field',
      2 => 'group_text_muted',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title Block',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' border-bottom margin-align-top',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_block|node|uaqs_news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_column|node|uaqs_news|default';
  $field_group->group_name = 'group_title_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_news';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_row';
  $field_group->data = array(
    'label' => 'Title column',
    'weight' => '14',
    'children' => array(
      0 => 'group_title_block',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Title column',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' col-xs-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_title_column|node|uaqs_news|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Extra fields');
  t('Heading');
  t('Lead');
  t('Link');
  t('Link Placement');
  t('Media');
  t('Media Body');
  t('Media Object');
  t('Media object');
  t('Read More');
  t('Row');
  t('Strong');
  t('Summary fields');
  t('Text Column');
  t('Text Muted');
  t('Title Block');
  t('Title column');
  t('h4');
  t('strong');

  return $field_groups;
}
