<?php

include_once dirname(__FILE__) . '/includes/common.inc';

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function ua_zen_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL) {
  $theme = !empty($form_state['build_info']['args'][0]) ? $form_state['build_info']['args'][0] : FALSE;
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id) || $theme === FALSE) {
    return;
  }

  // Display a warning if jQuery Update isn't enabled or using a lower version.
  if (!theme_get_setting('ua_bootstrap_toggle_jquery_error')) {
    $jquery_version = FALSE;
    if (module_exists('jquery_update')) {
      // Get theme specific jQuery version.
      $jquery_version = theme_get_setting('jquery_update_jquery_version', $theme);

      // Get site wide jQuery version if theme specific one is not set.
      if (!$jquery_version) {
        $jquery_version = variable_get('jquery_update_jquery_version', '1.10');
      }
    }

    // Ensure the jQuery version is >= 1.9.
    if (!$jquery_version || !version_compare($jquery_version, '1.9', '>=')) {
      drupal_set_message(t('UA Zen requires a minimum jQuery version of 1.9 or higher. Please enable the <a href="!jquery_update_project_url">jQuery Update</a> module. If you are seeing this message, then you must enable and <a href="!jquery_update_configure">configure</a> jQuery Update or optionally <a href="!suppress_jquery_error">suppress this message</a> instead.', array(
        '!jquery_update_project_url' => 'https://www.drupal.org/project/jquery_update',
        '!jquery_update_configure' => url('admin/config/development/jquery_update'),
        '!suppress_jquery_error' => url('admin/appearance/settings/' . $theme, array(
          'fragment' => 'edit-ua-bootstrap-toggle-jquery-error',
        )),
      )), 'error', FALSE);
    }
  }

  //
  // UA Bootstrap settings.
  //
  $form['ua_settings']['ua_bootstrap'] = array(
    '#type' => 'fieldset',
    '#title' => t('UA Bootstrap Settings'),
  );
  $form['ua_settings']['ua_bootstrap']['ua_bootstrap_source'] = array(
    '#type' => 'radios',
    '#title' => t('UA Bootstrap Source'),
    '#options' => array(
      'local' => t('Use local copy of UA Bootstrap packaged with UA Zen <em>(!stableversion)</em>', array('!stableversion' => UA_ZEN_UA_BOOTSTRAP_STABLE_VERSION)),
      'cdn' => t('Use external copy of UA Bootstrap hosted on the UA Bootstrap CDN'),
    ),
    '#default_value' => theme_get_setting('ua_bootstrap_source'),
    '#prefix' =>  t('UA Zen requires the !uabootstrap front-end framework.  UA Bootstrap can either be loaded from the local copy packaged with UA Zen or from the !uabootstrapcdn. !warning', array(
      '!uabootstrap' => l(t('UA Bootstrap'), 'http://uadigital.arizona.edu/ua-bootstrap', array(
        'external' => TRUE,
      )),
      '!uabootstrapcdn' => l(t('UA Bootstrap CDN'), 'https://bitbucket.org/uadigital/ua-bootstrap/downloads', array(
        'external' => TRUE,
      )),
      '!warning' => '<div class="alert alert-info messages info"><strong>' . t('NOTE') . ':</strong> ' . t('While the UA Bootstrap CDN is the preferred method for providing huge performance gains in load time, this method does depend on using this third party service (BitBucket). Bitbucket is under no obligation or commitment to provide guaranteed up-time or service quality for this theme.') . '</div>',
    )),
  );
  $form['ua_settings']['ua_bootstrap']['ua_bootstrap_cdn'] = array(
    '#type' => 'fieldset',
    '#title' => t('UA Bootstrap CDN Settings'),
    '#states' => array(
      'visible' => array(
        ':input[name="ua_bootstrap_source"]' => array('value' => 'cdn'),
      )
    ),
  );
  $form['ua_settings']['ua_bootstrap']['ua_bootstrap_cdn']['ua_bootstrap_cdn_version'] = array(
    '#type' => 'radios',
    '#title' => t('UA Bootstrap CDN version'),
    '#options' => array(
      'stable' => t('Stable version: <em>!stableversion</em> (Recommended)', array('!stableversion' => UA_ZEN_UA_BOOTSTRAP_STABLE_VERSION)),
      'latest' => t('Latest dev version'),
    ),
    '#default_value' => theme_get_setting('ua_bootstrap_cdn_version'),
  );
  $form['ua_settings']['ua_bootstrap']['ua_bootstrap_minified'] = array(
    '#default_value' => theme_get_setting('ua_bootstrap_minified'),
    '#type'          => 'checkbox',
    '#title'         => t('Use minified version of UA Bootstrap.'),
    '#default_value' => theme_get_setting('ua_bootstrap_minified'),
  );

  // Suppress jQuery message.
  $form['ua_settings']['ua_bootstrap']['ua_bootstrap_toggle_jquery_error'] = array(
    '#type' => 'checkbox',
    '#title' => t('Suppress jQuery version error message.'),
    '#default_value' => theme_get_setting('ua_bootstrap_toggle_jquery_error'),
    '#description' => t('Enable this if the version of jQuery has been upgraded to 1.9+ using a method other than the !jquery_update module.', array(
      '!jquery_update' => l(t('jQuery Update'), 'https://drupal.org/project/jquery_update'),
    )),
  );
  // Tables.
  $form['ua_settings']['tables'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tables'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['ua_settings']['tables']['ua_zen_table_bordered'] = array(
    '#type' => 'checkbox',
    '#title' => t('Bordered table'),
    '#default_value' => theme_get_setting('ua_zen_table_bordered', $theme),
    '#description' => t('Add borders on all sides of the table and cells.'),
  );
  $form['ua_settings']['tables']['ua_zen_table_condensed'] = array(
    '#type' => 'checkbox',
    '#title' => t('Condensed table'),
    '#default_value' => theme_get_setting('ua_zen_table_condensed', $theme),
    '#description' => t('Make tables more compact by cutting cell padding in half.'),
  );
  $form['ua_settings']['tables']['ua_zen_table_hover'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hover rows'),
    '#default_value' => theme_get_setting('ua_zen_table_hover', $theme),
    '#description' => t('Enable a hover state on table rows.'),
  );
  $form['ua_settings']['tables']['ua_zen_table_striped'] = array(
    '#type' => 'checkbox',
    '#title' => t('Striped rows'),
    '#default_value' => theme_get_setting('ua_zen_table_striped', $theme),
    '#description' => t('Add zebra-striping to any table row within the <code>&lt;tbody&gt;</code>. <strong>Note:</strong> Striped tables are styled via the <code>:nth-child</code> CSS selector, which is not available in Internet Explorer 8.'),
  );
  $form['ua_settings']['tables']['ua_zen_table_responsive'] = array(
    '#type' => 'checkbox',
    '#title' => t('Responsive tables'),
    '#default_value' => theme_get_setting('ua_zen_table_responsive', $theme),
    '#description' => t('Makes tables responsive by wrapping them in <code>.table-responsive</code> to make them scroll horizontally up to small devices (under 768px). When viewing on anything larger than 768px wide, you will not see any difference in these tables.'),
  );
  //
  // Breadcrumb settings.
  //
  $form['breadcrumb']['breadcrumb_options']['zen_breadcrumb_separator'] = array(
    '#access'        => FALSE
  );
  $form['breadcrumb']['breadcrumb_options']['zen_breadcrumb_trailing'] = array(
    '#access'        => FALSE
  );

  // Pager
  $form['pager'] = array(
    '#type' => 'fieldset',
    '#title' => t('Pagination'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );

  $form['pager']['ua_zen_pager_first_and_last'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show "First" and "Last" links in the pager'),
    '#description' => t('Allow user to choose whether to display "First" and "Last" links on pagers.'),
    '#default_value' => theme_get_setting('ua_zen_pager_first_and_last'),
  );


  // Add secondary logo upload field to theme settings. Code source: mjharmon's
  // research on Drupal core & his own knowledge of Drupal internals and
  // development doctrine this approach sidesteps the need to mark the file as
  // permanent - which the earlier technique did require because it never
  // copied the file from PHP's temporary holding space. This technique also
  // gives the field a "stock" feel to the user, rather than the bolt on feel
  // the prior solution created.
  $form['logo']['settings']['footer_logo_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Path to custom footer logo'),
    '#description' => t('The path to the file you would like to use as your footer logo file instead of the logo in the header.'),
    '#default_value' => theme_get_setting('footer_logo_path'),
  );

  $form['logo']['settings']['footer_logo_upload'] = array(
    '#type' => 'file',
    '#title' => t('Upload footer logo image'),
    '#maxlength' => 40,
    '#description' => t("If you don't have direct file access to the server, use this field to upload your footer logo."),
  );

  $form['ua_settings']['settings']['ua_copyright_notice'] = array(
    '#type' => 'textfield',
    '#title' => t('Copyright notice'),
    '#description' => t('A copyright notice for this site. The value here will appear after a "Copyright YYYY" notice (where YYYY is the current year).'),
    '#default_value' => theme_get_setting('ua_copyright_notice'),
  );

  $form['ua_settings']['settings']['ua_zen_hide_front_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide title of front page node'),
    '#description' => t('If this is checked, the title of the node being displayed on the front page will not be visible'),
    '#default_value' => theme_get_setting('ua_zen_hide_front_title'),
  );

  $form['#validate'][] = 'ua_zen_settings_form_validate';
  $form['#submit'][] = 'ua_zen_settings_form_submit';

  // We are editing the $form in place, so we don't need to return anything.
}

