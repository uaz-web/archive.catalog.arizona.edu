<?php
/**
 * @file
 * uaqs_publication.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_publication_defaultconfig_features() {
  return array(
    'uaqs_publication' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uaqs_publication_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_uaqs_pub_pattern';
  $strongarm->value = 'publication/[node:title]';
  $export['pathauto_node_uaqs_pub_pattern'] = $strongarm;

  return $export;
}
