<?php
/**
 * @file
 * uams_news_feeds.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function uams_news_feeds_defaultconfig_features() {
  return array(
    'uams_news_feeds' => array(
      'feeds_importer_default' => 'feeds_importer_default',
      'feeds_tamper_default' => 'feeds_tamper_default',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_feeds_importer_default().
 */
function uams_news_feeds_defaultconfig_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'uams_news';
  $feeds_importer->config = array(
    'name' => 'UAMS News',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$..node',
        'sources' => array(
          'jsonpath_parser:0' => 'title',
          'jsonpath_parser:1' => '',
          'jsonpath_parser:2' => 'path',
          'jsonpath_parser:3' => 'image-homepage-news.alt',
          'jsonpath_parser:4' => 'image-homepage-news.alt',
          'jsonpath_parser:5' => 'image-homepage-news.src',
          'jsonpath_parser:6' => 'summary',
          'jsonpath_parser:7' => 'date-of-publication',
          'jsonpath_parser:8' => 'nid',
          'jsonpath_parser:9' => 'date-of-publication',
          'jsonpath_parser:10' => 'title',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:2' => 0,
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
          ),
        ),
        'allow_override' => 0,
        'convert_four_byte' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '0',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_uaqs_link:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_uaqs_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_uaqs_photo:alt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_uaqs_photo:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_uaqs_photo:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_uaqs_summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_uaqs_published:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_uaqs_short_title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Blank source 1',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'uams_full_html',
        'skip_hash_check' => 0,
        'bundle' => 'uaqs_news',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['uams_news'] = $feeds_importer;

  return $export;
}

/**
 * Implements hook_defaultconfig_feeds_tamper_default().
 */
function uams_news_feeds_defaultconfig_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'uams_news-blank_source_1-default_value';
  $feeds_tamper->importer = 'uams_news';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'uams_feeds',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set author as uams_feeds';
  $export['uams_news-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'uams_news-jsonpath_parser_1-default_value';
  $feeds_tamper->importer = 'uams_news';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Read more at UANews.org',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Make the link text more descriptive';
  $export['uams_news-jsonpath_parser_1-default_value'] = $feeds_tamper;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function uams_news_feeds_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'uams_news-jsonpath_parser_1-default_value' => FALSE,
    'uams_news-jsonpath_parser_7-timetodate' => FALSE,
    'uams_news-blank_source_1-default_value' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  return $export;
}
