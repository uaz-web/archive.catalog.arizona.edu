<?php
/**
 * @file
 * uaqs_navigation_global_footer.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_navigation_global_footer_defaultconfig_features() {
  return array(
    'uaqs_navigation_global_footer' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uaqs_navigation_global_footer_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any menu_bean bean'.
  $permissions['view any menu_bean bean'] = array(
    'name' => 'view any menu_bean bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
