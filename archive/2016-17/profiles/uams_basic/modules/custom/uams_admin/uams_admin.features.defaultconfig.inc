<?php
/**
 * @file
 * uams_admin.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uams_admin_defaultconfig_features() {
  return array(
    'uams_admin' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uams_admin_defaultconfig_strongarm() {
  $export = array();

  // $strongarm = new stdClass();
  // $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  // $strongarm->api_version = 1;
  // $strongarm->name = 'admin_select_defaults';
  // $strongarm->value = array(
  //   2 => array(
  //     'admin_select_default' => '',
  //     'weight' => '0',
  //   ),
  //   5 => array(
  //     'admin_select_default' => 'navbar',
  //     'weight' => '1',
  //   ),
  //   4 => array(
  //     'admin_select_default' => 'navbar',
  //     'weight' => '2',
  //   ),
  //   3 => array(
  //     'admin_select_default' => 'navbar',
  //     'weight' => '3',
  //   ),
  // );
  // $export['admin_select_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'ember';
  $export['admin_theme'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uams_admin_defaultconfig_user_default_permissions() {
  $permissions = array();

  // // Exported permission: 'access administration menu'.
  // $permissions['access administration menu'] = array(
  //   'name' => 'access administration menu',
  //   'roles' => array(
  //     'administrator' => 'administrator',
  //   ),
  //   'module' => 'admin_menu',
  // );

  // Exported permission: 'access coffee'.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'navbar',
  );

  // // Exported permission: 'select administration menu'.
  // $permissions['select administration menu'] = array(
  //   'name' => 'select administration menu',
  //   'roles' => array(
  //     'administrator' => 'administrator',
  //   ),
  //   'module' => 'admin_select',
  // );

  return $permissions;
}
