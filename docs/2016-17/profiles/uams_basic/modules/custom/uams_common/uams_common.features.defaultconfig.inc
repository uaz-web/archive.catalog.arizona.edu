<?php
/**
 * @file
 * uams_common.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uams_common_defaultconfig_features() {
  return array(
    'uams_common' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uams_common_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fences_default_classes';
  $strongarm->value = 1;
  $export['fences_default_classes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fences_default_markup';
  $strongarm->value = 1;
  $export['fences_default_markup'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uams_common_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'assign content administrator role'.
  $permissions['assign content administrator role'] = array(
    'name' => 'assign content administrator role',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign content editor role'.
  $permissions['assign content editor role'] = array(
    'name' => 'assign content editor role',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'role_delegation',
  );

  return $permissions;
}
