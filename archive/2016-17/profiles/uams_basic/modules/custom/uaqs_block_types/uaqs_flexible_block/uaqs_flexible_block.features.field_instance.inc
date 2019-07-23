<?php
/**
 * @file
 * uaqs_flexible_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uaqs_flexible_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'bean-uaqs_flexible_block-field_uaqs_main_content'.
  $field_instances['bean-uaqs_flexible_block-field_uaqs_main_content'] = array(
    'bundle' => 'uaqs_flexible_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Content',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'uaqs_content_chunks',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
        ),
        'type' => 'paragraphs_view_mode',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_uaqs_main_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'uaqs_card_deck' => 'uaqs_card_deck',
        'uaqs_column_image' => 'uaqs_column_image',
        'uaqs_extra_info' => 'uaqs_extra_info',
        'uaqs_file_download' => 'uaqs_file_download',
        'uaqs_full_width_bg_wrapper' => 'uaqs_full_width_bg_wrapper',
        'uaqs_headed_text' => 'uaqs_headed_text',
        'uaqs_plain_text' => 'uaqs_plain_text',
      ),
      'bundle_weights' => array(
        'uaqs_card_deck' => 1,
        'uaqs_column_image' => 2,
        'uaqs_extra_info' => 3,
        'uaqs_file_download' => 4,
        'uaqs_full_width_bg_wrapper' => 5,
        'uaqs_headed_text' => 6,
        'uaqs_plain_text' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-uaqs_flexible_block-title_field'.
  $field_instances['bean-uaqs_flexible_block-title_field'] = array(
    'bundle' => 'uaqs_flexible_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Block title',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'title_class' => '',
          'title_link' => '',
          'title_style' => 'h3',
        ),
        'type' => 'title_linked',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => FALSE,
    'settings' => array(
      'hide_label' => array(
        'entity' => 'entity',
        'page' => 'page',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Block title');
  t('Content');
  t('Title');

  return $field_instances;
}
