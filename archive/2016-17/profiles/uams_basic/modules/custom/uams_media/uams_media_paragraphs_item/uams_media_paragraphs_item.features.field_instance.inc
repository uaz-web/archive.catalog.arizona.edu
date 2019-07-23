<?php
/**
 * @file
 * uams_media_paragraphs_item.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uams_media_paragraphs_item_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-uams_media-field_uams_media'.
  $field_instances['paragraphs_item-uams_media-field_uams_media'] = array(
    'bundle' => 'uams_media',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'uaqs_align_left' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'file_view_mode' => 'align_left',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'uaqs_align_right' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'file_view_mode' => 'align_right',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'uaqs_sidebar_teaser_list' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'field_multiple_limit' => -1,
          'field_multiple_limit_offset' => 0,
          'file_view_mode' => 'uaqs_sidebar_teaser_list',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_uams_media',
    'label' => 'Media',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'media',
      'file_extensions' => 'txt pdf oembed png gif jpeg jpg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'oembed' => 'oembed',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 'audio',
          'document' => 'document',
          'image' => 'image',
          'video' => 'video',
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'media_internet' => 'media_internet',
          'upload' => 'upload',
        ),
      ),
      'type' => 'media_generic',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');

  return $field_instances;
}
