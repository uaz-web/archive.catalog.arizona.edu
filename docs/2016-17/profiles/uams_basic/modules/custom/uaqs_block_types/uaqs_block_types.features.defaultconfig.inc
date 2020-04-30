<?php
/**
 * @file
 * uaqs_block_types.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_block_types_defaultconfig_features() {
  return array(
    'uaqs_block_types' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uaqs_block_types_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any uaqs_captioned_image bean'.
  $permissions['view any uaqs_captioned_image bean'] = array(
    'name' => 'view any uaqs_captioned_image bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_card bean'.
  $permissions['view any uaqs_card bean'] = array(
    'name' => 'view any uaqs_card bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_contact_summary bean'.
  $permissions['view any uaqs_contact_summary bean'] = array(
    'name' => 'view any uaqs_contact_summary bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_illustrated_blurb bean'.
  $permissions['view any uaqs_illustrated_blurb bean'] = array(
    'name' => 'view any uaqs_illustrated_blurb bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_illustrated_link bean'.
  $permissions['view any uaqs_illustrated_link bean'] = array(
    'name' => 'view any uaqs_illustrated_link bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_mini_blurb bean'.
  $permissions['view any uaqs_mini_blurb bean'] = array(
    'name' => 'view any uaqs_mini_blurb bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_statement bean'.
  $permissions['view any uaqs_statement bean'] = array(
    'name' => 'view any uaqs_statement bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
