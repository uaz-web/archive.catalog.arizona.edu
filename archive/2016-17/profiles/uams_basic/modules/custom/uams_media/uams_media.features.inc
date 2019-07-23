<?php
/**
 * @file
 * uams_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uams_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
