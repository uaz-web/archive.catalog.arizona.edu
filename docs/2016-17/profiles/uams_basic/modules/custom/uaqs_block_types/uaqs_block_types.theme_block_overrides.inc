<?php
/**
 * @file
 * Overrides for template_preprocess_entity().
 *
 * Manipulate the variables for the block type before rendering.
 */

/**
 * Insert variables into the UAQS Captioned Image template.
 *
 * @param array &$variables
 *   An array of variables to pass to the theme template.
 * @param string $hook
 *   The hook name (generally the block type name).
 */
function ua_zen_preprocess_entity_bean_uaqs_captioned_image(array &$variables, $hook) {
  $have_author = !empty($variables['content']['field_uaqs_image_author']);
  $have_caption = !empty($variables['content']['field_uaqs_image_caption']);
  $have_license = !empty($variables['content']['field_uaqs_image_license']);
  $have_title = !empty($variables['content']['field_uaqs_image_title']);
  $have_image = !empty($variables['content']['field_uaqs_isolated_image']);

  $have_attribution = ($have_author || $have_license || $have_title);
  $variables['content']['have_attribution'] = $have_attribution;
  $have_figcaption = ($have_caption || $have_attribution);
  $variables['content']['have_figcaption'] = $have_figcaption;
}

/**
 * Insert variables into the UAQS Statement template.
 *
 * @param array &$variables
 *   An array of variables to pass to the theme template.
 * @param string $hook
 *   The hook name (generally the block type name).
 */
function ua_zen_preprocess_entity_bean_uaqs_statement(array &$variables, $hook) {
  $have_link = !empty($variables['content']['field_uaqs_read_more']);
  $variables['content']['have_link'] = $have_link;
}
