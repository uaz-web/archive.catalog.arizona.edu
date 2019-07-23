<?php
/**
 * @file
 * Overrides for theme_field() (the default Field API rendering function).
 *
 * The default rendering of field labels and values places them within nested
 * sets of div elements, which add to the overall complexity of the markup,
 * and make theming more difficult. The overrides for the Field API's default
 * theme_field() function help the UA Zen theme render fields appropriately
 * when they appear in various different custom block types (Beans). Rendering
 * of the complete blocks happens elsewhere: refer to the templates
 * subdirectory for the various .tpl.php files.
 */

/**
 * Returns HTML for a field, concatenating values (helper function).
 *
 * Provides a extremely simplified rendering of a field, concatenating values
 * with neither the value nor the enclosing wrapper elements.
 *
 * @param array $variables
 *   An associative array containing:
 *   - items: The array of field values to render.
 *
 * @return string
 *   The rendered field.
 */
function render_minimal_values(array $variables) {
  $rendered_field = array();
  // Field value: possibly multiple items to concatenate inline.
  $items = array();
  foreach ($variables['items'] as $delta => $item) {
    $items[] = drupal_render($item);
  }
  $rendered_field[] = implode($items);
  return implode($rendered_field);
}

/**
 * Returns HTML for a field, using inline elements (helper function).
 *
 * Provides a simplified rendering of a field, concatenating values without
 * wrapper markup and substituting spans for the divs that theme_field() uses.
 *
 * @param array $variables
 *   An associative array containing:
 *   - label_hidden: TRUE to hide the field label, FALSE to render it.
 *   - label: The field label to render.
 *   - items: The array of field values to render.
 *
 * @return string
 *   The rendered field HTML.
 */
function render_html_inline(array $variables) {
  $item_separator = ', ';
  $rendered_field = array();
  // Field label: do not add if it is hidden.
  if (!$variables['label_hidden']) {
    $rendered_field[] = '<span>' . $variables['label'] . ':&nbsp;</span>';
  }
  // Field value: possibly multiple items to concatenate inline.
  $rendered_field[] = '<span>';
  $items = array();
  foreach ($variables['items'] as $delta => $item) {
    $items[] = drupal_render($item);
  }
  $rendered_field[] = implode($item_separator, $items);
  $rendered_field[] = '</span>';
  return implode($rendered_field);
}

/**
 * UAQS Captioned Image fields.
 */

/**
 * Returns HTML for a uaqs_image_author field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_image_author(array $variables) {
  return render_html_inline($variables);
}

/**
 * Returns HTML for a uaqs_image_caption field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_image_caption(array $variables) {
  return render_html_inline($variables);
}

/**
 * Returns HTML for a uaqs_image_license field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_image_license(array $variables) {
  return render_html_inline($variables);
}

/**
 * Returns HTML for a uaqs_image_title field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_image_title(array $variables) {
  return render_html_inline($variables);
}

/**
 * Returns HTML for a uaqs_isolated_image field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_isolated_image(array $variables) {
  return render_minimal_values($variables);
}

/**
 * UAQS Contact Summary fields.
 */

/**
 * Returns HTML for a uaqs_contact_address field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_contact_address(array $variables) {
  return render_html_inline($variables);
}

/**
 * Returns HTML for a uaqs_contact_mail_link field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_contact_mail_link(array $variables) {
  return render_html_inline($variables);
}

/**
 * Returns HTML for a uaqs_contact_phone field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_contact_phone_link(array $variables) {
  return render_html_inline($variables);
}

/**
 * UAQS Illustrated Blurb fields.
 */

/**
 * Returns HTML for a uaqs_blurb_text field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_blurb_text(array $variables) {
  return render_minimal_values($variables);
}

/**
 * Returns HTML for a uaqs_read_more field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_read_more(array $variables) {
  return render_minimal_values($variables);
}

/**
 * Returns HTML for a uaqs_supporting_image field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_supporting_image(array $variables) {
  return render_minimal_values($variables);
}

/**
 * UAQS Illustrated Link fields.
 */

/**
 * Returns HTML for a uaqs_prettylink_image field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_prettylink_image(array $variables) {
  return render_minimal_values($variables);
}

/**
 * Returns HTML for a uaqs_prettylink_link field.
 *
 * @param array $variables
 *   The usual field associative array for rendering.
 *
 * @return string
 *   The rendered field.
 */
function ua_zen_field__field_uaqs_prettylink_link(array $variables) {
  return render_minimal_values($variables);
}
