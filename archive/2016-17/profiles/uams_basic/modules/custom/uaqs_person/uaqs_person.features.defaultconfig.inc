<?php
/**
 * @file
 * uaqs_person.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_person_defaultconfig_features() {
  return array(
    'uaqs_person' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uaqs_person_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_uaqs_person';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_uaqs_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_uaqs_person';
  $strongarm->value = '[node:field-uaqs-fname] [node:field-uaqs-lname]';
  $export['auto_entitylabel_pattern_node_uaqs_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_uaqs_person';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_uaqs_person'] = $strongarm;

  return $export;
}
