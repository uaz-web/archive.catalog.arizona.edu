<?php
/**
 * @file
 * uams_media_paragraphs_item.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uams_media_paragraphs_item_defaultconfig_features() {
  return array(
    'uams_media_paragraphs_item' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uams_media_paragraphs_item_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__uams_media';
  $strongarm->value = array(
    'view_modes' => array(
      'uaqs_sidebar_teaser_list' => array(
        'custom_settings' => TRUE,
      ),
      'uaqs_align_left' => array(
        'custom_settings' => TRUE,
      ),
      'uaqs_align_right' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'paragraphs_editor_preview' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__uams_media'] = $strongarm;

  return $export;
}
