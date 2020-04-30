<?php
/**
 * @file
 * uaqs_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uaqs_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function uaqs_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uaqs_news_image_default_styles() {
  $styles = array();

  // Exported image style: uaqs_news_detail_500.
  $styles['uaqs_news_detail_500'] = array(
    'label' => 'News detail 500',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 500,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: uaqs_spotlight.
  $styles['uaqs_spotlight'] = array(
    'label' => 'Spotlight',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 365,
          'height' => 196,
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
function uaqs_news_node_info() {
  $items = array(
    'uaqs_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('The UA QuickStart component for news. Use to add short articles about topics of current interest.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
