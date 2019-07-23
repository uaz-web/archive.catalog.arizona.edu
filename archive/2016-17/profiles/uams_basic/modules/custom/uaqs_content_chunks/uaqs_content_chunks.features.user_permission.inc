<?php
/**
 * @file
 * uaqs_content_chunks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uaqs_content_chunks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format uaqs_phrasing_content'.
  $permissions['use text format uaqs_phrasing_content'] = array(
    'name' => 'use text format uaqs_phrasing_content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
