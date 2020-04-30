<?php
/**
 * @file
 * uaqs_content_chunks.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function uaqs_content_chunks_filter_default_formats() {
  $formats = array();

  // Exported format: UAQS Phrasing Content.
  $formats['uaqs_phrasing_content'] = array(
    'format' => 'uaqs_phrasing_content',
    'name' => 'UAQS Phrasing Content',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <abbr> <area> <audio> <b> <bdi> <bdo> <br> <button> <canvas> <cite> <code> <data> <datalist> <del> <dfn> <em> <embed> <i> <iframe> <img> <input> <ins> <kbd> <keygen> <label> <link> <map> <mark> <math> <meta> <meter> <noscript> <object> <output> <picture> <progress> <q> <ruby> <s> <samp> <script> <select> <small> <span> <strong> <sub> <sup> <svg> <template> <textarea> <time> <u> <var> <video> <wbr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
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

  return $formats;
}
