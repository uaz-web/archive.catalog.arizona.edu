<?php
/**
 * @file
 * uaqs_content_chunks.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uaqs_content_chunks_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_align_left|paragraphs_item|uaqs_column_image|uaqs_align_left';
  $field_group->group_name = 'group_align_left';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'uaqs_align_left';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Align left',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_photo',
      1 => 'group_figcaption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Align left',
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
  $field_groups['group_align_left|paragraphs_item|uaqs_column_image|uaqs_align_left'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alignment|paragraphs_item|uaqs_column_image|default';
  $field_group->group_name = 'group_alignment';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alignment',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_photo',
      1 => 'group_figcaption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Alignment',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'center-block',
        'element' => 'figure',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_alignment|paragraphs_item|uaqs_column_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alignment|paragraphs_item|uaqs_column_image|uaqs_align_right';
  $field_group->group_name = 'group_alignment';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'uaqs_align_right';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alignment',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_photo',
      1 => 'group_caption',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Alignment',
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
  $field_groups['group_alignment|paragraphs_item|uaqs_column_image|uaqs_align_right'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_caption|paragraphs_item|uaqs_column_image|uaqs_align_right';
  $field_group->group_name = 'group_caption';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'uaqs_align_right';
  $field_group->parent_name = 'group_alignment';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '1',
    'children' => array(
      0 => 'field_uaqs_caption_text',
      1 => 'group_credit',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Caption',
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
  $field_groups['group_caption|paragraphs_item|uaqs_column_image|uaqs_align_right'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_deck_wrapper|paragraphs_item|uaqs_card_deck|default';
  $field_group->group_name = 'group_card_deck_wrapper';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_card_deck';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card deck wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_card_deck',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card deck wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-deck-wrapper',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card_deck_wrapper|paragraphs_item|uaqs_card_deck|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_deck|paragraphs_item|uaqs_card_deck|default';
  $field_group->group_name = 'group_card_deck';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_card_deck';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_card_deck_wrapper';
  $field_group->data = array(
    'label' => 'Card Deck',
    'weight' => '4',
    'children' => array(
      0 => 'field_uaqs_cards',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Deck',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-deck',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card_deck|paragraphs_item|uaqs_card_deck|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_header|field_collection_item|field_uaqs_cards|default';
  $field_group->group_name = 'group_card_header';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_uaqs_cards';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_card';
  $field_group->data = array(
    'label' => 'Card Header',
    'weight' => '7',
    'children' => array(
      0 => 'group_card_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-header',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card_header|field_collection_item|field_uaqs_cards|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_title|field_collection_item|field_uaqs_cards|default';
  $field_group->group_name = 'group_card_title';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_uaqs_cards';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_card_header';
  $field_group->data = array(
    'label' => 'Card Title',
    'weight' => '6',
    'children' => array(
      0 => 'field_uaqs_short_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card Title',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'card-title',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_card_title|field_collection_item|field_uaqs_cards|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card|field_collection_item|field_uaqs_cards|default';
  $field_group->group_name = 'group_card';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_uaqs_cards';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_photo',
      1 => 'group_card_header',
      2 => 'group_card_block',
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
  $field_groups['group_card|field_collection_item|field_uaqs_cards|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|paragraphs_item|uaqs_full_width_bg_wrapper|default';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_full_width_bg_wrapper';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '0',
    'children' => array(
      0 => 'group_h1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Columns',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'col-sm-12',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_columns|paragraphs_item|uaqs_full_width_bg_wrapper|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_credit|paragraphs_item|uaqs_column_image|uaqs_align_left';
  $field_group->group_name = 'group_credit';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'uaqs_align_left';
  $field_group->parent_name = 'group_figcaption';
  $field_group->data = array(
    'label' => 'Credit',
    'weight' => '4',
    'children' => array(
      0 => 'field_uaqs_image_credit',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Credit',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-muted small',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_credit|paragraphs_item|uaqs_column_image|uaqs_align_left'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_credit|paragraphs_item|uaqs_column_image|uaqs_align_right';
  $field_group->group_name = 'group_credit';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'uaqs_align_right';
  $field_group->parent_name = 'group_caption';
  $field_group->data = array(
    'label' => 'Image credit',
    'weight' => '7',
    'children' => array(
      0 => 'field_uaqs_image_credit',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image credit',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-muted small',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_credit|paragraphs_item|uaqs_column_image|uaqs_align_right'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figcaption|paragraphs_item|uaqs_column_image|default';
  $field_group->group_name = 'group_figcaption';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_alignment';
  $field_group->data = array(
    'label' => 'Caption',
    'weight' => '2',
    'children' => array(
      0 => 'field_uaqs_caption_text',
      1 => 'group_image_credit',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Caption',
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
  $field_groups['group_figcaption|paragraphs_item|uaqs_column_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_figcaption|paragraphs_item|uaqs_column_image|uaqs_align_left';
  $field_group->group_name = 'group_figcaption';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'uaqs_align_left';
  $field_group->parent_name = 'group_align_left';
  $field_group->data = array(
    'label' => 'Caption/Cutline',
    'weight' => '1',
    'children' => array(
      0 => 'field_uaqs_caption_text',
      1 => 'group_credit',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Caption/Cutline',
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
  $field_groups['group_figcaption|paragraphs_item|uaqs_column_image|uaqs_align_left'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_h1|paragraphs_item|uaqs_full_width_bg_wrapper|default';
  $field_group->group_name = 'group_h1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_full_width_bg_wrapper';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'H1',
    'weight' => '1',
    'children' => array(
      0 => 'field_uaqs_summary_short',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'H1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'h1',
        'element' => 'h1',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_h1|paragraphs_item|uaqs_full_width_bg_wrapper|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_credit|paragraphs_item|uaqs_column_image|default';
  $field_group->group_name = 'group_image_credit';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'uaqs_column_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_figcaption';
  $field_group->data = array(
    'label' => 'Image Credit',
    'weight' => '8',
    'children' => array(
      0 => 'field_uaqs_image_credit',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Image Credit',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'text-muted small',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_image_credit|paragraphs_item|uaqs_column_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publication|node|uaqs_flexible_page|form';
  $field_group->group_name = 'group_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_flexible_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_uaqs_summary_fields';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '5',
    'children' => array(
      0 => 'field_uaqs_short_title',
      1 => 'field_uaqs_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-publication field-group-fieldset',
        'description' => 'Replace the token [site:name] to customize your link output.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_publication|node|uaqs_flexible_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_uaqs_main_content|node|uaqs_flexible_page|form';
  $field_group->group_name = 'group_uaqs_main_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_flexible_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main content',
    'weight' => '0',
    'children' => array(
      0 => 'field_uaqs_flexible_page_sub',
      1 => 'field_uaqs_main_content',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-uaqs-main-content field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_uaqs_main_content|node|uaqs_flexible_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_uaqs_summary_fields|node|uaqs_flexible_page|form';
  $field_group->group_name = 'group_uaqs_summary_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uaqs_flexible_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_uaqs_photo',
      1 => 'field_uaqs_summary',
      2 => 'group_publication',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Summary fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'These fields appear in display modes other that the full page view mode.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_uaqs_summary_fields|node|uaqs_flexible_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Align left');
  t('Alignment');
  t('Caption');
  t('Caption/Cutline');
  t('Card');
  t('Card Deck');
  t('Card Header');
  t('Card Title');
  t('Card deck wrapper');
  t('Columns');
  t('Credit');
  t('H1');
  t('Image Credit');
  t('Image credit');
  t('Main content');
  t('Publication');
  t('Summary fields');

  return $field_groups;
}
