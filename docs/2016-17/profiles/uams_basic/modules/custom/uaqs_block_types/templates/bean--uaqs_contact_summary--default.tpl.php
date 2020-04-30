<?php
/**
 * @file
 * Display simplified UAQS Contact Summary content.
 *
 * Available variables:
 * - $content: An associative array of fields ready for rendering, with the
 *   field names as keys and the render arrays as values (the generated HTML
 *   includes all the fields in the original order).
 * - $classes: A string containing CSS classes for the outer wrapper.
 * - $attributes: A string containing HTML attributes for the outer wrapper.
 * - $content_attributes: A string containing HTML attributes for the inner
 *   wrapper.
 * Rather than rendering everything at once, this saves the individual field
 * renderings and concatenates them with a separator (which works in the case
 * of inline rendered values).
 *
 * @see bean.tpl.php
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <p class="content"<?php print $content_attributes; ?>>
    <?php
      $renderings = array();
      foreach ($content as $fieldname => $field_render):
        $renderings[] = render($field_render);
      endforeach;
      print implode(' | ', $renderings);
    ?>
  </p>
</div>
