<?php
/**
 * @file
 * uaqs_block_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function uaqs_block_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_captioned_image';
  $bean_type->label = 'UAQS Captioned Image';
  $bean_type->options = '';
  $bean_type->description = 'An image with caption and photo credit.';
  $export['uaqs_captioned_image'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_card';
  $bean_type->label = 'UAQS Card';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['uaqs_card'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_contact_summary';
  $bean_type->label = 'UAQS Contact Summary';
  $bean_type->options = '';
  $bean_type->description = 'Summary contact information, for example a departmental postal address, generic email address, and main office phone number.';
  $export['uaqs_contact_summary'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_illustrated_blurb';
  $bean_type->label = 'UAQS Illustrated Blurb';
  $bean_type->options = '';
  $bean_type->description = 'A short piece of text associated with an image, heading, and link to more information.';
  $export['uaqs_illustrated_blurb'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_illustrated_link';
  $bean_type->label = 'UAQS Illustrated Link';
  $bean_type->options = '';
  $bean_type->description = 'Extends the normal Link field with a small image.';
  $export['uaqs_illustrated_link'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_mini_blurb';
  $bean_type->label = 'UAQS Mini Blurb';
  $bean_type->options = '';
  $bean_type->description = 'Short text with a heading.';
  $export['uaqs_mini_blurb'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'uaqs_statement';
  $bean_type->label = 'UAQS Statement';
  $bean_type->options = '';
  $bean_type->description = 'Freestanding text with an optional link, for mission statements and similar sections.';
  $export['uaqs_statement'] = $bean_type;

  return $export;
}
