<?php
/**
 * @file
 * uaqs_content_chunks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uaqs_content_chunks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uaqs_content_chunks_node_info() {
  $items = array(
    'uaqs_flexible_page' => array(
      'name' => t('Flexible Page'),
      'base' => 'node_content',
      'description' => t('The UA QuickStart component for pages containing content chunks (Paragraphs).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function uaqs_content_chunks_paragraphs_info() {
  $items = array(
    'uaqs_card_deck' => array(
      'name' => 'Card deck',
      'bundle' => 'uaqs_card_deck',
      'locked' => '1',
    ),
    'uaqs_column_image' => array(
      'name' => 'Image with caption',
      'bundle' => 'uaqs_column_image',
      'locked' => '1',
    ),
    'uaqs_extra_info' => array(
      'name' => 'Extra info',
      'bundle' => 'uaqs_extra_info',
      'locked' => '1',
    ),
    'uaqs_file_download' => array(
      'name' => 'File attachment',
      'bundle' => 'uaqs_file_download',
      'locked' => '1',
    ),
    'uaqs_full_width_bg_wrapper' => array(
      'name' => 'Full width background wrapper',
      'bundle' => 'uaqs_full_width_bg_wrapper',
      'locked' => '1',
    ),
    'uaqs_headed_text' => array(
      'name' => 'Text with heading',
      'bundle' => 'uaqs_headed_text',
      'locked' => '1',
    ),
    'uaqs_plain_text' => array(
      'name' => 'UAQS Plain Text',
      'bundle' => 'uaqs_plain_text',
      'locked' => '1',
    ),
  );
  return $items;
}
