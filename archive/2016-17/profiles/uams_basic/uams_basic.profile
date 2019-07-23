<?php
/**
 * @file
 * Enables modules and site configuration for a UA Sites Basic site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function uams_basic_form_install_configure_form_alter(&$form, &$form_state) {
  // Hide some messages from various modules that are just too chatty!
  drupal_get_messages('status');
  drupal_get_messages('warning');

  // Set a default country and timezone.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Phoenix';

  // Disable JS timezone detection.  It doesn't seem to work reliably for AZ.
  $key = array_search('timezone-detect', $form['server_settings']['date_default_timezone']['#attributes']['class']);
  if ($key !== FALSE) {
    unset($form['server_settings']['date_default_timezone']['#attributes']['class'][$key]);
  }
}
