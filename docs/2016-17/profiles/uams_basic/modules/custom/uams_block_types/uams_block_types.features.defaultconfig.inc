<?php
/**
 * @file
 * uams_block_types.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uams_block_types_defaultconfig_features() {
  return array(
    'uams_block_types' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function uams_block_types_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uams_quick_links bean'.
  $permissions['create any uams_quick_links bean'] = array(
    'name' => 'create any uams_quick_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_captioned_image bean'.
  $permissions['create any uaqs_captioned_image bean'] = array(
    'name' => 'create any uaqs_captioned_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_card bean'.
  $permissions['create any uaqs_card bean'] = array(
    'name' => 'create any uaqs_card bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_contact_summary bean'.
  $permissions['create any uaqs_contact_summary bean'] = array(
    'name' => 'create any uaqs_contact_summary bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_illustrated_blurb bean'.
  $permissions['create any uaqs_illustrated_blurb bean'] = array(
    'name' => 'create any uaqs_illustrated_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_illustrated_link bean'.
  $permissions['create any uaqs_illustrated_link bean'] = array(
    'name' => 'create any uaqs_illustrated_link bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_mini_blurb bean'.
  $permissions['create any uaqs_mini_blurb bean'] = array(
    'name' => 'create any uaqs_mini_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any uaqs_statement bean'.
  $permissions['create any uaqs_statement bean'] = array(
    'name' => 'create any uaqs_statement bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uams_quick_links bean'.
  $permissions['delete any uams_quick_links bean'] = array(
    'name' => 'delete any uams_quick_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_captioned_image bean'.
  $permissions['delete any uaqs_captioned_image bean'] = array(
    'name' => 'delete any uaqs_captioned_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_card bean'.
  $permissions['delete any uaqs_card bean'] = array(
    'name' => 'delete any uaqs_card bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_contact_summary bean'.
  $permissions['delete any uaqs_contact_summary bean'] = array(
    'name' => 'delete any uaqs_contact_summary bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_illustrated_blurb bean'.
  $permissions['delete any uaqs_illustrated_blurb bean'] = array(
    'name' => 'delete any uaqs_illustrated_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_illustrated_link bean'.
  $permissions['delete any uaqs_illustrated_link bean'] = array(
    'name' => 'delete any uaqs_illustrated_link bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_mini_blurb bean'.
  $permissions['delete any uaqs_mini_blurb bean'] = array(
    'name' => 'delete any uaqs_mini_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any uaqs_statement bean'.
  $permissions['delete any uaqs_statement bean'] = array(
    'name' => 'delete any uaqs_statement bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uams_quick_links bean'.
  $permissions['edit any uams_quick_links bean'] = array(
    'name' => 'edit any uams_quick_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_captioned_image bean'.
  $permissions['edit any uaqs_captioned_image bean'] = array(
    'name' => 'edit any uaqs_captioned_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_card bean'.
  $permissions['edit any uaqs_card bean'] = array(
    'name' => 'edit any uaqs_card bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_contact_summary bean'.
  $permissions['edit any uaqs_contact_summary bean'] = array(
    'name' => 'edit any uaqs_contact_summary bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_illustrated_blurb bean'.
  $permissions['edit any uaqs_illustrated_blurb bean'] = array(
    'name' => 'edit any uaqs_illustrated_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_illustrated_link bean'.
  $permissions['edit any uaqs_illustrated_link bean'] = array(
    'name' => 'edit any uaqs_illustrated_link bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_mini_blurb bean'.
  $permissions['edit any uaqs_mini_blurb bean'] = array(
    'name' => 'edit any uaqs_mini_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any uaqs_statement bean'.
  $permissions['edit any uaqs_statement bean'] = array(
    'name' => 'edit any uaqs_statement bean',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uams_quick_links bean'.
  $permissions['view any uams_quick_links bean'] = array(
    'name' => 'view any uams_quick_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_captioned_image bean'.
  $permissions['view any uaqs_captioned_image bean'] = array(
    'name' => 'view any uaqs_captioned_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_card bean'.
  $permissions['view any uaqs_card bean'] = array(
    'name' => 'view any uaqs_card bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_contact_summary bean'.
  $permissions['view any uaqs_contact_summary bean'] = array(
    'name' => 'view any uaqs_contact_summary bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_illustrated_blurb bean'.
  $permissions['view any uaqs_illustrated_blurb bean'] = array(
    'name' => 'view any uaqs_illustrated_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_illustrated_link bean'.
  $permissions['view any uaqs_illustrated_link bean'] = array(
    'name' => 'view any uaqs_illustrated_link bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_mini_blurb bean'.
  $permissions['view any uaqs_mini_blurb bean'] = array(
    'name' => 'view any uaqs_mini_blurb bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any uaqs_statement bean'.
  $permissions['view any uaqs_statement bean'] = array(
    'name' => 'view any uaqs_statement bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'content administrator' => 'content administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
