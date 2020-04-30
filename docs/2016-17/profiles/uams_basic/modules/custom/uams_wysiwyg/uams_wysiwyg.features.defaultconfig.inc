<?php
/**
 * @file
 * uams_wysiwyg.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uams_wysiwyg_defaultconfig_features() {
  return array(
    'uams_wysiwyg' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uams_wysiwyg_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uams_wysiwyg_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format uams_filtered_html'.
  $permissions['use text format uams_filtered_html'] = array(
    'name' => 'use text format uams_filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format uams_full_html'.
  $permissions['use text format uams_full_html'] = array(
    'name' => 'use text format uams_full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
