<?php
/**
 * @file
 * b_wet_general.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function b_wet_general_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'grantee_survey';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'grantee_survey';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'grantee_survey';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'grantee_survey' => 'grantee_survey',
  );

  /* Display: Grantee Survey Results */
  $handler = $view->new_display('page', 'Grantee Survey Results', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external gr */
  $handler->display->display_options['fields']['field_develop_proposal']['id'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['table'] = 'field_data_field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['field'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['separator'] = ',';
  /* Field: Content: Implementing your organization's most recent B-WET-funded grant  */
  $handler->display->display_options['fields']['field_implementing_grant']['id'] = 'field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['table'] = 'field_data_field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['field'] = 'field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['separator'] = ', ';
  $handler->display->display_options['fields']['field_implementing_grant']['format_plural'] = 0;
  /* Field: Content: Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external gr */
  $handler->display->display_options['fields']['field_develop_proposal_1']['id'] = 'field_develop_proposal_1';
  $handler->display->display_options['fields']['field_develop_proposal_1']['table'] = 'field_data_field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal_1']['field'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal_1']['separator'] = ', ';
  $handler->display->display_options['fields']['field_develop_proposal_1']['format_plural'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['path'] = 'grantee-survey';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Test Results */
  $handler = $view->new_display('page', 'Test Results', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_develop_proposal' => 'field_develop_proposal',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_develop_proposal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external gr */
  $handler->display->display_options['fields']['field_develop_proposal']['id'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['table'] = 'field_data_field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['field'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['element_class'] = 'number';
  $handler->display->display_options['fields']['field_develop_proposal']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_develop_proposal']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_develop_proposal']['field_api_classes'] = 0;
  /* Field: Content: Implementing your organization's most recent B-WET-funded grant  */
  $handler->display->display_options['fields']['field_implementing_grant']['id'] = 'field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['table'] = 'field_data_field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['field'] = 'field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['element_class'] = 'number';
  $handler->display->display_options['fields']['field_implementing_grant']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_implementing_grant']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_implementing_grant']['field_api_classes'] = 0;
  /* Field: Content: Evaluating your organization's most recent B-WET-funded grant (on your own or through collaborating with an external evaluation  */
  $handler->display->display_options['fields']['field_evaluating_grant']['id'] = 'field_evaluating_grant';
  $handler->display->display_options['fields']['field_evaluating_grant']['table'] = 'field_data_field_evaluating_grant';
  $handler->display->display_options['fields']['field_evaluating_grant']['field'] = 'field_evaluating_grant';
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['element_class'] = 'number five';
  $handler->display->display_options['fields']['field_evaluating_grant']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_evaluating_grant']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_evaluating_grant']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_evaluating_grant']['field_api_classes'] = 0;
  /* Field: Content: In what zip code is your organization located? */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_zipcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_zipcode']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['element_class'] = 'text';
  $handler->display->display_options['fields']['field_zipcode']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_zipcode']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_zipcode']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_zipcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_zipcode']['field_api_classes'] = 0;
  /* Field: Content: In which region(s) were your organization's MWEEs offered this past grant year? */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_region']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_region']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_region']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_region']['element_class'] = 'text structured';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_region']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_region']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_region']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_region']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_region']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_region']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_region']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_region']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'test';
  $export['grantee_survey'] = $view;

  return $export;
}
