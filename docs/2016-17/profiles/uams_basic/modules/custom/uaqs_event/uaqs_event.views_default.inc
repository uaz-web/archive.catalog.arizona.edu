<?php
/**
 * @file
 * uaqs_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uaqs_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'uaqs_events';
  $view->description = 'Lists of events made with the UAQS Event content type.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UAQS Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'uaqs-event-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_uaqs_date']['id'] = 'field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date']['table'] = 'field_data_field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date']['field'] = 'field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_uaqs_date']['element_wrapper_class'] = 'uaqs-event-date';
  $handler->display->display_options['fields']['field_uaqs_date']['settings'] = array(
    'format_type' => 'event_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_uaqs_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'uaqs-event-title';
  /* Sort criterion: Content: Event Date -  start date (field_uaqs_date) */
  $handler->display->display_options['sorts']['field_uaqs_date_value']['id'] = 'field_uaqs_date_value';
  $handler->display->display_options['sorts']['field_uaqs_date_value']['table'] = 'field_data_field_uaqs_date';
  $handler->display->display_options['sorts']['field_uaqs_date_value']['field'] = 'field_uaqs_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'uaqs_event' => 'uaqs_event',
  );

  /* Display: Full Calendar */
  $handler = $view->new_display('page', 'Full Calendar', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'uaqs-event-calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>There are no events listed for this time span.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date: month */
  $handler->display->display_options['fields']['field_uaqs_date']['id'] = 'field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date']['table'] = 'field_data_field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date']['field'] = 'field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date']['ui_name'] = 'Date: month';
  $handler->display->display_options['fields']['field_uaqs_date']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_uaqs_date']['element_wrapper_class'] = 'uaqs-event-date';
  $handler->display->display_options['fields']['field_uaqs_date']['settings'] = array(
    'format_type' => 'abbr_month_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_uaqs_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date']['delta_offset'] = '0';
  /* Field: Date: day */
  $handler->display->display_options['fields']['field_uaqs_date_1']['id'] = 'field_uaqs_date_1';
  $handler->display->display_options['fields']['field_uaqs_date_1']['table'] = 'field_data_field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date_1']['field'] = 'field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date_1']['ui_name'] = 'Date: day';
  $handler->display->display_options['fields']['field_uaqs_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date_1']['settings'] = array(
    'format_type' => 'day_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_uaqs_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date_1']['delta_offset'] = '0';
  /* Field: Date: time */
  $handler->display->display_options['fields']['field_uaqs_date_2']['id'] = 'field_uaqs_date_2';
  $handler->display->display_options['fields']['field_uaqs_date_2']['table'] = 'field_data_field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date_2']['field'] = 'field_uaqs_date';
  $handler->display->display_options['fields']['field_uaqs_date_2']['ui_name'] = 'Date: time';
  $handler->display->display_options['fields']['field_uaqs_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date_2']['settings'] = array(
    'format_type' => 'time_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_uaqs_date_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_date_2']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'uaqs-event-title';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_uaqs_summary']['id'] = 'field_uaqs_summary';
  $handler->display->display_options['fields']['field_uaqs_summary']['table'] = 'field_data_field_uaqs_summary';
  $handler->display->display_options['fields']['field_uaqs_summary']['field'] = 'field_uaqs_summary';
  $handler->display->display_options['fields']['field_uaqs_summary']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_summary']['element_label_colon'] = FALSE;
  /* Field: Global text: left group */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Global text: left group';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_uaqs_date]
[field_uaqs_date_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'uaqs-event-left-group';
  /* Field: Global text: right group */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Global text: right group';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3>[title]</h3>
[field_uaqs_date_2]
[field_uaqs_summary]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'uaqs-event-right-group';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_uaqs_date.field_uaqs_date_value' => 'field_data_field_uaqs_date.field_uaqs_date_value',
  );
  $handler->display->display_options['path'] = 'calendar';

  /* Display: Event Block */
  $handler = $view->new_display('block', 'Event Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'uaqs-event-block-list';
  $handler->display->display_options['display_description'] = 'Use in sidebar or narrow display area';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Full Calendar »';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $export['uaqs_events'] = $view;

  return $export;
}
