<?php
/**
 * @file
 * uaqs_event.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_event_defaultconfig_features() {
  return array(
    'uaqs_event' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uaqs_event_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_uaqs_event_pattern';
  $strongarm->value = 'events/[node:nid]-[node:title]';
  $export['pathauto_node_uaqs_event_pattern'] = $strongarm;

  return $export;
}
