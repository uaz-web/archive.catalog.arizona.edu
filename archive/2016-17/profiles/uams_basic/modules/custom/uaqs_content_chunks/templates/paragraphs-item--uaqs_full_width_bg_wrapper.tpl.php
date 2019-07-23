<?php
/**
 * @file
 * Display an UAQS File Download.
 *
 * Available variables:
 * - $content: An associative array of fields ready for rendering
 *   - field_uaqs_download_description: General discription of the file.
 *   - field_uaqs_download_file: Image Actual download link.
 *   - field_uaqs_download_name: A short title for the download.
 *   - filed_uaqs_download_preview: Preview image or file type icon.
 * - $classes: A string containing CSS classes for the download.
 * - $attributes: A string containing HTML attributes for the downloadZ.
 * Inject minimally rendered fields into the template HTML.
 *
 * @see paragraphs-item.tpl.php
 */

?>
<?php if (!empty($content)): ?>
            </article>
        </article>
    </div>
</div>
<div class="background-wrapper bg-triangles-mosaic bg-sky">
  <div class="container">
    <div class="row">
        <?php print render($content); ?>
    </div>
  </div>
</div> <!--Close wrapper-->
<div class="container">
    <div class="row">
        <article class="col-sm-12">
            <article>
<?php endif; ?>