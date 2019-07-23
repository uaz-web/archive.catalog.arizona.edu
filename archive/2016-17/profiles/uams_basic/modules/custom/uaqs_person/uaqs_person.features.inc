<?php
/**
 * @file
 * uaqs_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uaqs_person_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uaqs_person_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uaqs_person_image_default_styles() {
  $styles = array();

  // Exported image style: uaqs_entry_detail.
  $styles['uaqs_entry_detail'] = array(
    'label' => 'Entry detail (360x360)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: uaqs_medium_square.
  $styles['uaqs_medium_square'] = array(
    'label' => 'Medium Square (220x220)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function uaqs_person_node_info() {
  $items = array(
    'uaqs_person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('The UA QuickStart component for the contact information and brief biography of a person.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
