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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Grantee Results */
  $handler = $view->new_display('page', 'Grantee Results', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external gr */
  $handler->display->display_options['fields']['field_develop_proposal']['id'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['table'] = 'field_data_field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['field'] = 'field_develop_proposal';
  $handler->display->display_options['fields']['field_develop_proposal']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_develop_proposal']['element_default_classes'] = FALSE;
  /* Field: Content: Implementing your organization's most recent B-WET-funded grant  */
  $handler->display->display_options['fields']['field_implementing_grant']['id'] = 'field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['table'] = 'field_data_field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['field'] = 'field_implementing_grant';
  $handler->display->display_options['fields']['field_implementing_grant']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_implementing_grant']['element_default_classes'] = FALSE;
  /* Field: Content: Evaluating your organization's most recent B-WET-funded grant (on your own or through collaborating with an external evaluation  */
  $handler->display->display_options['fields']['field_evaluating_grant']['id'] = 'field_evaluating_grant';
  $handler->display->display_options['fields']['field_evaluating_grant']['table'] = 'field_data_field_evaluating_grant';
  $handler->display->display_options['fields']['field_evaluating_grant']['field'] = 'field_evaluating_grant';
  $handler->display->display_options['fields']['field_evaluating_grant']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_evaluating_grant']['element_default_classes'] = FALSE;
  /* Field: Content: In what 5-digit zip code is your organization located? */
  $handler->display->display_options['fields']['field_zipcode']['id'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['table'] = 'field_data_field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['field'] = 'field_zipcode';
  $handler->display->display_options['fields']['field_zipcode']['label'] = 'In what zip code is your organization located?';
  $handler->display->display_options['fields']['field_zipcode']['element_class'] = 'text groupOverview';
  $handler->display->display_options['fields']['field_zipcode']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zipcode']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: In which region(s) were your organization's MWEEs offered this past grant year? (check all that apply) */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['label'] = 'In which region(s) were your organization\'s MWEEs offered this past grant year?';
  $handler->display->display_options['fields']['field_region']['element_class'] = 'structured groupOverview';
  $handler->display->display_options['fields']['field_region']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_region']['delta_offset'] = '0';
  /* Field: Content: What is the total amount of funding you received this past grant year from NOAA for your B-WET project? */
  $handler->display->display_options['fields']['field_noaa_funding']['id'] = 'field_noaa_funding';
  $handler->display->display_options['fields']['field_noaa_funding']['table'] = 'field_data_field_noaa_funding';
  $handler->display->display_options['fields']['field_noaa_funding']['field'] = 'field_noaa_funding';
  $handler->display->display_options['fields']['field_noaa_funding']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_noaa_funding']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_noaa_funding']['element_default_classes'] = FALSE;
  /* Field: Content: What is the total amount of funding for this project, from all sources, this past grant year? */
  $handler->display->display_options['fields']['field_funding_all']['id'] = 'field_funding_all';
  $handler->display->display_options['fields']['field_funding_all']['table'] = 'field_data_field_funding_all';
  $handler->display->display_options['fields']['field_funding_all']['field'] = 'field_funding_all';
  $handler->display->display_options['fields']['field_funding_all']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_funding_all']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_funding_all']['element_default_classes'] = FALSE;
  /* Field: Content: What percent of the participating students' schools are Title 1? */
  $handler->display->display_options['fields']['field_title_1']['id'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['table'] = 'field_data_field_title_1';
  $handler->display->display_options['fields']['field_title_1']['field'] = 'field_title_1';
  $handler->display->display_options['fields']['field_title_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title_1']['element_default_classes'] = FALSE;
  /* Field: Content: Including this past grant year, for how many years has your organization received funding (not including anticipated funding) fr */
  $handler->display->display_options['fields']['field_years_noaa_funding']['id'] = 'field_years_noaa_funding';
  $handler->display->display_options['fields']['field_years_noaa_funding']['table'] = 'field_data_field_years_noaa_funding';
  $handler->display->display_options['fields']['field_years_noaa_funding']['field'] = 'field_years_noaa_funding';
  $handler->display->display_options['fields']['field_years_noaa_funding']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_years_noaa_funding']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_years_noaa_funding']['element_default_classes'] = FALSE;
  /* Field: Content: On average during the past grant year, a typical student spent ___hours taught by your organization's staff during a B-WET-funde */
  $handler->display->display_options['fields']['field_hours_taught']['id'] = 'field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught']['table'] = 'field_data_field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught']['field'] = 'field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_hours_taught']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hours_taught']['element_default_classes'] = FALSE;
  /* Field: Content: For how many years total has this B-WET project been in existence, including years not funded by NOAA B-WET? */
  $handler->display->display_options['fields']['field_project_existence']['id'] = 'field_project_existence';
  $handler->display->display_options['fields']['field_project_existence']['table'] = 'field_data_field_project_existence';
  $handler->display->display_options['fields']['field_project_existence']['field'] = 'field_project_existence';
  $handler->display->display_options['fields']['field_project_existence']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_project_existence']['element_default_classes'] = FALSE;
  /* Field: Content: For what type of organization do you work? (choose one) */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = 'For what type of organization do you work?';
  $handler->display->display_options['fields']['field_organization']['element_class'] = 'text groupOverview';
  $handler->display->display_options['fields']['field_organization']['element_default_classes'] = FALSE;
  /* Field: Content: Access to local NOAA subject-matter experts */
  $handler->display->display_options['fields']['field_subject_matter_experts']['id'] = 'field_subject_matter_experts';
  $handler->display->display_options['fields']['field_subject_matter_experts']['table'] = 'field_data_field_subject_matter_experts';
  $handler->display->display_options['fields']['field_subject_matter_experts']['field'] = 'field_subject_matter_experts';
  $handler->display->display_options['fields']['field_subject_matter_experts']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_subject_matter_experts']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_access_research']['id'] = 'field_access_research';
  $handler->display->display_options['fields']['field_access_research']['table'] = 'field_data_field_access_research';
  $handler->display->display_options['fields']['field_access_research']['field'] = 'field_access_research';
  $handler->display->display_options['fields']['field_access_research']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_access_research']['element_default_classes'] = FALSE;
  /* Field: Content: Assistance with evaluating MWEEs */
  $handler->display->display_options['fields']['field_evaluation_assistance']['id'] = 'field_evaluation_assistance';
  $handler->display->display_options['fields']['field_evaluation_assistance']['table'] = 'field_data_field_evaluation_assistance';
  $handler->display->display_options['fields']['field_evaluation_assistance']['field'] = 'field_evaluation_assistance';
  $handler->display->display_options['fields']['field_evaluation_assistance']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_evaluation_assistance']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_grant_budgeting_assistance']['id'] = 'field_grant_budgeting_assistance';
  $handler->display->display_options['fields']['field_grant_budgeting_assistance']['table'] = 'field_data_field_grant_budgeting_assistance';
  $handler->display->display_options['fields']['field_grant_budgeting_assistance']['field'] = 'field_grant_budgeting_assistance';
  $handler->display->display_options['fields']['field_grant_budgeting_assistance']['label'] = 'Assistance with grant budgeting';
  $handler->display->display_options['fields']['field_grant_budgeting_assistance']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_grant_budgeting_assistance']['element_default_classes'] = FALSE;
  /* Field: Content: Briefly describe why you selected this grade. */
  $handler->display->display_options['fields']['field_grade_explain']['id'] = 'field_grade_explain';
  $handler->display->display_options['fields']['field_grade_explain']['table'] = 'field_data_field_grade_explain';
  $handler->display->display_options['fields']['field_grade_explain']['field'] = 'field_grade_explain';
  $handler->display->display_options['fields']['field_grade_explain']['element_class'] = 'text groupOverview';
  $handler->display->display_options['fields']['field_grade_explain']['element_default_classes'] = FALSE;
  /* Field: Content: Email listserv, web forum, Facebook page, or other tools for virtual interaction with other grantees */
  $handler->display->display_options['fields']['field_virtual_interaction']['id'] = 'field_virtual_interaction';
  $handler->display->display_options['fields']['field_virtual_interaction']['table'] = 'field_data_field_virtual_interaction';
  $handler->display->display_options['fields']['field_virtual_interaction']['field'] = 'field_virtual_interaction';
  $handler->display->display_options['fields']['field_virtual_interaction']['label'] = 'Email listserv, web forum, or other tools for virtual interaction with other grantees';
  $handler->display->display_options['fields']['field_virtual_interaction']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_virtual_interaction']['element_default_classes'] = FALSE;
  /* Field: Content: Facilitated networking with other B-WET grantees from other regions */
  $handler->display->display_options['fields']['field_network_other_region']['id'] = 'field_network_other_region';
  $handler->display->display_options['fields']['field_network_other_region']['table'] = 'field_data_field_network_other_region';
  $handler->display->display_options['fields']['field_network_other_region']['field'] = 'field_network_other_region';
  $handler->display->display_options['fields']['field_network_other_region']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_network_other_region']['element_default_classes'] = FALSE;
  /* Field: Content: Facilitated networking with other B-WET grantees in my region  */
  $handler->display->display_options['fields']['field_network_my_region']['id'] = 'field_network_my_region';
  $handler->display->display_options['fields']['field_network_my_region']['table'] = 'field_data_field_network_my_region';
  $handler->display->display_options['fields']['field_network_my_region']['field'] = 'field_network_my_region';
  $handler->display->display_options['fields']['field_network_my_region']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_network_my_region']['element_default_classes'] = FALSE;
  /* Field: Content: Information about and access to current NOAA data sets */
  $handler->display->display_options['fields']['field_noaa_datasets']['id'] = 'field_noaa_datasets';
  $handler->display->display_options['fields']['field_noaa_datasets']['table'] = 'field_data_field_noaa_datasets';
  $handler->display->display_options['fields']['field_noaa_datasets']['field'] = 'field_noaa_datasets';
  $handler->display->display_options['fields']['field_noaa_datasets']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_noaa_datasets']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA materials and lesson plans relevant to watersheds */
  $handler->display->display_options['fields']['field_noaa_lessonplans']['id'] = 'field_noaa_lessonplans';
  $handler->display->display_options['fields']['field_noaa_lessonplans']['table'] = 'field_data_field_noaa_lessonplans';
  $handler->display->display_options['fields']['field_noaa_lessonplans']['field'] = 'field_noaa_lessonplans';
  $handler->display->display_options['fields']['field_noaa_lessonplans']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_noaa_lessonplans']['element_default_classes'] = FALSE;
  /* Field: Content: One-on-one time with B-WET program staff (i.e., regional or national coordinators) */
  $handler->display->display_options['fields']['field_one_on_one']['id'] = 'field_one_on_one';
  $handler->display->display_options['fields']['field_one_on_one']['table'] = 'field_data_field_one_on_one';
  $handler->display->display_options['fields']['field_one_on_one']['field'] = 'field_one_on_one';
  $handler->display->display_options['fields']['field_one_on_one']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_one_on_one']['element_default_classes'] = FALSE;
  /* Field: Content: Opportunities to learn about local or regional environmental issues */
  $handler->display->display_options['fields']['field_learn_environmental_issues']['id'] = 'field_learn_environmental_issues';
  $handler->display->display_options['fields']['field_learn_environmental_issues']['table'] = 'field_data_field_learn_environmental_issues';
  $handler->display->display_options['fields']['field_learn_environmental_issues']['field'] = 'field_learn_environmental_issues';
  $handler->display->display_options['fields']['field_learn_environmental_issues']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_learn_environmental_issues']['element_default_classes'] = FALSE;
  /* Field: Content: Opportunities to learn about local or regional policy efforts impacting environmental education */
  $handler->display->display_options['fields']['field_learn_local_policy']['id'] = 'field_learn_local_policy';
  $handler->display->display_options['fields']['field_learn_local_policy']['table'] = 'field_data_field_learn_local_policy';
  $handler->display->display_options['fields']['field_learn_local_policy']['field'] = 'field_learn_local_policy';
  $handler->display->display_options['fields']['field_learn_local_policy']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_learn_local_policy']['element_default_classes'] = FALSE;
  /* Field: Content: Opportunities to learn about national policy efforts impacting environmental education */
  $handler->display->display_options['fields']['field_learn_national_policy']['id'] = 'field_learn_national_policy';
  $handler->display->display_options['fields']['field_learn_national_policy']['table'] = 'field_data_field_learn_national_policy';
  $handler->display->display_options['fields']['field_learn_national_policy']['field'] = 'field_learn_national_policy';
  $handler->display->display_options['fields']['field_learn_national_policy']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_learn_national_policy']['element_default_classes'] = FALSE;
  /* Field: Content: Opportunities to learn about watershed science */
  $handler->display->display_options['fields']['field_learn_watershed']['id'] = 'field_learn_watershed';
  $handler->display->display_options['fields']['field_learn_watershed']['table'] = 'field_data_field_learn_watershed';
  $handler->display->display_options['fields']['field_learn_watershed']['field'] = 'field_learn_watershed';
  $handler->display->display_options['fields']['field_learn_watershed']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_learn_watershed']['element_default_classes'] = FALSE;
  /* Field: Content: Overall, what grade would you give the support you received from your region's NOAA B-WET staff over the past grant year? */
  $handler->display->display_options['fields']['field_grade']['id'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['table'] = 'field_data_field_grade';
  $handler->display->display_options['fields']['field_grade']['field'] = 'field_grade';
  $handler->display->display_options['fields']['field_grade']['element_class'] = 'text groupOverview';
  $handler->display->display_options['fields']['field_grade']['element_default_classes'] = FALSE;
  /* Field: Content: Suggested "best" or "preferred" practices for MWEEs */
  $handler->display->display_options['fields']['field_best_practices']['id'] = 'field_best_practices';
  $handler->display->display_options['fields']['field_best_practices']['table'] = 'field_data_field_best_practices';
  $handler->display->display_options['fields']['field_best_practices']['field'] = 'field_best_practices';
  $handler->display->display_options['fields']['field_best_practices']['element_class'] = 'number groupOverview';
  $handler->display->display_options['fields']['field_best_practices']['element_default_classes'] = FALSE;
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_school_districts_served']['id'] = 'field_school_districts_served';
  $handler->display->display_options['fields']['field_school_districts_served']['table'] = 'field_data_field_school_districts_served';
  $handler->display->display_options['fields']['field_school_districts_served']['field'] = 'field_school_districts_served';
  $handler->display->display_options['fields']['field_school_districts_served']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_school_districts_served']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_school_districts_served']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_schools_served']['id'] = 'field_schools_served';
  $handler->display->display_options['fields']['field_schools_served']['table'] = 'field_data_field_schools_served';
  $handler->display->display_options['fields']['field_schools_served']['field'] = 'field_schools_served';
  $handler->display->display_options['fields']['field_schools_served']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_schools_served']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_schools_served']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: About */
  $handler->display->display_options['fields']['field_students_served']['id'] = 'field_students_served';
  $handler->display->display_options['fields']['field_students_served']['table'] = 'field_data_field_students_served';
  $handler->display->display_options['fields']['field_students_served']['field'] = 'field_students_served';
  $handler->display->display_options['fields']['field_students_served']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_students_served']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_students_served']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: About ____ K-12 schools served */
  $handler->display->display_options['fields']['field_teachers_k_12_served']['id'] = 'field_teachers_k_12_served';
  $handler->display->display_options['fields']['field_teachers_k_12_served']['table'] = 'field_data_field_teachers_k_12_served';
  $handler->display->display_options['fields']['field_teachers_k_12_served']['field'] = 'field_teachers_k_12_served';
  $handler->display->display_options['fields']['field_teachers_k_12_served']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teachers_k_12_served']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teachers_k_12_served']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: About ____ school districts served */
  $handler->display->display_options['fields']['field_teachers_school_districts_']['id'] = 'field_teachers_school_districts_';
  $handler->display->display_options['fields']['field_teachers_school_districts_']['table'] = 'field_data_field_teachers_school_districts_';
  $handler->display->display_options['fields']['field_teachers_school_districts_']['field'] = 'field_teachers_school_districts_';
  $handler->display->display_options['fields']['field_teachers_school_districts_']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teachers_school_districts_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teachers_school_districts_']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Classroom-based programs during the school day, including distance learning experiences */
  $handler->display->display_options['fields']['field_classroom_programs']['id'] = 'field_classroom_programs';
  $handler->display->display_options['fields']['field_classroom_programs']['table'] = 'field_data_field_classroom_programs';
  $handler->display->display_options['fields']['field_classroom_programs']['field'] = 'field_classroom_programs';
  $handler->display->display_options['fields']['field_classroom_programs']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_classroom_programs']['element_default_classes'] = FALSE;
  /* Field: Content: Elementary */
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['id'] = 'field_teacher_grades_4_5';
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['table'] = 'field_data_field_teacher_grades_4_5';
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['field'] = 'field_teacher_grades_4_5';
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['label'] = 'Grades 4-5';
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teacher_grades_4_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Elementary */
  $handler->display->display_options['fields']['field_per_4_5']['id'] = 'field_per_4_5';
  $handler->display->display_options['fields']['field_per_4_5']['table'] = 'field_data_field_per_4_5';
  $handler->display->display_options['fields']['field_per_4_5']['field'] = 'field_per_4_5';
  $handler->display->display_options['fields']['field_per_4_5']['label'] = 'Grades 4-5';
  $handler->display->display_options['fields']['field_per_4_5']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_per_4_5']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_per_4_5']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Middle */
  $handler->display->display_options['fields']['field_per_6_8']['id'] = 'field_per_6_8';
  $handler->display->display_options['fields']['field_per_6_8']['table'] = 'field_data_field_per_6_8';
  $handler->display->display_options['fields']['field_per_6_8']['field'] = 'field_per_6_8';
  $handler->display->display_options['fields']['field_per_6_8']['label'] = 'Grades 6-8';
  $handler->display->display_options['fields']['field_per_6_8']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_per_6_8']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_per_6_8']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Middle */
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['id'] = 'field_teacher_grades_6_8';
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['table'] = 'field_data_field_teacher_grades_6_8';
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['field'] = 'field_teacher_grades_6_8';
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['label'] = 'Grades 6-8';
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teacher_grades_6_8']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: High */
  $handler->display->display_options['fields']['field_per_9_12']['id'] = 'field_per_9_12';
  $handler->display->display_options['fields']['field_per_9_12']['table'] = 'field_data_field_per_9_12';
  $handler->display->display_options['fields']['field_per_9_12']['field'] = 'field_per_9_12';
  $handler->display->display_options['fields']['field_per_9_12']['label'] = 'Grades 9-12';
  $handler->display->display_options['fields']['field_per_9_12']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_per_9_12']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_per_9_12']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: High */
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['id'] = 'field_teacher_grades_9_12';
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['table'] = 'field_data_field_teacher_grades_9_12';
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['field'] = 'field_teacher_grades_9_12';
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['label'] = 'Grades 9-12';
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teacher_grades_9_12']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PreK */
  $handler->display->display_options['fields']['field_teacher_prek_3']['id'] = 'field_teacher_prek_3';
  $handler->display->display_options['fields']['field_teacher_prek_3']['table'] = 'field_data_field_teacher_prek_3';
  $handler->display->display_options['fields']['field_teacher_prek_3']['field'] = 'field_teacher_prek_3';
  $handler->display->display_options['fields']['field_teacher_prek_3']['label'] = 'Grades PreK-3';
  $handler->display->display_options['fields']['field_teacher_prek_3']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_prek_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teacher_prek_3']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: PreK */
  $handler->display->display_options['fields']['field_per_prek_3']['id'] = 'field_per_prek_3';
  $handler->display->display_options['fields']['field_per_prek_3']['table'] = 'field_data_field_per_prek_3';
  $handler->display->display_options['fields']['field_per_prek_3']['field'] = 'field_per_prek_3';
  $handler->display->display_options['fields']['field_per_prek_3']['label'] = 'Grades PreK-3';
  $handler->display->display_options['fields']['field_per_prek_3']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_per_prek_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_per_prek_3']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_per_dont_know']['id'] = 'field_per_dont_know';
  $handler->display->display_options['fields']['field_per_dont_know']['table'] = 'field_data_field_per_dont_know';
  $handler->display->display_options['fields']['field_per_dont_know']['field'] = 'field_per_dont_know';
  $handler->display->display_options['fields']['field_per_dont_know']['label'] = 'I don\'t know';
  $handler->display->display_options['fields']['field_per_dont_know']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_per_dont_know']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_teacher_grades_dont_know']['id'] = 'field_teacher_grades_dont_know';
  $handler->display->display_options['fields']['field_teacher_grades_dont_know']['table'] = 'field_data_field_teacher_grades_dont_know';
  $handler->display->display_options['fields']['field_teacher_grades_dont_know']['field'] = 'field_teacher_grades_dont_know';
  $handler->display->display_options['fields']['field_teacher_grades_dont_know']['label'] = 'I don\'t know';
  $handler->display->display_options['fields']['field_teacher_grades_dont_know']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_grades_dont_know']['element_default_classes'] = FALSE;
  /* Field: Content: National education standards */
  $handler->display->display_options['fields']['field_standards_national']['id'] = 'field_standards_national';
  $handler->display->display_options['fields']['field_standards_national']['table'] = 'field_data_field_standards_national';
  $handler->display->display_options['fields']['field_standards_national']['field'] = 'field_standards_national';
  $handler->display->display_options['fields']['field_standards_national']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_standards_national']['element_default_classes'] = FALSE;
  /* Field: Content: National education standards */
  $handler->display->display_options['fields']['field_teacher_national_standards']['id'] = 'field_teacher_national_standards';
  $handler->display->display_options['fields']['field_teacher_national_standards']['table'] = 'field_data_field_teacher_national_standards';
  $handler->display->display_options['fields']['field_teacher_national_standards']['field'] = 'field_teacher_national_standards';
  $handler->display->display_options['fields']['field_teacher_national_standards']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_national_standards']['element_default_classes'] = FALSE;
  /* Field: Content: Off-site field programs during the school day */
  $handler->display->display_options['fields']['field_off_site_programs']['id'] = 'field_off_site_programs';
  $handler->display->display_options['fields']['field_off_site_programs']['table'] = 'field_data_field_off_site_programs';
  $handler->display->display_options['fields']['field_off_site_programs']['field'] = 'field_off_site_programs';
  $handler->display->display_options['fields']['field_off_site_programs']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_off_site_programs']['element_default_classes'] = FALSE;
  /* Field: Content: Regional environmental/natural resources management priorities */
  $handler->display->display_options['fields']['field_standards_regional']['id'] = 'field_standards_regional';
  $handler->display->display_options['fields']['field_standards_regional']['table'] = 'field_data_field_standards_regional';
  $handler->display->display_options['fields']['field_standards_regional']['field'] = 'field_standards_regional';
  $handler->display->display_options['fields']['field_standards_regional']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_standards_regional']['element_default_classes'] = FALSE;
  /* Field: Content: Regional environmental/natural resources management priorities */
  $handler->display->display_options['fields']['field_teacher_regional_prioritie']['id'] = 'field_teacher_regional_prioritie';
  $handler->display->display_options['fields']['field_teacher_regional_prioritie']['table'] = 'field_data_field_teacher_regional_prioritie';
  $handler->display->display_options['fields']['field_teacher_regional_prioritie']['field'] = 'field_teacher_regional_prioritie';
  $handler->display->display_options['fields']['field_teacher_regional_prioritie']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_regional_prioritie']['element_default_classes'] = FALSE;
  /* Field: Content: School district education standards */
  $handler->display->display_options['fields']['field_standards_school_district']['id'] = 'field_standards_school_district';
  $handler->display->display_options['fields']['field_standards_school_district']['table'] = 'field_data_field_standards_school_district';
  $handler->display->display_options['fields']['field_standards_school_district']['field'] = 'field_standards_school_district';
  $handler->display->display_options['fields']['field_standards_school_district']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_standards_school_district']['element_default_classes'] = FALSE;
  /* Field: Content: School district education standards */
  $handler->display->display_options['fields']['field_teacher_school_district']['id'] = 'field_teacher_school_district';
  $handler->display->display_options['fields']['field_teacher_school_district']['table'] = 'field_data_field_teacher_school_district';
  $handler->display->display_options['fields']['field_teacher_school_district']['field'] = 'field_teacher_school_district';
  $handler->display->display_options['fields']['field_teacher_school_district']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_school_district']['element_default_classes'] = FALSE;
  /* Field: Content: Schoolyard-based programs during the school day */
  $handler->display->display_options['fields']['field_schoolyard_programs']['id'] = 'field_schoolyard_programs';
  $handler->display->display_options['fields']['field_schoolyard_programs']['table'] = 'field_data_field_schoolyard_programs';
  $handler->display->display_options['fields']['field_schoolyard_programs']['field'] = 'field_schoolyard_programs';
  $handler->display->display_options['fields']['field_schoolyard_programs']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_schoolyard_programs']['element_default_classes'] = FALSE;
  /* Field: Content: Scientific-inquiry-based learning */
  $handler->display->display_options['fields']['field_teacher_method_scientific_']['id'] = 'field_teacher_method_scientific_';
  $handler->display->display_options['fields']['field_teacher_method_scientific_']['table'] = 'field_data_field_teacher_method_scientific_';
  $handler->display->display_options['fields']['field_teacher_method_scientific_']['field'] = 'field_teacher_method_scientific_';
  $handler->display->display_options['fields']['field_teacher_method_scientific_']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_method_scientific_']['element_default_classes'] = FALSE;
  /* Field: Content: Scientific-inquiry-based learning */
  $handler->display->display_options['fields']['field_method_scientific_inquiry']['id'] = 'field_method_scientific_inquiry';
  $handler->display->display_options['fields']['field_method_scientific_inquiry']['table'] = 'field_data_field_method_scientific_inquiry';
  $handler->display->display_options['fields']['field_method_scientific_inquiry']['field'] = 'field_method_scientific_inquiry';
  $handler->display->display_options['fields']['field_method_scientific_inquiry']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_scientific_inquiry']['element_default_classes'] = FALSE;
  /* Field: Content: State education standards */
  $handler->display->display_options['fields']['field_standards_state']['id'] = 'field_standards_state';
  $handler->display->display_options['fields']['field_standards_state']['table'] = 'field_data_field_standards_state';
  $handler->display->display_options['fields']['field_standards_state']['field'] = 'field_standards_state';
  $handler->display->display_options['fields']['field_standards_state']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_standards_state']['element_default_classes'] = FALSE;
  /* Field: Content: State education standards */
  $handler->display->display_options['fields']['field_teacher_state_standards']['id'] = 'field_teacher_state_standards';
  $handler->display->display_options['fields']['field_teacher_state_standards']['table'] = 'field_data_field_teacher_state_standards';
  $handler->display->display_options['fields']['field_teacher_state_standards']['field'] = 'field_teacher_state_standards';
  $handler->display->display_options['fields']['field_teacher_state_standards']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_state_standards']['element_default_classes'] = FALSE;
  /* Field: Content: What percent of the participating students speak English as a second language (aka English Language Learners)? */
  $handler->display->display_options['fields']['field_per_esl']['id'] = 'field_per_esl';
  $handler->display->display_options['fields']['field_per_esl']['table'] = 'field_data_field_per_esl';
  $handler->display->display_options['fields']['field_per_esl']['field'] = 'field_per_esl';
  $handler->display->display_options['fields']['field_per_esl']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_per_esl']['element_default_classes'] = FALSE;
  /* Field: Content: After-school or weekend programs (e.g., science clubs) */
  $handler->display->display_options['fields']['field_after_school_programs']['id'] = 'field_after_school_programs';
  $handler->display->display_options['fields']['field_after_school_programs']['table'] = 'field_data_field_after_school_programs';
  $handler->display->display_options['fields']['field_after_school_programs']['field'] = 'field_after_school_programs';
  $handler->display->display_options['fields']['field_after_school_programs']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_after_school_programs']['element_default_classes'] = FALSE;
  /* Field: Content: Data collected by and accessible through NOAA */
  $handler->display->display_options['fields']['field_resources_noaa_data']['id'] = 'field_resources_noaa_data';
  $handler->display->display_options['fields']['field_resources_noaa_data']['table'] = 'field_data_field_resources_noaa_data';
  $handler->display->display_options['fields']['field_resources_noaa_data']['field'] = 'field_resources_noaa_data';
  $handler->display->display_options['fields']['field_resources_noaa_data']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_noaa_data']['element_default_classes'] = FALSE;
  /* Field: Content: Data collected by and accessible through NOAA */
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat']['id'] = 'field_teacher_resources_noaa_dat';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat']['table'] = 'field_data_field_teacher_resources_noaa_dat';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat']['field'] = 'field_teacher_resources_noaa_dat';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat']['element_default_classes'] = FALSE;
  /* Field: Content: Events for youth with their families */
  $handler->display->display_options['fields']['field_events']['id'] = 'field_events';
  $handler->display->display_options['fields']['field_events']['table'] = 'field_data_field_events';
  $handler->display->display_options['fields']['field_events']['field'] = 'field_events';
  $handler->display->display_options['fields']['field_events']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_events']['element_default_classes'] = FALSE;
  /* Field: Content: Information from NOAA studies, reports, or websites */
  $handler->display->display_options['fields']['field_information_for_noaa']['id'] = 'field_information_for_noaa';
  $handler->display->display_options['fields']['field_information_for_noaa']['table'] = 'field_data_field_information_for_noaa';
  $handler->display->display_options['fields']['field_information_for_noaa']['field'] = 'field_information_for_noaa';
  $handler->display->display_options['fields']['field_information_for_noaa']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_information_for_noaa']['element_default_classes'] = FALSE;
  /* Field: Content: Information from NOAA studies, reports, or websites */
  $handler->display->display_options['fields']['field_teacher_information_for_no']['id'] = 'field_teacher_information_for_no';
  $handler->display->display_options['fields']['field_teacher_information_for_no']['table'] = 'field_data_field_teacher_information_for_no';
  $handler->display->display_options['fields']['field_teacher_information_for_no']['field'] = 'field_teacher_information_for_no';
  $handler->display->display_options['fields']['field_teacher_information_for_no']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_information_for_no']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA expert (e.g., scientist, educator, Sea Grant staff member, policy expert) */
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe']['id'] = 'field_teacher_esources_noaa_expe';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe']['table'] = 'field_data_field_teacher_esources_noaa_expe';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe']['field'] = 'field_teacher_esources_noaa_expe';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA expert (e.g., scientist, educator, Sea Grant staff member, policy expert) */
  $handler->display->display_options['fields']['field_resources_noaa_expert']['id'] = 'field_resources_noaa_expert';
  $handler->display->display_options['fields']['field_resources_noaa_expert']['table'] = 'field_data_field_resources_noaa_expert';
  $handler->display->display_options['fields']['field_resources_noaa_expert']['field'] = 'field_resources_noaa_expert';
  $handler->display->display_options['fields']['field_resources_noaa_expert']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_noaa_expert']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_teacher_resources_none']['id'] = 'field_teacher_resources_none';
  $handler->display->display_options['fields']['field_teacher_resources_none']['table'] = 'field_data_field_teacher_resources_none';
  $handler->display->display_options['fields']['field_teacher_resources_none']['field'] = 'field_teacher_resources_none';
  $handler->display->display_options['fields']['field_teacher_resources_none']['label'] = 'None';
  $handler->display->display_options['fields']['field_teacher_resources_none']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_none']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_resources_none']['id'] = 'field_resources_none';
  $handler->display->display_options['fields']['field_resources_none']['table'] = 'field_data_field_resources_none';
  $handler->display->display_options['fields']['field_resources_none']['field'] = 'field_resources_none';
  $handler->display->display_options['fields']['field_resources_none']['label'] = 'None';
  $handler->display->display_options['fields']['field_resources_none']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_none']['element_default_classes'] = FALSE;
  /* Field: Content: On average during the past grant year, a typical student spent ____ hours outdoors taught by your organization’s staff during a  */
  $handler->display->display_options['fields']['field_hours_taught_outdoors']['id'] = 'field_hours_taught_outdoors';
  $handler->display->display_options['fields']['field_hours_taught_outdoors']['table'] = 'field_data_field_hours_taught_outdoors';
  $handler->display->display_options['fields']['field_hours_taught_outdoors']['field'] = 'field_hours_taught_outdoors';
  $handler->display->display_options['fields']['field_hours_taught_outdoors']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_hours_taught_outdoors']['element_default_classes'] = FALSE;
  /* Field: Content: On average during the past grant year, a typical student spent ___hours taught by your organization's staff during a B-WET-funde */
  $handler->display->display_options['fields']['field_hours_taught_1']['id'] = 'field_hours_taught_1';
  $handler->display->display_options['fields']['field_hours_taught_1']['table'] = 'field_data_field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught_1']['field'] = 'field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_hours_taught_1']['element_default_classes'] = FALSE;
  /* Field: Content: On average, a typical student participated in your organization's B-WET-funded MWEEs over the course of: */
  $handler->display->display_options['fields']['field_length_participation']['id'] = 'field_length_participation';
  $handler->display->display_options['fields']['field_length_participation']['table'] = 'field_data_field_length_participation';
  $handler->display->display_options['fields']['field_length_participation']['field'] = 'field_length_participation';
  $handler->display->display_options['fields']['field_length_participation']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_length_participation']['element_default_classes'] = FALSE;
  /* Field: Content: Summer programs */
  $handler->display->display_options['fields']['field_summer_programs']['id'] = 'field_summer_programs';
  $handler->display->display_options['fields']['field_summer_programs']['table'] = 'field_data_field_summer_programs';
  $handler->display->display_options['fields']['field_summer_programs']['field'] = 'field_summer_programs';
  $handler->display->display_options['fields']['field_summer_programs']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_summer_programs']['element_default_classes'] = FALSE;
  /* Field: Content: Were your organization’s typical B-WET-funded MWEEs focused only on science concepts, or on concepts from multiple disciplines? */
  $handler->display->display_options['fields']['field_focus_on_science']['id'] = 'field_focus_on_science';
  $handler->display->display_options['fields']['field_focus_on_science']['table'] = 'field_data_field_focus_on_science';
  $handler->display->display_options['fields']['field_focus_on_science']['field'] = 'field_focus_on_science';
  $handler->display->display_options['fields']['field_focus_on_science']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_focus_on_science']['element_default_classes'] = FALSE;
  /* Field: Content: After-school or weekend programs (e.g., science clubs) */
  $handler->display->display_options['fields']['field_after_school_programs_1']['id'] = 'field_after_school_programs_1';
  $handler->display->display_options['fields']['field_after_school_programs_1']['table'] = 'field_data_field_after_school_programs';
  $handler->display->display_options['fields']['field_after_school_programs_1']['field'] = 'field_after_school_programs';
  $handler->display->display_options['fields']['field_after_school_programs_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_after_school_programs_1']['element_default_classes'] = FALSE;
  /* Field: Content: Events for youth with their families */
  $handler->display->display_options['fields']['field_events_1']['id'] = 'field_events_1';
  $handler->display->display_options['fields']['field_events_1']['table'] = 'field_data_field_events';
  $handler->display->display_options['fields']['field_events_1']['field'] = 'field_events';
  $handler->display->display_options['fields']['field_events_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_events_1']['element_default_classes'] = FALSE;
  /* Field: Content: On average during the past grant year, a typical student spent ____ hours outdoors taught by your organization’s staff during a  */
  $handler->display->display_options['fields']['field_hours_taught_outdoors_1']['id'] = 'field_hours_taught_outdoors_1';
  $handler->display->display_options['fields']['field_hours_taught_outdoors_1']['table'] = 'field_data_field_hours_taught_outdoors';
  $handler->display->display_options['fields']['field_hours_taught_outdoors_1']['field'] = 'field_hours_taught_outdoors';
  $handler->display->display_options['fields']['field_hours_taught_outdoors_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_hours_taught_outdoors_1']['element_default_classes'] = FALSE;
  /* Field: Content: On average during the past grant year, a typical student spent ___hours taught by your organization's staff during a B-WET-funde */
  $handler->display->display_options['fields']['field_hours_taught_2']['id'] = 'field_hours_taught_2';
  $handler->display->display_options['fields']['field_hours_taught_2']['table'] = 'field_data_field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught_2']['field'] = 'field_hours_taught';
  $handler->display->display_options['fields']['field_hours_taught_2']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_hours_taught_2']['element_default_classes'] = FALSE;
  /* Field: Content: On average, a typical student participated in your organization's B-WET-funded MWEEs over the course of: */
  $handler->display->display_options['fields']['field_length_participation_1']['id'] = 'field_length_participation_1';
  $handler->display->display_options['fields']['field_length_participation_1']['table'] = 'field_data_field_length_participation';
  $handler->display->display_options['fields']['field_length_participation_1']['field'] = 'field_length_participation';
  $handler->display->display_options['fields']['field_length_participation_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_length_participation_1']['element_default_classes'] = FALSE;
  /* Field: Content: Summer programs */
  $handler->display->display_options['fields']['field_summer_programs_1']['id'] = 'field_summer_programs_1';
  $handler->display->display_options['fields']['field_summer_programs_1']['table'] = 'field_data_field_summer_programs';
  $handler->display->display_options['fields']['field_summer_programs_1']['field'] = 'field_summer_programs';
  $handler->display->display_options['fields']['field_summer_programs_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_summer_programs_1']['element_default_classes'] = FALSE;
  /* Field: Content: Were your organization’s typical B-WET-funded MWEEs focused only on science concepts, or on concepts from multiple disciplines? */
  $handler->display->display_options['fields']['field_focus_on_science_1']['id'] = 'field_focus_on_science_1';
  $handler->display->display_options['fields']['field_focus_on_science_1']['table'] = 'field_data_field_focus_on_science';
  $handler->display->display_options['fields']['field_focus_on_science_1']['field'] = 'field_focus_on_science';
  $handler->display->display_options['fields']['field_focus_on_science_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_focus_on_science_1']['element_default_classes'] = FALSE;
  /* Field: Content: Data collected by and accessible through NOAA */
  $handler->display->display_options['fields']['field_resources_noaa_data_1']['id'] = 'field_resources_noaa_data_1';
  $handler->display->display_options['fields']['field_resources_noaa_data_1']['table'] = 'field_data_field_resources_noaa_data';
  $handler->display->display_options['fields']['field_resources_noaa_data_1']['field'] = 'field_resources_noaa_data';
  $handler->display->display_options['fields']['field_resources_noaa_data_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_noaa_data_1']['element_default_classes'] = FALSE;
  /* Field: Content: Data collected by and accessible through NOAA */
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat_1']['id'] = 'field_teacher_resources_noaa_dat_1';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat_1']['table'] = 'field_data_field_teacher_resources_noaa_dat';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat_1']['field'] = 'field_teacher_resources_noaa_dat';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_noaa_dat_1']['element_default_classes'] = FALSE;
  /* Field: Content: Information from NOAA studies, reports, or websites */
  $handler->display->display_options['fields']['field_information_for_noaa_1']['id'] = 'field_information_for_noaa_1';
  $handler->display->display_options['fields']['field_information_for_noaa_1']['table'] = 'field_data_field_information_for_noaa';
  $handler->display->display_options['fields']['field_information_for_noaa_1']['field'] = 'field_information_for_noaa';
  $handler->display->display_options['fields']['field_information_for_noaa_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_information_for_noaa_1']['element_default_classes'] = FALSE;
  /* Field: Content: Information from NOAA studies, reports, or websites */
  $handler->display->display_options['fields']['field_teacher_information_for_no_1']['id'] = 'field_teacher_information_for_no_1';
  $handler->display->display_options['fields']['field_teacher_information_for_no_1']['table'] = 'field_data_field_teacher_information_for_no';
  $handler->display->display_options['fields']['field_teacher_information_for_no_1']['field'] = 'field_teacher_information_for_no';
  $handler->display->display_options['fields']['field_teacher_information_for_no_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_information_for_no_1']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA curricula and education programs */
  $handler->display->display_options['fields']['field_resources_education_progra']['id'] = 'field_resources_education_progra';
  $handler->display->display_options['fields']['field_resources_education_progra']['table'] = 'field_data_field_resources_education_progra';
  $handler->display->display_options['fields']['field_resources_education_progra']['field'] = 'field_resources_education_progra';
  $handler->display->display_options['fields']['field_resources_education_progra']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_education_progra']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA curricula and education programs */
  $handler->display->display_options['fields']['field_teacher_resources_edu_prog']['id'] = 'field_teacher_resources_edu_prog';
  $handler->display->display_options['fields']['field_teacher_resources_edu_prog']['table'] = 'field_data_field_teacher_resources_edu_prog';
  $handler->display->display_options['fields']['field_teacher_resources_edu_prog']['field'] = 'field_teacher_resources_edu_prog';
  $handler->display->display_options['fields']['field_teacher_resources_edu_prog']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_edu_prog']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA expert (e.g., scientist, educator, Sea Grant staff member, policy expert) */
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe_1']['id'] = 'field_teacher_esources_noaa_expe_1';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe_1']['table'] = 'field_data_field_teacher_esources_noaa_expe';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe_1']['field'] = 'field_teacher_esources_noaa_expe';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_esources_noaa_expe_1']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA expert (e.g., scientist, educator, Sea Grant staff member, policy expert) */
  $handler->display->display_options['fields']['field_resources_noaa_expert_1']['id'] = 'field_resources_noaa_expert_1';
  $handler->display->display_options['fields']['field_resources_noaa_expert_1']['table'] = 'field_data_field_resources_noaa_expert';
  $handler->display->display_options['fields']['field_resources_noaa_expert_1']['field'] = 'field_resources_noaa_expert';
  $handler->display->display_options['fields']['field_resources_noaa_expert_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_noaa_expert_1']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA labs or facilities */
  $handler->display->display_options['fields']['field_resources_facilities']['id'] = 'field_resources_facilities';
  $handler->display->display_options['fields']['field_resources_facilities']['table'] = 'field_data_field_resources_facilities';
  $handler->display->display_options['fields']['field_resources_facilities']['field'] = 'field_resources_facilities';
  $handler->display->display_options['fields']['field_resources_facilities']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_facilities']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA labs or facilities */
  $handler->display->display_options['fields']['field_teacher_resources_faciliti']['id'] = 'field_teacher_resources_faciliti';
  $handler->display->display_options['fields']['field_teacher_resources_faciliti']['table'] = 'field_data_field_teacher_resources_faciliti';
  $handler->display->display_options['fields']['field_teacher_resources_faciliti']['field'] = 'field_teacher_resources_faciliti';
  $handler->display->display_options['fields']['field_teacher_resources_faciliti']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_faciliti']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA National Estuarine Research Reserve */
  $handler->display->display_options['fields']['field_teacher_resources_estuarin']['id'] = 'field_teacher_resources_estuarin';
  $handler->display->display_options['fields']['field_teacher_resources_estuarin']['table'] = 'field_data_field_teacher_resources_estuarin';
  $handler->display->display_options['fields']['field_teacher_resources_estuarin']['field'] = 'field_teacher_resources_estuarin';
  $handler->display->display_options['fields']['field_teacher_resources_estuarin']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_estuarin']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA National Estuarine Research Reserve */
  $handler->display->display_options['fields']['field_resources_estuarine_resear']['id'] = 'field_resources_estuarine_resear';
  $handler->display->display_options['fields']['field_resources_estuarine_resear']['table'] = 'field_data_field_resources_estuarine_resear';
  $handler->display->display_options['fields']['field_resources_estuarine_resear']['field'] = 'field_resources_estuarine_resear';
  $handler->display->display_options['fields']['field_resources_estuarine_resear']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_estuarine_resear']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA National Marine Sanctuary */
  $handler->display->display_options['fields']['field_teacher_resources_marine_s']['id'] = 'field_teacher_resources_marine_s';
  $handler->display->display_options['fields']['field_teacher_resources_marine_s']['table'] = 'field_data_field_teacher_resources_marine_s';
  $handler->display->display_options['fields']['field_teacher_resources_marine_s']['field'] = 'field_teacher_resources_marine_s';
  $handler->display->display_options['fields']['field_teacher_resources_marine_s']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_marine_s']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA National Marine Sanctuary */
  $handler->display->display_options['fields']['field_resources_marine_sanctuary']['id'] = 'field_resources_marine_sanctuary';
  $handler->display->display_options['fields']['field_resources_marine_sanctuary']['table'] = 'field_data_field_resources_marine_sanctuary';
  $handler->display->display_options['fields']['field_resources_marine_sanctuary']['field'] = 'field_resources_marine_sanctuary';
  $handler->display->display_options['fields']['field_resources_marine_sanctuary']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_marine_sanctuary']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_teacher_resources_none_1']['id'] = 'field_teacher_resources_none_1';
  $handler->display->display_options['fields']['field_teacher_resources_none_1']['table'] = 'field_data_field_teacher_resources_none';
  $handler->display->display_options['fields']['field_teacher_resources_none_1']['field'] = 'field_teacher_resources_none';
  $handler->display->display_options['fields']['field_teacher_resources_none_1']['label'] = 'None';
  $handler->display->display_options['fields']['field_teacher_resources_none_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_resources_none_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_resources_none_1']['id'] = 'field_resources_none_1';
  $handler->display->display_options['fields']['field_resources_none_1']['table'] = 'field_data_field_resources_none';
  $handler->display->display_options['fields']['field_resources_none_1']['field'] = 'field_resources_none';
  $handler->display->display_options['fields']['field_resources_none_1']['label'] = 'None';
  $handler->display->display_options['fields']['field_resources_none_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_resources_none_1']['element_default_classes'] = FALSE;
  /* Field: Content: Field work */
  $handler->display->display_options['fields']['field_method_field_work']['id'] = 'field_method_field_work';
  $handler->display->display_options['fields']['field_method_field_work']['table'] = 'field_data_field_method_field_work';
  $handler->display->display_options['fields']['field_method_field_work']['field'] = 'field_method_field_work';
  $handler->display->display_options['fields']['field_method_field_work']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_field_work']['element_default_classes'] = FALSE;
  /* Field: Content: Field work */
  $handler->display->display_options['fields']['field_teacher_method_field_work']['id'] = 'field_teacher_method_field_work';
  $handler->display->display_options['fields']['field_teacher_method_field_work']['table'] = 'field_data_field_teacher_method_field_work';
  $handler->display->display_options['fields']['field_teacher_method_field_work']['field'] = 'field_teacher_method_field_work';
  $handler->display->display_options['fields']['field_teacher_method_field_work']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_method_field_work']['element_default_classes'] = FALSE;
  /* Field: Content: Issue investigation */
  $handler->display->display_options['fields']['field_method_issue_investigation']['id'] = 'field_method_issue_investigation';
  $handler->display->display_options['fields']['field_method_issue_investigation']['table'] = 'field_data_field_method_issue_investigation';
  $handler->display->display_options['fields']['field_method_issue_investigation']['field'] = 'field_method_issue_investigation';
  $handler->display->display_options['fields']['field_method_issue_investigation']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_issue_investigation']['element_default_classes'] = FALSE;
  /* Field: Content: Issue investigation */
  $handler->display->display_options['fields']['field_teacher_method_issue_inves']['id'] = 'field_teacher_method_issue_inves';
  $handler->display->display_options['fields']['field_teacher_method_issue_inves']['table'] = 'field_data_field_teacher_method_issue_inves';
  $handler->display->display_options['fields']['field_teacher_method_issue_inves']['field'] = 'field_teacher_method_issue_inves';
  $handler->display->display_options['fields']['field_teacher_method_issue_inves']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_method_issue_inves']['element_default_classes'] = FALSE;
  /* Field: Content: Outdoor field trip */
  $handler->display->display_options['fields']['field_teacher_method_outdoor']['id'] = 'field_teacher_method_outdoor';
  $handler->display->display_options['fields']['field_teacher_method_outdoor']['table'] = 'field_data_field_teacher_method_outdoor';
  $handler->display->display_options['fields']['field_teacher_method_outdoor']['field'] = 'field_teacher_method_outdoor';
  $handler->display->display_options['fields']['field_teacher_method_outdoor']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_method_outdoor']['element_default_classes'] = FALSE;
  /* Field: Content: Outdoor field trip */
  $handler->display->display_options['fields']['field_method_outdoor']['id'] = 'field_method_outdoor';
  $handler->display->display_options['fields']['field_method_outdoor']['table'] = 'field_data_field_method_outdoor';
  $handler->display->display_options['fields']['field_method_outdoor']['field'] = 'field_method_outdoor';
  $handler->display->display_options['fields']['field_method_outdoor']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_outdoor']['element_default_classes'] = FALSE;
  /* Field: Content: Place-based education */
  $handler->display->display_options['fields']['field_method_place_based']['id'] = 'field_method_place_based';
  $handler->display->display_options['fields']['field_method_place_based']['table'] = 'field_data_field_method_place_based';
  $handler->display->display_options['fields']['field_method_place_based']['field'] = 'field_method_place_based';
  $handler->display->display_options['fields']['field_method_place_based']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_place_based']['element_default_classes'] = FALSE;
  /* Field: Content: Place-based education */
  $handler->display->display_options['fields']['field_teacher_method_place_based']['id'] = 'field_teacher_method_place_based';
  $handler->display->display_options['fields']['field_teacher_method_place_based']['table'] = 'field_data_field_teacher_method_place_based';
  $handler->display->display_options['fields']['field_teacher_method_place_based']['field'] = 'field_teacher_method_place_based';
  $handler->display->display_options['fields']['field_teacher_method_place_based']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_method_place_based']['element_default_classes'] = FALSE;
  /* Field: Content: Scientific-inquiry-based learning */
  $handler->display->display_options['fields']['field_teacher_method_scientific__1']['id'] = 'field_teacher_method_scientific__1';
  $handler->display->display_options['fields']['field_teacher_method_scientific__1']['table'] = 'field_data_field_teacher_method_scientific_';
  $handler->display->display_options['fields']['field_teacher_method_scientific__1']['field'] = 'field_teacher_method_scientific_';
  $handler->display->display_options['fields']['field_teacher_method_scientific__1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_method_scientific__1']['element_default_classes'] = FALSE;
  /* Field: Content: Scientific-inquiry-based learning */
  $handler->display->display_options['fields']['field_method_scientific_inquiry_1']['id'] = 'field_method_scientific_inquiry_1';
  $handler->display->display_options['fields']['field_method_scientific_inquiry_1']['table'] = 'field_data_field_method_scientific_inquiry';
  $handler->display->display_options['fields']['field_method_scientific_inquiry_1']['field'] = 'field_method_scientific_inquiry';
  $handler->display->display_options['fields']['field_method_scientific_inquiry_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_scientific_inquiry_1']['element_default_classes'] = FALSE;
  /* Field: Content: Service learning */
  $handler->display->display_options['fields']['field_method_service_learning']['id'] = 'field_method_service_learning';
  $handler->display->display_options['fields']['field_method_service_learning']['table'] = 'field_data_field_method_service_learning';
  $handler->display->display_options['fields']['field_method_service_learning']['field'] = 'field_method_service_learning';
  $handler->display->display_options['fields']['field_method_service_learning']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_method_service_learning']['element_default_classes'] = FALSE;
  /* Field: Content: Conserved water at school to protect the local watershed */
  $handler->display->display_options['fields']['field_conserved_water']['id'] = 'field_conserved_water';
  $handler->display->display_options['fields']['field_conserved_water']['table'] = 'field_data_field_conserved_water';
  $handler->display->display_options['fields']['field_conserved_water']['field'] = 'field_conserved_water';
  $handler->display->display_options['fields']['field_conserved_water']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_conserved_water']['element_default_classes'] = FALSE;
  /* Field: Content: Created a schoolyard or backyard habitat */
  $handler->display->display_options['fields']['field_teacher_created_habitat']['id'] = 'field_teacher_created_habitat';
  $handler->display->display_options['fields']['field_teacher_created_habitat']['table'] = 'field_data_field_teacher_created_habitat';
  $handler->display->display_options['fields']['field_teacher_created_habitat']['field'] = 'field_teacher_created_habitat';
  $handler->display->display_options['fields']['field_teacher_created_habitat']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_created_habitat']['element_default_classes'] = FALSE;
  /* Field: Content: Created a schoolyard or backyard habitat */
  $handler->display->display_options['fields']['field_created_habitat']['id'] = 'field_created_habitat';
  $handler->display->display_options['fields']['field_created_habitat']['table'] = 'field_data_field_created_habitat';
  $handler->display->display_options['fields']['field_created_habitat']['field'] = 'field_created_habitat';
  $handler->display->display_options['fields']['field_created_habitat']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_created_habitat']['element_default_classes'] = FALSE;
  /* Field: Content: Gave presentation(s) about the local watershed */
  $handler->display->display_options['fields']['field_gave_presentations']['id'] = 'field_gave_presentations';
  $handler->display->display_options['fields']['field_gave_presentations']['table'] = 'field_data_field_gave_presentations';
  $handler->display->display_options['fields']['field_gave_presentations']['field'] = 'field_gave_presentations';
  $handler->display->display_options['fields']['field_gave_presentations']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_gave_presentations']['element_default_classes'] = FALSE;
  /* Field: Content: Gave presentation(s) about the local watershed (e.g., for school, other organizations) */
  $handler->display->display_options['fields']['field_teacher_gave_presentations']['id'] = 'field_teacher_gave_presentations';
  $handler->display->display_options['fields']['field_teacher_gave_presentations']['table'] = 'field_data_field_teacher_gave_presentations';
  $handler->display->display_options['fields']['field_teacher_gave_presentations']['field'] = 'field_teacher_gave_presentations';
  $handler->display->display_options['fields']['field_teacher_gave_presentations']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_gave_presentations']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_help_cleanup']['id'] = 'field_goal_help_cleanup';
  $handler->display->display_options['fields']['field_goal_help_cleanup']['table'] = 'field_data_field_goal_help_cleanup';
  $handler->display->display_options['fields']['field_goal_help_cleanup']['field'] = 'field_goal_help_cleanup';
  $handler->display->display_options['fields']['field_goal_help_cleanup']['label'] = 'Help clean up or take care of a local stream, or beach';
  $handler->display->display_options['fields']['field_goal_help_cleanup']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_help_cleanup']['element_default_classes'] = FALSE;
  /* Field: Content: Helped clean up or take care of a local stream or beach */
  $handler->display->display_options['fields']['field_clean_up']['id'] = 'field_clean_up';
  $handler->display->display_options['fields']['field_clean_up']['table'] = 'field_data_field_clean_up';
  $handler->display->display_options['fields']['field_clean_up']['field'] = 'field_clean_up';
  $handler->display->display_options['fields']['field_clean_up']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_clean_up']['element_default_classes'] = FALSE;
  /* Field: Content: Installed a rain barrel at school */
  $handler->display->display_options['fields']['field_installed_rain_barrel']['id'] = 'field_installed_rain_barrel';
  $handler->display->display_options['fields']['field_installed_rain_barrel']['table'] = 'field_data_field_installed_rain_barrel';
  $handler->display->display_options['fields']['field_installed_rain_barrel']['field'] = 'field_installed_rain_barrel';
  $handler->display->display_options['fields']['field_installed_rain_barrel']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_installed_rain_barrel']['element_default_classes'] = FALSE;
  /* Field: Content: Installed a rain barrel at school or at home */
  $handler->display->display_options['fields']['field_teacher_installed_rain_bar']['id'] = 'field_teacher_installed_rain_bar';
  $handler->display->display_options['fields']['field_teacher_installed_rain_bar']['table'] = 'field_data_field_teacher_installed_rain_bar';
  $handler->display->display_options['fields']['field_teacher_installed_rain_bar']['field'] = 'field_teacher_installed_rain_bar';
  $handler->display->display_options['fields']['field_teacher_installed_rain_bar']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_installed_rain_bar']['element_default_classes'] = FALSE;
  /* Field: Content: Monitored water quality */
  $handler->display->display_options['fields']['field_teacher_monitored_water_qu']['id'] = 'field_teacher_monitored_water_qu';
  $handler->display->display_options['fields']['field_teacher_monitored_water_qu']['table'] = 'field_data_field_teacher_monitored_water_qu';
  $handler->display->display_options['fields']['field_teacher_monitored_water_qu']['field'] = 'field_teacher_monitored_water_qu';
  $handler->display->display_options['fields']['field_teacher_monitored_water_qu']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_monitored_water_qu']['element_default_classes'] = FALSE;
  /* Field: Content: Monitored water quality */
  $handler->display->display_options['fields']['field_monitored_water_quality']['id'] = 'field_monitored_water_quality';
  $handler->display->display_options['fields']['field_monitored_water_quality']['table'] = 'field_data_field_monitored_water_quality';
  $handler->display->display_options['fields']['field_monitored_water_quality']['field'] = 'field_monitored_water_quality';
  $handler->display->display_options['fields']['field_monitored_water_quality']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_monitored_water_quality']['element_default_classes'] = FALSE;
  /* Field: Content: Participated in a restoration activity */
  $handler->display->display_options['fields']['field_restoration_activity']['id'] = 'field_restoration_activity';
  $handler->display->display_options['fields']['field_restoration_activity']['table'] = 'field_data_field_restoration_activity';
  $handler->display->display_options['fields']['field_restoration_activity']['field'] = 'field_restoration_activity';
  $handler->display->display_options['fields']['field_restoration_activity']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_restoration_activity']['element_default_classes'] = FALSE;
  /* Field: Content: Participated in a restoration activity (e.g., planting trees) */
  $handler->display->display_options['fields']['field_teacher_restoration_activi']['id'] = 'field_teacher_restoration_activi';
  $handler->display->display_options['fields']['field_teacher_restoration_activi']['table'] = 'field_data_field_teacher_restoration_activi';
  $handler->display->display_options['fields']['field_teacher_restoration_activi']['field'] = 'field_teacher_restoration_activi';
  $handler->display->display_options['fields']['field_teacher_restoration_activi']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_restoration_activi']['element_default_classes'] = FALSE;
  /* Field: Content: Participated in an event to raise awareness about the importance of watersheds */
  $handler->display->display_options['fields']['field_participated_event']['id'] = 'field_participated_event';
  $handler->display->display_options['fields']['field_participated_event']['table'] = 'field_data_field_participated_event';
  $handler->display->display_options['fields']['field_participated_event']['field'] = 'field_participated_event';
  $handler->display->display_options['fields']['field_participated_event']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_participated_event']['element_default_classes'] = FALSE;
  /* Field: Content: Reduced litter at school  */
  $handler->display->display_options['fields']['field_reduced_litter']['id'] = 'field_reduced_litter';
  $handler->display->display_options['fields']['field_reduced_litter']['table'] = 'field_data_field_reduced_litter';
  $handler->display->display_options['fields']['field_reduced_litter']['field'] = 'field_reduced_litter';
  $handler->display->display_options['fields']['field_reduced_litter']['label'] = 'Reduced litter at the school ';
  $handler->display->display_options['fields']['field_reduced_litter']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_reduced_litter']['element_default_classes'] = FALSE;
  /* Field: Content: Told others about ways they can protect their local watershed */
  $handler->display->display_options['fields']['field_told_others']['id'] = 'field_told_others';
  $handler->display->display_options['fields']['field_told_others']['table'] = 'field_data_field_told_others';
  $handler->display->display_options['fields']['field_told_others']['field'] = 'field_told_others';
  $handler->display->display_options['fields']['field_told_others']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_told_others']['element_default_classes'] = FALSE;
  /* Field: Content: Told others about ways they can protect their local watershed */
  $handler->display->display_options['fields']['field_teacher_told_others']['id'] = 'field_teacher_told_others';
  $handler->display->display_options['fields']['field_teacher_told_others']['table'] = 'field_data_field_teacher_told_others';
  $handler->display->display_options['fields']['field_teacher_told_others']['field'] = 'field_teacher_told_others';
  $handler->display->display_options['fields']['field_teacher_told_others']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_told_others']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_create_habitat']['id'] = 'field_goal_create_habitat';
  $handler->display->display_options['fields']['field_goal_create_habitat']['table'] = 'field_data_field_goal_create_habitat';
  $handler->display->display_options['fields']['field_goal_create_habitat']['field'] = 'field_goal_create_habitat';
  $handler->display->display_options['fields']['field_goal_create_habitat']['label'] = 'Create a schoolyard or backyard habitat';
  $handler->display->display_options['fields']['field_goal_create_habitat']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_create_habitat']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_give_presentations']['id'] = 'field_goal_give_presentations';
  $handler->display->display_options['fields']['field_goal_give_presentations']['table'] = 'field_data_field_goal_give_presentations';
  $handler->display->display_options['fields']['field_goal_give_presentations']['field'] = 'field_goal_give_presentations';
  $handler->display->display_options['fields']['field_goal_give_presentations']['label'] = 'Give presentation(s) about the local watershed';
  $handler->display->display_options['fields']['field_goal_give_presentations']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_give_presentations']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_help_cleanup_1']['id'] = 'field_goal_help_cleanup_1';
  $handler->display->display_options['fields']['field_goal_help_cleanup_1']['table'] = 'field_data_field_goal_help_cleanup';
  $handler->display->display_options['fields']['field_goal_help_cleanup_1']['field'] = 'field_goal_help_cleanup';
  $handler->display->display_options['fields']['field_goal_help_cleanup_1']['label'] = 'Help clean up or take care of a local stream, or beach';
  $handler->display->display_options['fields']['field_goal_help_cleanup_1']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_help_cleanup_1']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_install_rain_barrel']['id'] = 'field_goal_install_rain_barrel';
  $handler->display->display_options['fields']['field_goal_install_rain_barrel']['table'] = 'field_data_field_goal_install_rain_barrel';
  $handler->display->display_options['fields']['field_goal_install_rain_barrel']['field'] = 'field_goal_install_rain_barrel';
  $handler->display->display_options['fields']['field_goal_install_rain_barrel']['label'] = 'Install a rain barrel at school or at home';
  $handler->display->display_options['fields']['field_goal_install_rain_barrel']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_install_rain_barrel']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_participate_restorati']['id'] = 'field_goal_participate_restorati';
  $handler->display->display_options['fields']['field_goal_participate_restorati']['table'] = 'field_data_field_goal_participate_restorati';
  $handler->display->display_options['fields']['field_goal_participate_restorati']['field'] = 'field_goal_participate_restorati';
  $handler->display->display_options['fields']['field_goal_participate_restorati']['label'] = 'Participate in a restoration activity';
  $handler->display->display_options['fields']['field_goal_participate_restorati']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_participate_restorati']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_participate_event']['id'] = 'field_goal_participate_event';
  $handler->display->display_options['fields']['field_goal_participate_event']['table'] = 'field_data_field_goal_participate_event';
  $handler->display->display_options['fields']['field_goal_participate_event']['field'] = 'field_goal_participate_event';
  $handler->display->display_options['fields']['field_goal_participate_event']['label'] = 'Participate in an event to raise awareness about the importance of watersheds';
  $handler->display->display_options['fields']['field_goal_participate_event']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_participate_event']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_save_water']['id'] = 'field_goal_save_water';
  $handler->display->display_options['fields']['field_goal_save_water']['table'] = 'field_data_field_goal_save_water';
  $handler->display->display_options['fields']['field_goal_save_water']['field'] = 'field_goal_save_water';
  $handler->display->display_options['fields']['field_goal_save_water']['label'] = 'Save water at school or home to protect the local watershed';
  $handler->display->display_options['fields']['field_goal_save_water']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_save_water']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_goal_tell_others']['id'] = 'field_goal_tell_others';
  $handler->display->display_options['fields']['field_goal_tell_others']['table'] = 'field_data_field_goal_tell_others';
  $handler->display->display_options['fields']['field_goal_tell_others']['field'] = 'field_goal_tell_others';
  $handler->display->display_options['fields']['field_goal_tell_others']['label'] = 'Tell others about ways they can protect their local watershed';
  $handler->display->display_options['fields']['field_goal_tell_others']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_goal_tell_others']['element_default_classes'] = FALSE;
  /* Field: Content: Be better able to conduct scientific investigations */
  $handler->display->display_options['fields']['field_conduct_investigations']['id'] = 'field_conduct_investigations';
  $handler->display->display_options['fields']['field_conduct_investigations']['table'] = 'field_data_field_conduct_investigations';
  $handler->display->display_options['fields']['field_conduct_investigations']['field'] = 'field_conduct_investigations';
  $handler->display->display_options['fields']['field_conduct_investigations']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_conduct_investigations']['element_default_classes'] = FALSE;
  /* Field: Content: Be more confident in their ability to protect and/or restore watersheds */
  $handler->display->display_options['fields']['field_confident_to_protect']['id'] = 'field_confident_to_protect';
  $handler->display->display_options['fields']['field_confident_to_protect']['table'] = 'field_data_field_confident_to_protect';
  $handler->display->display_options['fields']['field_confident_to_protect']['field'] = 'field_confident_to_protect';
  $handler->display->display_options['fields']['field_confident_to_protect']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_confident_to_protect']['element_default_classes'] = FALSE;
  /* Field: Content: Be more engaged in their science learning */
  $handler->display->display_options['fields']['field_more_engaged']['id'] = 'field_more_engaged';
  $handler->display->display_options['fields']['field_more_engaged']['table'] = 'field_data_field_more_engaged';
  $handler->display->display_options['fields']['field_more_engaged']['field'] = 'field_more_engaged';
  $handler->display->display_options['fields']['field_more_engaged']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_more_engaged']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to act to protect and/or restore watersheds */
  $handler->display->display_options['fields']['field_likely_to_protect']['id'] = 'field_likely_to_protect';
  $handler->display->display_options['fields']['field_likely_to_protect']['table'] = 'field_data_field_likely_to_protect';
  $handler->display->display_options['fields']['field_likely_to_protect']['field'] = 'field_likely_to_protect';
  $handler->display->display_options['fields']['field_likely_to_protect']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_likely_to_protect']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to express an interest in pursuing science careers */
  $handler->display->display_options['fields']['field_express_interest']['id'] = 'field_express_interest';
  $handler->display->display_options['fields']['field_express_interest']['table'] = 'field_data_field_express_interest';
  $handler->display->display_options['fields']['field_express_interest']['field'] = 'field_express_interest';
  $handler->display->display_options['fields']['field_express_interest']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_express_interest']['element_default_classes'] = FALSE;
  /* Field: Content: Express greater caring and concern for watersheds */
  $handler->display->display_options['fields']['field_express_concern']['id'] = 'field_express_concern';
  $handler->display->display_options['fields']['field_express_concern']['table'] = 'field_data_field_express_concern';
  $handler->display->display_options['fields']['field_express_concern']['field'] = 'field_express_concern';
  $handler->display->display_options['fields']['field_express_concern']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_express_concern']['element_default_classes'] = FALSE;
  /* Field: Content: Feel more connected to their local watershed */
  $handler->display->display_options['fields']['field_feel_connected']['id'] = 'field_feel_connected';
  $handler->display->display_options['fields']['field_feel_connected']['table'] = 'field_data_field_feel_connected';
  $handler->display->display_options['fields']['field_feel_connected']['field'] = 'field_feel_connected';
  $handler->display->display_options['fields']['field_feel_connected']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_feel_connected']['element_default_classes'] = FALSE;
  /* Field: Content: Perform better academically in science */
  $handler->display->display_options['fields']['field_better_academically']['id'] = 'field_better_academically';
  $handler->display->display_options['fields']['field_better_academically']['table'] = 'field_data_field_better_academically';
  $handler->display->display_options['fields']['field_better_academically']['field'] = 'field_better_academically';
  $handler->display->display_options['fields']['field_better_academically']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_better_academically']['element_default_classes'] = FALSE;
  /* Field: Content: Perform better on state standardized tests */
  $handler->display->display_options['fields']['field_better_standardized_tests']['id'] = 'field_better_standardized_tests';
  $handler->display->display_options['fields']['field_better_standardized_tests']['table'] = 'field_data_field_better_standardized_tests';
  $handler->display->display_options['fields']['field_better_standardized_tests']['field'] = 'field_better_standardized_tests';
  $handler->display->display_options['fields']['field_better_standardized_tests']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_better_standardized_tests']['element_default_classes'] = FALSE;
  /* Field: Content: Define the term "watershed" */
  $handler->display->display_options['fields']['field_teacher_define_watershed']['id'] = 'field_teacher_define_watershed';
  $handler->display->display_options['fields']['field_teacher_define_watershed']['table'] = 'field_data_field_teacher_define_watershed';
  $handler->display->display_options['fields']['field_teacher_define_watershed']['field'] = 'field_teacher_define_watershed';
  $handler->display->display_options['fields']['field_teacher_define_watershed']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_define_watershed']['element_default_classes'] = FALSE;
  /* Field: Content: Define the term "watershed" */
  $handler->display->display_options['fields']['field_define_watershed']['id'] = 'field_define_watershed';
  $handler->display->display_options['fields']['field_define_watershed']['table'] = 'field_data_field_define_watershed';
  $handler->display->display_options['fields']['field_define_watershed']['field'] = 'field_define_watershed';
  $handler->display->display_options['fields']['field_define_watershed']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_define_watershed']['element_default_classes'] = FALSE;
  /* Field: Content: Identify actions individuals can engage in to protect/restore water quality in watersheds */
  $handler->display->display_options['fields']['field_teacher_identify_actions']['id'] = 'field_teacher_identify_actions';
  $handler->display->display_options['fields']['field_teacher_identify_actions']['table'] = 'field_data_field_teacher_identify_actions';
  $handler->display->display_options['fields']['field_teacher_identify_actions']['field'] = 'field_teacher_identify_actions';
  $handler->display->display_options['fields']['field_teacher_identify_actions']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_identify_actions']['element_default_classes'] = FALSE;
  /* Field: Content: Identify actions individuals can engage in to protect/restore water quality in watersheds */
  $handler->display->display_options['fields']['field_identify_actions']['id'] = 'field_identify_actions';
  $handler->display->display_options['fields']['field_identify_actions']['table'] = 'field_data_field_identify_actions';
  $handler->display->display_options['fields']['field_identify_actions']['field'] = 'field_identify_actions';
  $handler->display->display_options['fields']['field_identify_actions']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_identify_actions']['element_default_classes'] = FALSE;
  /* Field: Content: Identify connections between human welfare and water flow and quality */
  $handler->display->display_options['fields']['field_teacher_identify_human_con']['id'] = 'field_teacher_identify_human_con';
  $handler->display->display_options['fields']['field_teacher_identify_human_con']['table'] = 'field_data_field_teacher_identify_human_con';
  $handler->display->display_options['fields']['field_teacher_identify_human_con']['field'] = 'field_teacher_identify_human_con';
  $handler->display->display_options['fields']['field_teacher_identify_human_con']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_identify_human_con']['element_default_classes'] = FALSE;
  /* Field: Content: Identify connections between human welfare and water flow and quality */
  $handler->display->display_options['fields']['field_identify_human_connections']['id'] = 'field_identify_human_connections';
  $handler->display->display_options['fields']['field_identify_human_connections']['table'] = 'field_data_field_identify_human_connections';
  $handler->display->display_options['fields']['field_identify_human_connections']['field'] = 'field_identify_human_connections';
  $handler->display->display_options['fields']['field_identify_human_connections']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_identify_human_connections']['element_default_classes'] = FALSE;
  /* Field: Content: Identify how watersheds are connected to the ocean via streams, rivers, and human-made structures */
  $handler->display->display_options['fields']['field_identify_watershed_connect']['id'] = 'field_identify_watershed_connect';
  $handler->display->display_options['fields']['field_identify_watershed_connect']['table'] = 'field_data_field_identify_watershed_connect';
  $handler->display->display_options['fields']['field_identify_watershed_connect']['field'] = 'field_identify_watershed_connect';
  $handler->display->display_options['fields']['field_identify_watershed_connect']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_identify_watershed_connect']['element_default_classes'] = FALSE;
  /* Field: Content: Identify how watersheds are connected to the ocean via streams, rivers, and human-made structures */
  $handler->display->display_options['fields']['field_teacher_identify_watershed']['id'] = 'field_teacher_identify_watershed';
  $handler->display->display_options['fields']['field_teacher_identify_watershed']['table'] = 'field_data_field_teacher_identify_watershed';
  $handler->display->display_options['fields']['field_teacher_identify_watershed']['field'] = 'field_teacher_identify_watershed';
  $handler->display->display_options['fields']['field_teacher_identify_watershed']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_identify_watershed']['element_default_classes'] = FALSE;
  /* Field: Content: Identify possible point and non-point sources of water pollution */
  $handler->display->display_options['fields']['field_teacher_identify_pollution']['id'] = 'field_teacher_identify_pollution';
  $handler->display->display_options['fields']['field_teacher_identify_pollution']['table'] = 'field_data_field_teacher_identify_pollution';
  $handler->display->display_options['fields']['field_teacher_identify_pollution']['field'] = 'field_teacher_identify_pollution';
  $handler->display->display_options['fields']['field_teacher_identify_pollution']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_identify_pollution']['element_default_classes'] = FALSE;
  /* Field: Content: Identify possible point and non-point sources of water pollution */
  $handler->display->display_options['fields']['field_identify_pollution']['id'] = 'field_identify_pollution';
  $handler->display->display_options['fields']['field_identify_pollution']['table'] = 'field_data_field_identify_pollution';
  $handler->display->display_options['fields']['field_identify_pollution']['field'] = 'field_identify_pollution';
  $handler->display->display_options['fields']['field_identify_pollution']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_identify_pollution']['element_default_classes'] = FALSE;
  /* Field: Content: Identify the functions that occur in a watershed (transport, store, and cycle water) */
  $handler->display->display_options['fields']['field_identify_watershed_functio']['id'] = 'field_identify_watershed_functio';
  $handler->display->display_options['fields']['field_identify_watershed_functio']['table'] = 'field_data_field_identify_watershed_functio';
  $handler->display->display_options['fields']['field_identify_watershed_functio']['field'] = 'field_identify_watershed_functio';
  $handler->display->display_options['fields']['field_identify_watershed_functio']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_identify_watershed_functio']['element_default_classes'] = FALSE;
  /* Field: Content: Identify the functions that occur in a watershed (transport, store, and cycle water) */
  $handler->display->display_options['fields']['field_teacher_id_watershed_funct']['id'] = 'field_teacher_id_watershed_funct';
  $handler->display->display_options['fields']['field_teacher_id_watershed_funct']['table'] = 'field_data_field_teacher_id_watershed_funct';
  $handler->display->display_options['fields']['field_teacher_id_watershed_funct']['field'] = 'field_teacher_id_watershed_funct';
  $handler->display->display_options['fields']['field_teacher_id_watershed_funct']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_id_watershed_funct']['element_default_classes'] = FALSE;
  /* Field: Content: Identify their local watershed(s) */
  $handler->display->display_options['fields']['field_teacher_identify_local_wat']['id'] = 'field_teacher_identify_local_wat';
  $handler->display->display_options['fields']['field_teacher_identify_local_wat']['table'] = 'field_data_field_teacher_identify_local_wat';
  $handler->display->display_options['fields']['field_teacher_identify_local_wat']['field'] = 'field_teacher_identify_local_wat';
  $handler->display->display_options['fields']['field_teacher_identify_local_wat']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_identify_local_wat']['element_default_classes'] = FALSE;
  /* Field: Content: Identify their local watershed(s) */
  $handler->display->display_options['fields']['field_identify_local_watershed']['id'] = 'field_identify_local_watershed';
  $handler->display->display_options['fields']['field_identify_local_watershed']['table'] = 'field_data_field_identify_local_watershed';
  $handler->display->display_options['fields']['field_identify_local_watershed']['field'] = 'field_identify_local_watershed';
  $handler->display->display_options['fields']['field_identify_local_watershed']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_identify_local_watershed']['element_default_classes'] = FALSE;
  /* Field: Content: Recognize that both natural processes and human activities affect water flow and water quality in watersheds. */
  $handler->display->display_options['fields']['field_recognize_processes']['id'] = 'field_recognize_processes';
  $handler->display->display_options['fields']['field_recognize_processes']['table'] = 'field_data_field_recognize_processes';
  $handler->display->display_options['fields']['field_recognize_processes']['field'] = 'field_recognize_processes';
  $handler->display->display_options['fields']['field_recognize_processes']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_recognize_processes']['element_default_classes'] = FALSE;
  /* Field: Content: Recognize that both natural processes and human activities affect water flow and water quality in watersheds */
  $handler->display->display_options['fields']['field_teacher_recognize_processe']['id'] = 'field_teacher_recognize_processe';
  $handler->display->display_options['fields']['field_teacher_recognize_processe']['table'] = 'field_data_field_teacher_recognize_processe';
  $handler->display->display_options['fields']['field_teacher_recognize_processe']['field'] = 'field_teacher_recognize_processe';
  $handler->display->display_options['fields']['field_teacher_recognize_processe']['element_class'] = 'number groupStudent';
  $handler->display->display_options['fields']['field_teacher_recognize_processe']['element_default_classes'] = FALSE;
  /* Field: Content: A college-level course */
  $handler->display->display_options['fields']['field_teacher_college_level_cour']['id'] = 'field_teacher_college_level_cour';
  $handler->display->display_options['fields']['field_teacher_college_level_cour']['table'] = 'field_data_field_teacher_college_level_cour';
  $handler->display->display_options['fields']['field_teacher_college_level_cour']['field'] = 'field_teacher_college_level_cour';
  $handler->display->display_options['fields']['field_teacher_college_level_cour']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_college_level_cour']['element_default_classes'] = FALSE;
  /* Field: Content: Individual teacher coaching and support */
  $handler->display->display_options['fields']['field_teacher_coaching']['id'] = 'field_teacher_coaching';
  $handler->display->display_options['fields']['field_teacher_coaching']['table'] = 'field_data_field_teacher_coaching';
  $handler->display->display_options['fields']['field_teacher_coaching']['field'] = 'field_teacher_coaching';
  $handler->display->display_options['fields']['field_teacher_coaching']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_coaching']['element_default_classes'] = FALSE;
  /* Field: Content: Multi-day workshops */
  $handler->display->display_options['fields']['field_teacher_multi_day_workshop']['id'] = 'field_teacher_multi_day_workshop';
  $handler->display->display_options['fields']['field_teacher_multi_day_workshop']['table'] = 'field_data_field_teacher_multi_day_workshop';
  $handler->display->display_options['fields']['field_teacher_multi_day_workshop']['field'] = 'field_teacher_multi_day_workshop';
  $handler->display->display_options['fields']['field_teacher_multi_day_workshop']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_multi_day_workshop']['element_default_classes'] = FALSE;
  /* Field: Content: On-line professional development support */
  $handler->display->display_options['fields']['field_teacher_online_development']['id'] = 'field_teacher_online_development';
  $handler->display->display_options['fields']['field_teacher_online_development']['table'] = 'field_data_field_teacher_online_development';
  $handler->display->display_options['fields']['field_teacher_online_development']['field'] = 'field_teacher_online_development';
  $handler->display->display_options['fields']['field_teacher_online_development']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_online_development']['element_default_classes'] = FALSE;
  /* Field: Content: One day workshops (usually less than 8 hours) */
  $handler->display->display_options['fields']['field_teacher_one_day_workshops']['id'] = 'field_teacher_one_day_workshops';
  $handler->display->display_options['fields']['field_teacher_one_day_workshops']['table'] = 'field_data_field_teacher_one_day_workshops';
  $handler->display->display_options['fields']['field_teacher_one_day_workshops']['field'] = 'field_teacher_one_day_workshops';
  $handler->display->display_options['fields']['field_teacher_one_day_workshops']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_one_day_workshops']['element_default_classes'] = FALSE;
  /* Field: Content: Professional development provider training */
  $handler->display->display_options['fields']['field_teacher_training']['id'] = 'field_teacher_training';
  $handler->display->display_options['fields']['field_teacher_training']['table'] = 'field_data_field_teacher_training';
  $handler->display->display_options['fields']['field_teacher_training']['field'] = 'field_teacher_training';
  $handler->display->display_options['fields']['field_teacher_training']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_training']['element_default_classes'] = FALSE;
  /* Field: Content: Teacher institute */
  $handler->display->display_options['fields']['field_teacher_institute']['id'] = 'field_teacher_institute';
  $handler->display->display_options['fields']['field_teacher_institute']['table'] = 'field_data_field_teacher_institute';
  $handler->display->display_options['fields']['field_teacher_institute']['field'] = 'field_teacher_institute';
  $handler->display->display_options['fields']['field_teacher_institute']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_institute']['element_default_classes'] = FALSE;
  /* Field: Content: About how many hours did the typical teacher participate in outdoor activities as part of your organization's MWEE professional  */
  $handler->display->display_options['fields']['field_teacher_outdoor_activity']['id'] = 'field_teacher_outdoor_activity';
  $handler->display->display_options['fields']['field_teacher_outdoor_activity']['table'] = 'field_data_field_teacher_outdoor_activity';
  $handler->display->display_options['fields']['field_teacher_outdoor_activity']['field'] = 'field_teacher_outdoor_activity';
  $handler->display->display_options['fields']['field_teacher_outdoor_activity']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_outdoor_activity']['element_default_classes'] = FALSE;
  /* Field: Content: About how many hours of MWEE professional development and/or support did your organization typically provide for any one teacher */
  $handler->display->display_options['fields']['field_teacher_hours_pro_developm']['id'] = 'field_teacher_hours_pro_developm';
  $handler->display->display_options['fields']['field_teacher_hours_pro_developm']['table'] = 'field_data_field_teacher_hours_pro_developm';
  $handler->display->display_options['fields']['field_teacher_hours_pro_developm']['field'] = 'field_teacher_hours_pro_developm';
  $handler->display->display_options['fields']['field_teacher_hours_pro_developm']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_hours_pro_developm']['element_default_classes'] = FALSE;
  /* Field: Content: Allowed teachers time to plan how they will integrate the use of NOAA data */
  $handler->display->display_options['fields']['field_teacher_integrate_data']['id'] = 'field_teacher_integrate_data';
  $handler->display->display_options['fields']['field_teacher_integrate_data']['table'] = 'field_data_field_teacher_integrate_data';
  $handler->display->display_options['fields']['field_teacher_integrate_data']['field'] = 'field_teacher_integrate_data';
  $handler->display->display_options['fields']['field_teacher_integrate_data']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_integrate_data']['element_default_classes'] = FALSE;
  /* Field: Content: Did the majority of participating teachers teach science? */
  $handler->display->display_options['fields']['field_teacher_teach_science']['id'] = 'field_teacher_teach_science';
  $handler->display->display_options['fields']['field_teacher_teach_science']['table'] = 'field_data_field_teacher_teach_science';
  $handler->display->display_options['fields']['field_teacher_teach_science']['field'] = 'field_teacher_teach_science';
  $handler->display->display_options['fields']['field_teacher_teach_science']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_teach_science']['element_default_classes'] = FALSE;
  /* Field: Content: Discussed alignment of MWEEs with state, regional, or national standards */
  $handler->display->display_options['fields']['field_teacher_discuss_standards']['id'] = 'field_teacher_discuss_standards';
  $handler->display->display_options['fields']['field_teacher_discuss_standards']['table'] = 'field_data_field_teacher_discuss_standards';
  $handler->display->display_options['fields']['field_teacher_discuss_standards']['field'] = 'field_teacher_discuss_standards';
  $handler->display->display_options['fields']['field_teacher_discuss_standards']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_discuss_standards']['element_default_classes'] = FALSE;
  /* Field: Content: Discussed how teachers may be able to integrate MWEEs into their own curriculum or classroom activities */
  $handler->display->display_options['fields']['field_teacher_discuss_integratio']['id'] = 'field_teacher_discuss_integratio';
  $handler->display->display_options['fields']['field_teacher_discuss_integratio']['table'] = 'field_data_field_teacher_discuss_integratio';
  $handler->display->display_options['fields']['field_teacher_discuss_integratio']['field'] = 'field_teacher_discuss_integratio';
  $handler->display->display_options['fields']['field_teacher_discuss_integratio']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_discuss_integratio']['element_default_classes'] = FALSE;
  /* Field: Content: Discussed how to use NOAA data to obtain knowledge about local issues */
  $handler->display->display_options['fields']['field_teacher_discuss_data']['id'] = 'field_teacher_discuss_data';
  $handler->display->display_options['fields']['field_teacher_discuss_data']['table'] = 'field_data_field_teacher_discuss_data';
  $handler->display->display_options['fields']['field_teacher_discuss_data']['field'] = 'field_teacher_discuss_data';
  $handler->display->display_options['fields']['field_teacher_discuss_data']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_discuss_data']['element_default_classes'] = FALSE;
  /* Field: Content: Engaged teachers in aligning MWEEs with their school or school district standards */
  $handler->display->display_options['fields']['field_teacher_align_standards']['id'] = 'field_teacher_align_standards';
  $handler->display->display_options['fields']['field_teacher_align_standards']['table'] = 'field_data_field_teacher_align_standards';
  $handler->display->display_options['fields']['field_teacher_align_standards']['field'] = 'field_teacher_align_standards';
  $handler->display->display_options['fields']['field_teacher_align_standards']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_align_standards']['element_default_classes'] = FALSE;
  /* Field: Content: Included more than one teacher from individual schools */
  $handler->display->display_options['fields']['field_teacher_multiple']['id'] = 'field_teacher_multiple';
  $handler->display->display_options['fields']['field_teacher_multiple']['table'] = 'field_data_field_teacher_multiple';
  $handler->display->display_options['fields']['field_teacher_multiple']['field'] = 'field_teacher_multiple';
  $handler->display->display_options['fields']['field_teacher_multiple']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_multiple']['element_default_classes'] = FALSE;
  /* Field: Content: Presented how NOAA data can be used to support student scientific inquiry */
  $handler->display->display_options['fields']['field_teacher_present_data']['id'] = 'field_teacher_present_data';
  $handler->display->display_options['fields']['field_teacher_present_data']['table'] = 'field_data_field_teacher_present_data';
  $handler->display->display_options['fields']['field_teacher_present_data']['field'] = 'field_teacher_present_data';
  $handler->display->display_options['fields']['field_teacher_present_data']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_present_data']['element_default_classes'] = FALSE;
  /* Field: Content: Presented information and examples illustrating how teachers have integrated MWEEs */
  $handler->display->display_options['fields']['field_teacher_ex_integration']['id'] = 'field_teacher_ex_integration';
  $handler->display->display_options['fields']['field_teacher_ex_integration']['table'] = 'field_data_field_teacher_ex_integration';
  $handler->display->display_options['fields']['field_teacher_ex_integration']['field'] = 'field_teacher_ex_integration';
  $handler->display->display_options['fields']['field_teacher_ex_integration']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_ex_integration']['element_default_classes'] = FALSE;
  /* Field: Content: Provided examples of how MWEEs align with standards */
  $handler->display->display_options['fields']['field_teacher_ex_standards']['id'] = 'field_teacher_ex_standards';
  $handler->display->display_options['fields']['field_teacher_ex_standards']['table'] = 'field_data_field_teacher_ex_standards';
  $handler->display->display_options['fields']['field_teacher_ex_standards']['field'] = 'field_teacher_ex_standards';
  $handler->display->display_options['fields']['field_teacher_ex_standards']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_ex_standards']['element_default_classes'] = FALSE;
  /* Field: Content: Shared examples of how other teachers have used NOAA data with their students */
  $handler->display->display_options['fields']['field_teacher_ex_data']['id'] = 'field_teacher_ex_data';
  $handler->display->display_options['fields']['field_teacher_ex_data']['table'] = 'field_data_field_teacher_ex_data';
  $handler->display->display_options['fields']['field_teacher_ex_data']['field'] = 'field_teacher_ex_data';
  $handler->display->display_options['fields']['field_teacher_ex_data']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_ex_data']['element_default_classes'] = FALSE;
  /* Field: Content: Assisted teachers with conducting field trips or field work */
  $handler->display->display_options['fields']['field_teacher_conduct_fieldwork']['id'] = 'field_teacher_conduct_fieldwork';
  $handler->display->display_options['fields']['field_teacher_conduct_fieldwork']['table'] = 'field_data_field_teacher_conduct_fieldwork';
  $handler->display->display_options['fields']['field_teacher_conduct_fieldwork']['field'] = 'field_teacher_conduct_fieldwork';
  $handler->display->display_options['fields']['field_teacher_conduct_fieldwork']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_conduct_fieldwork']['element_default_classes'] = FALSE;
  /* Field: Content: Assisted teachers with establishing restoration projects */
  $handler->display->display_options['fields']['field_teacher_restoration']['id'] = 'field_teacher_restoration';
  $handler->display->display_options['fields']['field_teacher_restoration']['table'] = 'field_data_field_teacher_restoration';
  $handler->display->display_options['fields']['field_teacher_restoration']['field'] = 'field_teacher_restoration';
  $handler->display->display_options['fields']['field_teacher_restoration']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_restoration']['element_default_classes'] = FALSE;
  /* Field: Content: Assisted teachers with establishing schoolyard habitats */
  $handler->display->display_options['fields']['field_teacher_habitats']['id'] = 'field_teacher_habitats';
  $handler->display->display_options['fields']['field_teacher_habitats']['table'] = 'field_data_field_teacher_habitats';
  $handler->display->display_options['fields']['field_teacher_habitats']['field'] = 'field_teacher_habitats';
  $handler->display->display_options['fields']['field_teacher_habitats']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_habitats']['element_default_classes'] = FALSE;
  /* Field: Content: Assisted with the use of equipment or technologies */
  $handler->display->display_options['fields']['field_teacher_assist_tech']['id'] = 'field_teacher_assist_tech';
  $handler->display->display_options['fields']['field_teacher_assist_tech']['table'] = 'field_data_field_teacher_assist_tech';
  $handler->display->display_options['fields']['field_teacher_assist_tech']['field'] = 'field_teacher_assist_tech';
  $handler->display->display_options['fields']['field_teacher_assist_tech']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_assist_tech']['element_default_classes'] = FALSE;
  /* Field: Content: Co-teaching in teachers' classrooms or in field */
  $handler->display->display_options['fields']['field_teacher_co_teach']['id'] = 'field_teacher_co_teach';
  $handler->display->display_options['fields']['field_teacher_co_teach']['table'] = 'field_data_field_teacher_co_teach';
  $handler->display->display_options['fields']['field_teacher_co_teach']['field'] = 'field_teacher_co_teach';
  $handler->display->display_options['fields']['field_teacher_co_teach']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_co_teach']['element_default_classes'] = FALSE;
  /* Field: Content: Communicated with teachers through newsletters or web-site (e.g., an online community) */
  $handler->display->display_options['fields']['field_teacher_comm_online']['id'] = 'field_teacher_comm_online';
  $handler->display->display_options['fields']['field_teacher_comm_online']['table'] = 'field_data_field_teacher_comm_online';
  $handler->display->display_options['fields']['field_teacher_comm_online']['field'] = 'field_teacher_comm_online';
  $handler->display->display_options['fields']['field_teacher_comm_online']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_comm_online']['element_default_classes'] = FALSE;
  /* Field: Content: Communicated with teachers through personal phone calls or email */
  $handler->display->display_options['fields']['field_teacher_phone_email']['id'] = 'field_teacher_phone_email';
  $handler->display->display_options['fields']['field_teacher_phone_email']['table'] = 'field_data_field_teacher_phone_email';
  $handler->display->display_options['fields']['field_teacher_phone_email']['field'] = 'field_teacher_phone_email';
  $handler->display->display_options['fields']['field_teacher_phone_email']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_phone_email']['element_default_classes'] = FALSE;
  /* Field: Content: Provided coaching in participating teachers' classrooms */
  $handler->display->display_options['fields']['field_teacher_provide_coaching']['id'] = 'field_teacher_provide_coaching';
  $handler->display->display_options['fields']['field_teacher_provide_coaching']['table'] = 'field_data_field_teacher_provide_coaching';
  $handler->display->display_options['fields']['field_teacher_provide_coaching']['field'] = 'field_teacher_provide_coaching';
  $handler->display->display_options['fields']['field_teacher_provide_coaching']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_provide_coaching']['element_default_classes'] = FALSE;
  /* Field: Content: Provided demonstrations in teachers' classrooms */
  $handler->display->display_options['fields']['field_teacher_demos']['id'] = 'field_teacher_demos';
  $handler->display->display_options['fields']['field_teacher_demos']['table'] = 'field_data_field_teacher_demos';
  $handler->display->display_options['fields']['field_teacher_demos']['field'] = 'field_teacher_demos';
  $handler->display->display_options['fields']['field_teacher_demos']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_demos']['element_default_classes'] = FALSE;
  /* Field: Content: Facilitated interactions with natural resource professionals */
  $handler->display->display_options['fields']['field_teacher_other_pro_interact']['id'] = 'field_teacher_other_pro_interact';
  $handler->display->display_options['fields']['field_teacher_other_pro_interact']['table'] = 'field_data_field_teacher_other_pro_interact';
  $handler->display->display_options['fields']['field_teacher_other_pro_interact']['field'] = 'field_teacher_other_pro_interact';
  $handler->display->display_options['fields']['field_teacher_other_pro_interact']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_other_pro_interact']['element_default_classes'] = FALSE;
  /* Field: Content: Facilitated interactions with NOAA scientists/staff */
  $handler->display->display_options['fields']['field_teacher_noaa_interaction']['id'] = 'field_teacher_noaa_interaction';
  $handler->display->display_options['fields']['field_teacher_noaa_interaction']['table'] = 'field_data_field_teacher_noaa_interaction';
  $handler->display->display_options['fields']['field_teacher_noaa_interaction']['field'] = 'field_teacher_noaa_interaction';
  $handler->display->display_options['fields']['field_teacher_noaa_interaction']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_noaa_interaction']['element_default_classes'] = FALSE;
  /* Field: Content: Helped make connections to local community organizations and resources */
  $handler->display->display_options['fields']['field_teacher_local_connections']['id'] = 'field_teacher_local_connections';
  $handler->display->display_options['fields']['field_teacher_local_connections']['table'] = 'field_data_field_teacher_local_connections';
  $handler->display->display_options['fields']['field_teacher_local_connections']['field'] = 'field_teacher_local_connections';
  $handler->display->display_options['fields']['field_teacher_local_connections']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_local_connections']['element_default_classes'] = FALSE;
  /* Field: Content: Offered continuing education credits */
  $handler->display->display_options['fields']['field_teacher_cont_edu_credit']['id'] = 'field_teacher_cont_edu_credit';
  $handler->display->display_options['fields']['field_teacher_cont_edu_credit']['table'] = 'field_data_field_teacher_cont_edu_credit';
  $handler->display->display_options['fields']['field_teacher_cont_edu_credit']['field'] = 'field_teacher_cont_edu_credit';
  $handler->display->display_options['fields']['field_teacher_cont_edu_credit']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_cont_edu_credit']['element_default_classes'] = FALSE;
  /* Field: Content: Offered graduate credits */
  $handler->display->display_options['fields']['field_teacher_grad_credit']['id'] = 'field_teacher_grad_credit';
  $handler->display->display_options['fields']['field_teacher_grad_credit']['table'] = 'field_data_field_teacher_grad_credit';
  $handler->display->display_options['fields']['field_teacher_grad_credit']['field'] = 'field_teacher_grad_credit';
  $handler->display->display_options['fields']['field_teacher_grad_credit']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_grad_credit']['element_default_classes'] = FALSE;
  /* Field: Content: Provided equipment */
  $handler->display->display_options['fields']['field_teacher_equipment']['id'] = 'field_teacher_equipment';
  $handler->display->display_options['fields']['field_teacher_equipment']['table'] = 'field_data_field_teacher_equipment';
  $handler->display->display_options['fields']['field_teacher_equipment']['field'] = 'field_teacher_equipment';
  $handler->display->display_options['fields']['field_teacher_equipment']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_equipment']['element_default_classes'] = FALSE;
  /* Field: Content: Provided information on how to obtain grants or funding for MWEEs */
  $handler->display->display_options['fields']['field_teacher_grant_info']['id'] = 'field_teacher_grant_info';
  $handler->display->display_options['fields']['field_teacher_grant_info']['table'] = 'field_data_field_teacher_grant_info';
  $handler->display->display_options['fields']['field_teacher_grant_info']['field'] = 'field_teacher_grant_info';
  $handler->display->display_options['fields']['field_teacher_grant_info']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_grant_info']['element_default_classes'] = FALSE;
  /* Field: Content: Provided instructional/educational/curriculum materials */
  $handler->display->display_options['fields']['field_teacher_provided_edu_mater']['id'] = 'field_teacher_provided_edu_mater';
  $handler->display->display_options['fields']['field_teacher_provided_edu_mater']['table'] = 'field_data_field_teacher_provided_edu_mater';
  $handler->display->display_options['fields']['field_teacher_provided_edu_mater']['field'] = 'field_teacher_provided_edu_mater';
  $handler->display->display_options['fields']['field_teacher_provided_edu_mater']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_provided_edu_mater']['element_default_classes'] = FALSE;
  /* Field: Content: Provided teacher stipends */
  $handler->display->display_options['fields']['field_teacher_stipends']['id'] = 'field_teacher_stipends';
  $handler->display->display_options['fields']['field_teacher_stipends']['table'] = 'field_data_field_teacher_stipends';
  $handler->display->display_options['fields']['field_teacher_stipends']['field'] = 'field_teacher_stipends';
  $handler->display->display_options['fields']['field_teacher_stipends']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_stipends']['element_default_classes'] = FALSE;
  /* Field: Content: Be more enthusiastic about teaching science */
  $handler->display->display_options['fields']['field_teacher__enthusiastic']['id'] = 'field_teacher__enthusiastic';
  $handler->display->display_options['fields']['field_teacher__enthusiastic']['table'] = 'field_data_field_teacher__enthusiastic';
  $handler->display->display_options['fields']['field_teacher__enthusiastic']['field'] = 'field_teacher__enthusiastic';
  $handler->display->display_options['fields']['field_teacher__enthusiastic']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher__enthusiastic']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to act to protect and/or restore ocean, coastal, or Great Lakes watersheds */
  $handler->display->display_options['fields']['field_teacher_act_to_protect']['id'] = 'field_teacher_act_to_protect';
  $handler->display->display_options['fields']['field_teacher_act_to_protect']['table'] = 'field_data_field_teacher_act_to_protect';
  $handler->display->display_options['fields']['field_teacher_act_to_protect']['field'] = 'field_teacher_act_to_protect';
  $handler->display->display_options['fields']['field_teacher_act_to_protect']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_act_to_protect']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to guide students through taking action to protect or restore watersheds */
  $handler->display->display_options['fields']['field_teacher_guide_students']['id'] = 'field_teacher_guide_students';
  $handler->display->display_options['fields']['field_teacher_guide_students']['table'] = 'field_data_field_teacher_guide_students';
  $handler->display->display_options['fields']['field_teacher_guide_students']['field'] = 'field_teacher_guide_students';
  $handler->display->display_options['fields']['field_teacher_guide_students']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_guide_students']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to implement MWEEs */
  $handler->display->display_options['fields']['field_teacher_implement_mwee']['id'] = 'field_teacher_implement_mwee';
  $handler->display->display_options['fields']['field_teacher_implement_mwee']['table'] = 'field_data_field_teacher_implement_mwee';
  $handler->display->display_options['fields']['field_teacher_implement_mwee']['field'] = 'field_teacher_implement_mwee';
  $handler->display->display_options['fields']['field_teacher_implement_mwee']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_implement_mwee']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to implement MWEEs after they are no longer supported by our organization */
  $handler->display->display_options['fields']['field_teacher_implement_mwee_aft']['id'] = 'field_teacher_implement_mwee_aft';
  $handler->display->display_options['fields']['field_teacher_implement_mwee_aft']['table'] = 'field_data_field_teacher_implement_mwee_aft';
  $handler->display->display_options['fields']['field_teacher_implement_mwee_aft']['field'] = 'field_teacher_implement_mwee_aft';
  $handler->display->display_options['fields']['field_teacher_implement_mwee_aft']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_implement_mwee_aft']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to use interdisciplinary approaches to instruction */
  $handler->display->display_options['fields']['field_teacher__interdisciplinary']['id'] = 'field_teacher__interdisciplinary';
  $handler->display->display_options['fields']['field_teacher__interdisciplinary']['table'] = 'field_data_field_teacher__interdisciplinary';
  $handler->display->display_options['fields']['field_teacher__interdisciplinary']['field'] = 'field_teacher__interdisciplinary';
  $handler->display->display_options['fields']['field_teacher__interdisciplinary']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher__interdisciplinary']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to use local community resources as part of instruction */
  $handler->display->display_options['fields']['field_teacher_local_resources']['id'] = 'field_teacher_local_resources';
  $handler->display->display_options['fields']['field_teacher_local_resources']['table'] = 'field_data_field_teacher_local_resources';
  $handler->display->display_options['fields']['field_teacher_local_resources']['field'] = 'field_teacher_local_resources';
  $handler->display->display_options['fields']['field_teacher_local_resources']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_local_resources']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to use NOAA resources to enhance their students' MWEE experiences */
  $handler->display->display_options['fields']['field_teacher_use_resources']['id'] = 'field_teacher_use_resources';
  $handler->display->display_options['fields']['field_teacher_use_resources']['table'] = 'field_data_field_teacher_use_resources';
  $handler->display->display_options['fields']['field_teacher_use_resources']['field'] = 'field_teacher_use_resources';
  $handler->display->display_options['fields']['field_teacher_use_resources']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_use_resources']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to use science inquiry instruction */
  $handler->display->display_options['fields']['field_teacher_science_instructio']['id'] = 'field_teacher_science_instructio';
  $handler->display->display_options['fields']['field_teacher_science_instructio']['table'] = 'field_data_field_teacher_science_instructio';
  $handler->display->display_options['fields']['field_teacher_science_instructio']['field'] = 'field_teacher_science_instructio';
  $handler->display->display_options['fields']['field_teacher_science_instructio']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_science_instructio']['element_default_classes'] = FALSE;
  /* Field: Content: Be more likely to use the outdoors for instruction */
  $handler->display->display_options['fields']['field_teacher_outdoor_instructio']['id'] = 'field_teacher_outdoor_instructio';
  $handler->display->display_options['fields']['field_teacher_outdoor_instructio']['table'] = 'field_data_field_teacher_outdoor_instructio';
  $handler->display->display_options['fields']['field_teacher_outdoor_instructio']['field'] = 'field_teacher_outdoor_instructio';
  $handler->display->display_options['fields']['field_teacher_outdoor_instructio']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_outdoor_instructio']['element_default_classes'] = FALSE;
  /* Field: Content: Teach more about watersheds */
  $handler->display->display_options['fields']['field_teacher_teach_watershed']['id'] = 'field_teacher_teach_watershed';
  $handler->display->display_options['fields']['field_teacher_teach_watershed']['table'] = 'field_data_field_teacher_teach_watershed';
  $handler->display->display_options['fields']['field_teacher_teach_watershed']['field'] = 'field_teacher_teach_watershed';
  $handler->display->display_options['fields']['field_teacher_teach_watershed']['element_class'] = 'number groupTeacher';
  $handler->display->display_options['fields']['field_teacher_teach_watershed']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_program_other']['id'] = 'field_program_other';
  $handler->display->display_options['fields']['field_program_other']['table'] = 'field_data_field_program_other';
  $handler->display->display_options['fields']['field_program_other']['field'] = 'field_program_other';
  $handler->display->display_options['fields']['field_program_other']['label'] = 'Did your organization provide other B-WET funded programs?';
  $handler->display->display_options['fields']['field_program_other']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_program_other']['element_default_classes'] = FALSE;
  /* Field: Content: Impact */
  $handler->display->display_options['fields']['field_impact']['id'] = 'field_impact';
  $handler->display->display_options['fields']['field_impact']['table'] = 'field_data_field_impact';
  $handler->display->display_options['fields']['field_impact']['field'] = 'field_impact';
  $handler->display->display_options['fields']['field_impact']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact']['element_default_classes'] = FALSE;
  /* Field: Content: Needs assessment */
  $handler->display->display_options['fields']['field_needs_assessment']['id'] = 'field_needs_assessment';
  $handler->display->display_options['fields']['field_needs_assessment']['table'] = 'field_data_field_needs_assessment';
  $handler->display->display_options['fields']['field_needs_assessment']['field'] = 'field_needs_assessment';
  $handler->display->display_options['fields']['field_needs_assessment']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_needs_assessment']['element_default_classes'] = FALSE;
  /* Field: Content: Outcome */
  $handler->display->display_options['fields']['field_outcome']['id'] = 'field_outcome';
  $handler->display->display_options['fields']['field_outcome']['table'] = 'field_data_field_outcome';
  $handler->display->display_options['fields']['field_outcome']['field'] = 'field_outcome';
  $handler->display->display_options['fields']['field_outcome']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_outcome']['element_default_classes'] = FALSE;
  /* Field: Content: Process/implementation */
  $handler->display->display_options['fields']['field_process_implementation']['id'] = 'field_process_implementation';
  $handler->display->display_options['fields']['field_process_implementation']['table'] = 'field_data_field_process_implementation';
  $handler->display->display_options['fields']['field_process_implementation']['field'] = 'field_process_implementation';
  $handler->display->display_options['fields']['field_process_implementation']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_process_implementation']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_evaluation']['id'] = 'field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['field'] = 'field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['label'] = 'Which of the following best describes the situation with regard to evaluation(s) of your organization\'s B-WET-funded programs?';
  $handler->display->display_options['fields']['field_evaluation']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_evaluation']['element_default_classes'] = FALSE;
  /* Field: Content: As a result of NOAA B-WET, the public is more familiar with NOAA, such as NOAA science, resources, and experts. */
  $handler->display->display_options['fields']['field_public_familiar']['id'] = 'field_public_familiar';
  $handler->display->display_options['fields']['field_public_familiar']['table'] = 'field_data_field_public_familiar';
  $handler->display->display_options['fields']['field_public_familiar']['field'] = 'field_public_familiar';
  $handler->display->display_options['fields']['field_public_familiar']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_public_familiar']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA B-WET has - or will have - a positive impact on environmental education in my area's formal education system. */
  $handler->display->display_options['fields']['field_impact_env_edu']['id'] = 'field_impact_env_edu';
  $handler->display->display_options['fields']['field_impact_env_edu']['table'] = 'field_data_field_impact_env_edu';
  $handler->display->display_options['fields']['field_impact_env_edu']['field'] = 'field_impact_env_edu';
  $handler->display->display_options['fields']['field_impact_env_edu']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_env_edu']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA B-WET has had - or will have - a positive impact on education policy in my area. */
  $handler->display->display_options['fields']['field_impact_edu_policy']['id'] = 'field_impact_edu_policy';
  $handler->display->display_options['fields']['field_impact_edu_policy']['table'] = 'field_data_field_impact_edu_policy';
  $handler->display->display_options['fields']['field_impact_edu_policy']['field'] = 'field_impact_edu_policy';
  $handler->display->display_options['fields']['field_impact_edu_policy']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_edu_policy']['element_default_classes'] = FALSE;
  /* Field: Content: NOAA B-WET has had - or will have - a positive impact on environmental policy in my area. */
  $handler->display->display_options['fields']['field_impact_env_policy']['id'] = 'field_impact_env_policy';
  $handler->display->display_options['fields']['field_impact_env_policy']['table'] = 'field_data_field_impact_env_policy';
  $handler->display->display_options['fields']['field_impact_env_policy']['field'] = 'field_impact_env_policy';
  $handler->display->display_options['fields']['field_impact_env_policy']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_env_policy']['element_default_classes'] = FALSE;
  /* Field: Content: Please explain why you selected the response you did. */
  $handler->display->display_options['fields']['field_impact_env_policy_text']['id'] = 'field_impact_env_policy_text';
  $handler->display->display_options['fields']['field_impact_env_policy_text']['table'] = 'field_data_field_impact_env_policy_text';
  $handler->display->display_options['fields']['field_impact_env_policy_text']['field'] = 'field_impact_env_policy_text';
  $handler->display->display_options['fields']['field_impact_env_policy_text']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_env_policy_text']['element_default_classes'] = FALSE;
  /* Field: Content: Please explain why you selected the response you did. */
  $handler->display->display_options['fields']['field_public_familiar_text']['id'] = 'field_public_familiar_text';
  $handler->display->display_options['fields']['field_public_familiar_text']['table'] = 'field_data_field_public_familiar_text';
  $handler->display->display_options['fields']['field_public_familiar_text']['field'] = 'field_public_familiar_text';
  $handler->display->display_options['fields']['field_public_familiar_text']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_public_familiar_text']['element_default_classes'] = FALSE;
  /* Field: Content: Please explain why you selected the response you did. */
  $handler->display->display_options['fields']['field_impact_health_text']['id'] = 'field_impact_health_text';
  $handler->display->display_options['fields']['field_impact_health_text']['table'] = 'field_data_field_impact_health_text';
  $handler->display->display_options['fields']['field_impact_health_text']['field'] = 'field_impact_health_text';
  $handler->display->display_options['fields']['field_impact_health_text']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_health_text']['element_default_classes'] = FALSE;
  /* Field: Content: Please explain why you selected the response you did. */
  $handler->display->display_options['fields']['field_improve_env_edu_text']['id'] = 'field_improve_env_edu_text';
  $handler->display->display_options['fields']['field_improve_env_edu_text']['table'] = 'field_data_field_improve_env_edu_text';
  $handler->display->display_options['fields']['field_improve_env_edu_text']['field'] = 'field_improve_env_edu_text';
  $handler->display->display_options['fields']['field_improve_env_edu_text']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_improve_env_edu_text']['element_default_classes'] = FALSE;
  /* Field: Content: Please explain why you selected the response you did. */
  $handler->display->display_options['fields']['field_impact_edu_policy_text']['id'] = 'field_impact_edu_policy_text';
  $handler->display->display_options['fields']['field_impact_edu_policy_text']['table'] = 'field_data_field_impact_edu_policy_text';
  $handler->display->display_options['fields']['field_impact_edu_policy_text']['field'] = 'field_impact_edu_policy_text';
  $handler->display->display_options['fields']['field_impact_edu_policy_text']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_edu_policy_text']['element_default_classes'] = FALSE;
  /* Field: Content: Please explain why you selected the response you did. */
  $handler->display->display_options['fields']['field_impact_env_edu_text']['id'] = 'field_impact_env_edu_text';
  $handler->display->display_options['fields']['field_impact_env_edu_text']['table'] = 'field_data_field_impact_env_edu_text';
  $handler->display->display_options['fields']['field_impact_env_edu_text']['field'] = 'field_impact_env_edu_text';
  $handler->display->display_options['fields']['field_impact_env_edu_text']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_env_edu_text']['element_default_classes'] = FALSE;
  /* Field: Content: The B-WET grant has improved - or will improve - the overall quality of environmental education provided by my organization. */
  $handler->display->display_options['fields']['field_improve_env_edu']['id'] = 'field_improve_env_edu';
  $handler->display->display_options['fields']['field_improve_env_edu']['table'] = 'field_data_field_improve_env_edu';
  $handler->display->display_options['fields']['field_improve_env_edu']['field'] = 'field_improve_env_edu';
  $handler->display->display_options['fields']['field_improve_env_edu']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_improve_env_edu']['element_default_classes'] = FALSE;
  /* Field: Content: The health of our local watershed(s) has improved - or will improve - as a result of my organization's B-WET-funded professional */
  $handler->display->display_options['fields']['field_impact_health']['id'] = 'field_impact_health';
  $handler->display->display_options['fields']['field_impact_health']['table'] = 'field_data_field_impact_health';
  $handler->display->display_options['fields']['field_impact_health']['field'] = 'field_impact_health';
  $handler->display->display_options['fields']['field_impact_health']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_impact_health']['element_default_classes'] = FALSE;
  /* Field: Content: Anything else you would like to add? */
  $handler->display->display_options['fields']['field_anything_else']['id'] = 'field_anything_else';
  $handler->display->display_options['fields']['field_anything_else']['table'] = 'field_data_field_anything_else';
  $handler->display->display_options['fields']['field_anything_else']['field'] = 'field_anything_else';
  $handler->display->display_options['fields']['field_anything_else']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_anything_else']['element_default_classes'] = FALSE;
  /* Field: Content: How can this questionnaire be improved? */
  $handler->display->display_options['fields']['field_question_improved']['id'] = 'field_question_improved';
  $handler->display->display_options['fields']['field_question_improved']['table'] = 'field_data_field_question_improved';
  $handler->display->display_options['fields']['field_question_improved']['field'] = 'field_question_improved';
  $handler->display->display_options['fields']['field_question_improved']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_question_improved']['element_default_classes'] = FALSE;
  /* Field: Content: This questionnaire was .... */
  $handler->display->display_options['fields']['field_question_informative']['id'] = 'field_question_informative';
  $handler->display->display_options['fields']['field_question_informative']['table'] = 'field_data_field_question_informative';
  $handler->display->display_options['fields']['field_question_informative']['field'] = 'field_question_informative';
  $handler->display->display_options['fields']['field_question_informative']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_question_informative']['element_default_classes'] = FALSE;
  /* Field: Content: This questionnaire was .... */
  $handler->display->display_options['fields']['field_question_complete']['id'] = 'field_question_complete';
  $handler->display->display_options['fields']['field_question_complete']['table'] = 'field_data_field_question_complete';
  $handler->display->display_options['fields']['field_question_complete']['field'] = 'field_question_complete';
  $handler->display->display_options['fields']['field_question_complete']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_question_complete']['element_default_classes'] = FALSE;
  /* Field: Content: This questionnaire was .... */
  $handler->display->display_options['fields']['field_question_length']['id'] = 'field_question_length';
  $handler->display->display_options['fields']['field_question_length']['table'] = 'field_data_field_question_length';
  $handler->display->display_options['fields']['field_question_length']['field'] = 'field_question_length';
  $handler->display->display_options['fields']['field_question_length']['element_class'] = 'number groupEvaluation';
  $handler->display->display_options['fields']['field_question_length']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'test';
  $export['grantee_survey'] = $view;

  return $export;
}
