<?php
/**
 * @file
 * uaqs_flexible_block.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uaqs_flexible_block_defaultconfig_features() {
  return array(
    'uaqs_flexible_block' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uaqs_flexible_block_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__uaqs_flexible_block';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'uaqs_card_overlay' => array(
        'custom_settings' => FALSE,
      ),
      'uaqs_expanded' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_bean__uaqs_flexible_block'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uaqs_flexible_block_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any uaqs_flexible_block bean'.
  $permissions['create any uaqs_flexible_block bean'] = array(
    'name' => 'create any uaqs_flexible_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_flexible_block bean'.
  $permissions['delete any uaqs_flexible_block bean'] = array(
    'name' => 'delete any uaqs_flexible_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_flexible_block bean'.
  $permissions['edit any uaqs_flexible_block bean'] = array(
    'name' => 'edit any uaqs_flexible_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_flexible_block bean'.
  $permissions['view any uaqs_flexible_block bean'] = array(
    'name' => 'view any uaqs_flexible_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
