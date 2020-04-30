<?php
/**
 * @file
 * uaqs_navigation.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_navigation_defaultconfig_features() {
  return array(
    'uaqs_navigation' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uaqs_navigation_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any menu_bean bean'.
  $permissions['create any menu_bean bean'] = array(
    'name' => 'create any menu_bean bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any menu_bean bean'.
  $permissions['delete any menu_bean bean'] = array(
    'name' => 'delete any menu_bean bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any menu_bean bean'.
  $permissions['edit any menu_bean bean'] = array(
    'name' => 'edit any menu_bean bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any menu_bean bean'.
  $permissions['view any menu_bean bean'] = array(
    'name' => 'view any menu_bean bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
