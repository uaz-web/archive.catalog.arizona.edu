<?php
/**
 * @file
 * uams_wysiwyg.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function uams_wysiwyg_filter_default_formats() {
  $formats = array();

  // Exported format: Basic.
  $formats['uams_filtered_html'] = array(
    'format' => 'uams_filtered_html',
    'name' => 'Basic',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'editor' => 'ckeditor',
    'editor_settings' => 'a:3:{s:7:"toolbar";a:1:{i:0;a:1:{i:0;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:8:{i:0;s:4:"Bold";i:1;s:6:"Italic";i:2;s:9:"Underline";i:3;s:10:"DrupalLink";i:4;s:12:"DrupalUnlink";i:5;s:12:"BulletedList";i:6;s:12:"NumberedList";i:7;s:8:"Maximize";}}}}s:12:"image_upload";a:5:{s:6:"status";i:0;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:1:{s:5:"style";a:1:{s:10:"style_list";a:0:{}}}}',
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<h2> <h3> <h4> <b> <a> <em> <strong> <cite> <blockquote> <hr> <code> <ul> <ol> <li> <dl> <dt> <dd> <div> <span> <p> <br>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: HTML Editor.
  $formats['uams_full_html'] = array(
    'format' => 'uams_full_html',
    'name' => 'HTML Editor',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'editor' => 'ckeditor',
    'editor_settings' => 'a:3:{s:7:"toolbar";a:1:{i:0;a:4:{i:0;a:2:{s:4:"name";s:10:"Formatting";s:5:"items";a:5:{i:0;s:6:"Source";i:1;s:12:"RemoveFormat";i:2;s:13:"PasteFromWord";i:3;s:4:"Bold";i:4;s:6:"Italic";}}i:1;a:2:{s:4:"name";s:5:"Lists";s:5:"items";a:2:{i:0;s:12:"BulletedList";i:1;s:12:"NumberedList";}}i:2;a:2:{s:4:"name";s:5:"Media";s:5:"items";a:1:{i:0;s:10:"Blockquote";}}i:3;a:2:{s:4:"name";s:5:"Tools";s:5:"items";a:8:{i:0;s:8:"Maximize";i:1;s:6:"Styles";i:2;s:10:"DrupalLink";i:3;s:12:"DrupalUnlink";i:4;s:6:"Format";i:5;s:11:"SpecialChar";i:6;s:14:"HorizontalRule";i:7;s:5:"Table";}}}}s:12:"image_upload";a:5:{s:6:"status";i:1;s:6:"scheme";s:6:"public";s:9:"directory";s:13:"inline-images";s:8:"max_size";s:0:"";s:14:"max_dimensions";a:2:{s:5:"width";s:0:"";s:6:"height";s:0:"";}}s:7:"plugins";a:1:{s:5:"style";a:1:{s:10:"style_list";a:1:{i:0;a:3:{s:4:"name";s:13:"Triangle list";s:7:"element";s:2:"ul";s:10:"attributes";a:1:{s:5:"class";s:8:"triangle";}}}}}}',
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
