<?php
/**
 * @file
 * uaqs_news.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_news_defaultconfig_features() {
  return array(
    'uaqs_news' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uaqs_news_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_uaqs_news_pattern';
  $strongarm->value = 'news/[node:field-uaqs-published:custom:Y]/[node:field-uaqs-published:custom:m]/[node:title]';
  $export['pathauto_node_uaqs_news_pattern'] = $strongarm;

  return $export;
}
