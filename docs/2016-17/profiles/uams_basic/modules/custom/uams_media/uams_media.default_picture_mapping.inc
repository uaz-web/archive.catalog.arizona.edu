<?php
/**
 * @file
 * uams_media.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function uams_media_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Full width 12 column';
  $picture_mapping->machine_name = 'full_width_12_column';
  $picture_mapping->breakpoint_group = 'uams_ua_zen';
  $picture_mapping->mapping = array(
    'breakpoints.theme.uams_ua_zen.screen-xs-max' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.uams_ua_zen.screen-sm-min' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.uams_ua_zen.screen-sm-max' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.uams_ua_zen.screen-md-min' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.uams_ua_zen.screen-md-max' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.uams_ua_zen.screen-lg-min' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'full_width_12_column',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['full_width_12_column'] = $picture_mapping;

  return $export;
}
