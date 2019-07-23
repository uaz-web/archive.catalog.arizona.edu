<?php
/**
 * @file
 * uams_media_paragraphs_item.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function uams_media_paragraphs_item_paragraphs_info() {
  $items = array(
    'uams_media' => array(
      'name' => 'Media',
      'bundle' => 'uams_media',
      'locked' => '1',
    ),
  );
  return $items;
}