/**
 * Custom validation handler for theme settings form.
 */
function ua_zen_settings_form_validate($form, &$form_state) {
  // Validate the incoming file appropriately.
  $ary_validators = array('file_validate_is_image' => array(), 'file_validate_extensions' => array('png gif jpg jpeg'));
  $str_path = "";
  // Check for a new uploaded logo.
  $obj_file = file_save_upload('footer_logo_upload', $ary_validators);

  if (isset($obj_file)) {
    // File upload was attempted.
    if ($obj_file) {
      // Put the temporary file in form_values so we can save it on submit.
      $form_state['values']['footer_logo_upload'] = $obj_file;
    }
    else {
      // File upload failed.
      form_set_error('footer_logo_upload', t('The footer logo could not be uploaded.'));
    }
  }

  if (!empty($form_state['values']['footer_logo_path'])) {
    $str_path = _system_theme_settings_validate_path($form_state['values']['footer_logo_path']);
    if (!$str_path) {
      form_set_error('footer_logo_path', t('The custom logo path is invalid.'));
    }
  }
}

/**
 * Custom submit handler for theme settings form.
 */
function ua_zen_settings_form_submit($form, &$form_state) {
  $ary_values = $form_state['values'];
  $str_filename = "";

  // If the user uploaded a new logo, save it to a permanent location.
  if (!empty($ary_values['footer_logo_upload'])) {
    $obj_file = $ary_values['footer_logo_upload'];
    unset($form_state['values']['footer_logo_upload']);
    $str_filename = file_unmanaged_copy($obj_file->uri, NULL, FILE_EXISTS_REPLACE);
    $ary_values['footer_logo_path'] = $str_filename;
  }

  // If the path as been entered (either automatically or directly) check that
  // it exists. Only store it if does.
  if (!empty($ary_values['footer_logo_path'])) {
    $str_filename = _system_theme_settings_validate_path($ary_values['footer_logo_path']);
    if ($str_filename === FALSE) {
      $form_state['values']['footer_logo_path'] = "";
    }
    else {
      $form_state['values']['footer_logo_path'] = $str_filename;
    }
  }
}
