<?php
/**
 * @file
 * uaqs_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uaqs_person_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'uaqs_person_directory';
  $view->description = 'Branded displays of the UAQS Person content type';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UAQS Person Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory';
  $handler->display->display_options['css_class'] = 'uaqs-person-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'uaqs-person-row';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'uaqs_card';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_uaqs_photo']['id'] = 'field_uaqs_photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['table'] = 'field_data_field_uaqs_photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['field'] = 'field_uaqs_photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_photo']['element_wrapper_class'] = 'uaqs-person-photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_uaqs_photo']['settings'] = array(
    'image_style' => 'uaqs_medium_square',
    'image_link' => 'content',
  );
  /* Field: Content: Full Name (node title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Full Name (node title)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'uaqs-person-name';
  /* Field: Content: Job Title(s) */
  $handler->display->display_options['fields']['field_uaqs_titles']['id'] = 'field_uaqs_titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['table'] = 'field_data_field_uaqs_titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['field'] = 'field_uaqs_titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_titles']['element_wrapper_class'] = 'uaqs-person-job-titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uaqs_titles']['multi_type'] = 'ul';
  /* Field: Content: Phone Number(s) */
  $handler->display->display_options['fields']['field_uaqs_phones']['id'] = 'field_uaqs_phones';
  $handler->display->display_options['fields']['field_uaqs_phones']['table'] = 'field_data_field_uaqs_phones';
  $handler->display->display_options['fields']['field_uaqs_phones']['field'] = 'field_uaqs_phones';
  $handler->display->display_options['fields']['field_uaqs_phones']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_phones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_phones']['element_wrapper_class'] = 'uaqs-person-phone';
  $handler->display->display_options['fields']['field_uaqs_phones']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_uaqs_phones']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uaqs_phones']['multi_type'] = 'ul';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_uaqs_email']['id'] = 'field_uaqs_email';
  $handler->display->display_options['fields']['field_uaqs_email']['table'] = 'field_data_field_uaqs_email';
  $handler->display->display_options['fields']['field_uaqs_email']['field'] = 'field_uaqs_email';
  $handler->display->display_options['fields']['field_uaqs_email']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_email']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_uaqs_photo' => 0,
    'title' => 0,
    'field_uaqs_titles' => 0,
    'field_uaqs_phones' => 0,
  );
  /* Sort criterion: Content: Last Name (field_uaqs_lname) */
  $handler->display->display_options['sorts']['field_uaqs_lname_value']['id'] = 'field_uaqs_lname_value';
  $handler->display->display_options['sorts']['field_uaqs_lname_value']['table'] = 'field_data_field_uaqs_lname';
  $handler->display->display_options['sorts']['field_uaqs_lname_value']['field'] = 'field_uaqs_lname_value';
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
    'uaqs_person' => 'uaqs_person',
  );

  /* Display: Grid Page */
  $handler = $view->new_display('page', 'Grid Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'uaqs-person-grid';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'uaqs_card';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'people';

  /* Display: Row Page */
  $handler = $view->new_display('page', 'Row Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'uaqs-person-row';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Photo */
  $handler->display->display_options['fields']['field_uaqs_photo']['id'] = 'field_uaqs_photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['table'] = 'field_data_field_uaqs_photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['field'] = 'field_uaqs_photo';
  $handler->display->display_options['fields']['field_uaqs_photo']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_photo']['element_wrapper_class'] = 'uaqs-person-photo col-sm-3';
  $handler->display->display_options['fields']['field_uaqs_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_uaqs_photo']['settings'] = array(
    'image_style' => 'uaqs_medium_square',
    'image_link' => 'content',
  );
  /* Field: Content: Full Name (node title) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Full Name (node title)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'uaqs-person-name';
  /* Field: Content: Job Title(s) */
  $handler->display->display_options['fields']['field_uaqs_titles']['id'] = 'field_uaqs_titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['table'] = 'field_data_field_uaqs_titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['field'] = 'field_uaqs_titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_titles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_titles']['element_wrapper_class'] = 'uaqs-person-job-titles';
  $handler->display->display_options['fields']['field_uaqs_titles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uaqs_titles']['multi_type'] = 'ul';
  /* Field: Content: Phone Number(s) */
  $handler->display->display_options['fields']['field_uaqs_phones']['id'] = 'field_uaqs_phones';
  $handler->display->display_options['fields']['field_uaqs_phones']['table'] = 'field_data_field_uaqs_phones';
  $handler->display->display_options['fields']['field_uaqs_phones']['field'] = 'field_uaqs_phones';
  $handler->display->display_options['fields']['field_uaqs_phones']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_phones']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_phones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_phones']['element_wrapper_class'] = 'uaqs-person-phone';
  $handler->display->display_options['fields']['field_uaqs_phones']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_uaqs_phones']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_uaqs_phones']['multi_type'] = 'ul';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_uaqs_email']['id'] = 'field_uaqs_email';
  $handler->display->display_options['fields']['field_uaqs_email']['table'] = 'field_data_field_uaqs_email';
  $handler->display->display_options['fields']['field_uaqs_email']['field'] = 'field_uaqs_email';
  $handler->display->display_options['fields']['field_uaqs_email']['label'] = '';
  $handler->display->display_options['fields']['field_uaqs_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uaqs_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uaqs_email']['element_wrapper_class'] = 'uaqs-person-email';
  /* Field: Custom text: Name and titles */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom text: Name and titles';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3 class="uaqs-person-name">[title]</h3>
<div class="uaqs-person-job-titles">[field_uaqs_titles]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'uaqs-person-col col-sm-5';
  /* Field: Custom text: Contact info */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text: Contact info';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="uaqs-person-phone">[field_uaqs_phones]</div>
<div class="uaqs-person-email">[field_uaqs_email]</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'uaqs-person-col col-sm-4';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'field_uaqs_photo' => 0,
    'title' => 0,
    'field_uaqs_titles' => 0,
    'field_uaqs_phones' => 0,
  );
  $handler->display->display_options['path'] = 'people-list';
  $export['uaqs_person_directory'] = $view;

  return $export;
}
