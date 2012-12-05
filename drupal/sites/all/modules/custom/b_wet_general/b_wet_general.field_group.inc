<?php
/**
 * @file
 * b_wet_general.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function b_wet_general_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_as_a_result|node|teacher_survey|form';
  $field_group->group_name = 'group_as_a_result';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'As a result of participating in the MWEE professional development, I am better able to:',
    'weight' => '31',
    'children' => array(
      0 => 'field_teacher_define_watershed',
      1 => 'field_teacher_identify_local_wat',
      2 => 'field_teacher_identify_watershed',
      3 => 'field_teacher_id_watershed_funct',
      4 => 'field_teacher_recognize_processe',
      5 => 'field_teacher_identify_human_con',
      6 => 'field_teacher_identify_pollution',
      7 => 'field_teacher_identify_actions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_as_a_result|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_before_after_future|node|teacher_survey|form';
  $field_group->group_name = 'group_before_after_future';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'For each statement, select one response for BEFORE, one response for AFTER, and one response for FUTURE',
    'weight' => '36',
    'children' => array(
      0 => 'field_teach_my_students_before',
      1 => 'field_teach_my_students_after',
      2 => 'field_teach_my_students_future',
      3 => 'field_incorporate_mwees_before',
      4 => 'field_incorporate_mwees_after',
      5 => 'field_incorporate_mwees_future',
      6 => 'field_implement_mwees_before',
      7 => 'field_implement_mwees_after',
      8 => 'field_implement_mwees_future',
      9 => 'field_use_noaa_resources_before',
      10 => 'field_use_noaa_resources_after',
      11 => 'field_use_noaa_resources_future',
      12 => 'field_guide_students_before',
      13 => 'field_guide_students_after',
      14 => 'field_guide_students_future',
      15 => 'field_research_env_before',
      16 => 'field_research_env_after',
      17 => 'field_research_env_future',
      18 => 'field_scientific_inquiry_before',
      19 => 'field_scientific_inquiry_after',
      20 => 'field_scientific_inquiry_future',
      21 => 'field_use_the_outdoors_before',
      22 => 'field_use_the_outdoors_after',
      23 => 'field_use_the_outdoors_future',
      24 => 'field_act_to_protect_before',
      25 => 'field_act_to_protect_after',
      26 => 'field_act_to_protect_future',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_before_after_future|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edu_method|node|teacher_survey|form';
  $field_group->group_name = 'group_edu_method';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'What education methods were used during your MWEE professional development? (select No or Yes  for each method)',
    'weight' => '21',
    'children' => array(
      0 => 'field_method_outdoor',
      1 => 'field_method_field_work',
      2 => 'field_method_place_based',
      3 => 'field_method_issue_investigation',
      4 => 'field_method_service_learning',
      5 => 'field_teacher_method_scientific_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_edu_method|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_education_methods|node|grantee_survey|form';
  $field_group->group_name = 'group_education_methods';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'What education methods were used by your organization’s staff with students during your organization\'s typical B-WET-funded MWEE',
    'weight' => '19',
    'children' => array(
      0 => 'field_method_outdoor',
      1 => 'field_method_field_work',
      2 => 'field_method_place_based',
      3 => 'field_method_scientific_inquiry',
      4 => 'field_method_issue_investigation',
      5 => 'field_method_service_learning',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What education methods were used by your organization’s staff with students during your organization\'s typical B-WET-funded MWEE',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'What education methods were used by your organization’s staff with students during your organization\'s typical B-WET-funded MWEE?',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_education_methods|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evaluation|node|grantee_survey|form';
  $field_group->group_name = 'group_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page6';
  $field_group->data = array(
    'label' => 'What type of evaluation has been completed?',
    'weight' => '159',
    'children' => array(
      0 => 'field_needs_assessment',
      1 => 'field_process_implementation',
      2 => 'field_outcome',
      3 => 'field_impact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_evaluation|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_future_involvement|node|grantee_survey|form';
  $field_group->group_name = 'group_future_involvement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page3';
  $field_group->data = array(
    'label' => 'In the future, how likely is it that you will make use of each of the following to help you implement your B-WET-funded programs',
    'weight' => '10',
    'children' => array(
      0 => 'field_one_on_one',
      1 => 'field_network_my_region',
      2 => 'field_network_other_region',
      3 => 'field_virtual_interaction',
      4 => 'field_subject_matter_experts',
      5 => 'field_noaa_datasets',
      6 => 'field_noaa_lessonplans',
      7 => 'field_best_practices',
      8 => 'field_evaluation_assistance',
      9 => 'field_grant_management_assistanc',
      10 => 'field_learn_watershed',
      11 => 'field_learn_environmental_issues',
      12 => 'field_learn_local_policy',
      13 => 'field_learn_national_policy',
      14 => 'field_opportunities_change',
      15 => 'field_opportunities_ocean',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'In the future, how likely is it that you will make use of each of the following to help you implement your B-WET-funded programs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'In the future, how likely is it that you will make use of each of the following to help you implement your B-WET-funded programs?',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_future_involvement|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_involvement|node|grantee_survey|form';
  $field_group->group_name = 'group_involvement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page1';
  $field_group->data = array(
    'label' => 'To what extent were you involved in:',
    'weight' => '6',
    'children' => array(
      0 => 'field_develop_proposal',
      1 => 'field_implementing_grant',
      2 => 'field_evaluating_grant',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'To what extent were you involved in:',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_involvement|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mwee_aligined_with|node|grantee_survey|form';
  $field_group->group_name = 'group_mwee_aligined_with';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'To what extent were your organization\'s MWEEs aligned with:',
    'weight' => '11',
    'children' => array(
      0 => 'field_standards_school_district',
      1 => 'field_standards_state',
      2 => 'field_standards_national',
      3 => 'field_standards_regional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'To what extent were your organization\'s MWEEs aligned with:',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_mwee_aligined_with|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_noaa_resources|node|teacher_survey|form';
  $field_group->group_name = 'group_noaa_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'If yes, Which NOAA resources were used as part of your MWEE professional development?',
    'weight' => '20',
    'children' => array(
      0 => 'field_teacher_esources_noaa_expe',
      1 => 'field_teacher_resources_marine_s',
      2 => 'field_teacher_resources_estuarin',
      3 => 'field_teacher_data_collected',
      4 => 'field_teacher_data_other',
      5 => 'field_teacher_edu_program',
      6 => 'field_teacher_edu_other',
      7 => 'field_teacher_labs_facilities',
      8 => 'field_teacher_lab_other',
      9 => 'field_information_from_noaa_rese',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_noaa_resources|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_students|node|grantee_survey|form';
  $field_group->group_name = 'group_number_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'How many students, schools, and school districts were served directly by your organization this past grant year as a result of y',
    'weight' => '7',
    'children' => array(
      0 => 'field_students_served',
      1 => 'field_schools_served',
      2 => 'field_school_districts_served',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'How many students, schools, and school districts were served directly by your organization this past grant year as a result of y',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => '<p>Please answer the following questions with regard to the instruction your organization provides <span class="underlineText">directly</span> to 
students (not the instruction provided by teachers).</p><p>&nbsp;</p>
<p>How many students, schools, and school districts were served directly by your organization this past grant year as a result of your B-WET grant? (Please provide one number, NOT a range.)</p>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_number_students|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_outcome_impact|node|grantee_survey|form';
  $field_group->group_name = 'group_outcome_impact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page6';
  $field_group->data = array(
    'label' => 'Please answer the following questions with regard to the outcome or impact evaluation your organization completed. If your organ',
    'weight' => '160',
    'children' => array(
      0 => 'field_if_selected_please_provide',
      1 => 'field_led_evaluation_new',
      2 => 'field_led_evaluation_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Please answer the following questions with regard to the outcome or impact evaluation your organization completed. If your organ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'IF SELECTED OUTCOME or IMPACT EVALUATION: Please answer the following questions with regard to the 
outcome or impact evaluation your organization completed. If your organization completed more than one 
outcome or impact evaluation, please answer the following questions based on the evaluation with the most 
rigorous research (e.g., valid/reliable instruments, appropriate sampling, use of control/comparison groups, 
content analysis of qualitative data, etc.) methods.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_outcome_impact|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page1|node|grantee_survey|form';
  $field_group->group_name = 'group_page1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 1',
    'weight' => '0',
    'children' => array(
      0 => 'field_operate_program',
      1 => 'title',
      2 => 'group_involvement',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 1',
    ),
  );
  $export['group_page1|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page2|node|grantee_survey|form';
  $field_group->group_name = 'group_page2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 2',
    'weight' => '1',
    'children' => array(
      0 => 'field_zipcode',
      1 => 'field_noaa_funding',
      2 => 'field_funding_all',
      3 => 'field_years_noaa_funding',
      4 => 'field_project_existence',
      5 => 'field_in_which_region_s_were_you',
      6 => 'field_region_other',
      7 => 'field_organization_no_select',
      8 => 'field_organization_other',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 2',
    ),
  );
  $export['group_page2|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page3|node|grantee_survey|form';
  $field_group->group_name = 'group_page3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 3',
    'weight' => '2',
    'children' => array(
      0 => 'field_grade',
      1 => 'field_grade_explain',
      2 => 'group_future_involvement',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 3',
    ),
  );
  $export['group_page3|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page4|node|grantee_survey|form';
  $field_group->group_name = 'group_page4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 4',
    'weight' => '3',
    'children' => array(
      0 => 'field_mwee_students',
      1 => 'field_title_1',
      2 => 'field_per_esl',
      3 => 'field_hours_taught',
      4 => 'field_hours_taught_outdoors',
      5 => 'field_length_participation',
      6 => 'field_focus_on_science',
      7 => 'field_were_any_noaa_resources_we',
      8 => 'group_education_methods',
      9 => 'group_mwee_aligined_with',
      10 => 'group_number_students',
      11 => 'group_percent_students',
      12 => 'group_provide_for_students',
      13 => 'group_resources_group',
      14 => 'group_science',
      15 => 'group_student_restore',
      16 => 'group_students_able',
      17 => 'group_students_will',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 4',
    ),
  );
  $export['group_page4|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page5|node|grantee_survey|form';
  $field_group->group_name = 'group_page5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 5',
    'weight' => '4',
    'children' => array(
      0 => 'field_mwee_professional',
      1 => 'group_teacher_development',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 5',
    ),
  );
  $export['group_page5|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page6|node|grantee_survey|form';
  $field_group->group_name = 'group_page6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 6',
    'weight' => '5',
    'children' => array(
      0 => 'field_evaluation_test',
      1 => 'group_evaluation',
      2 => 'group_outcome_impact',
      3 => 'group_report_evidence',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 6',
    ),
  );
  $export['group_page6|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page7|node|grantee_survey|form';
  $field_group->group_name = 'group_page7';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 7',
    'weight' => '6',
    'children' => array(
      0 => 'field_public_familiar',
      1 => 'field_public_familiar_text',
      2 => 'field_improve_env_edu',
      3 => 'field_improve_env_edu_text',
      4 => 'field_impact_env_edu',
      5 => 'field_impact_env_edu_text',
      6 => 'field_impact_edu_policy',
      7 => 'field_impact_edu_policy_text',
      8 => 'field_impact_env_policy',
      9 => 'field_impact_env_policy_text',
      10 => 'field_impact_health',
      11 => 'field_impact_health_text',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 7',
    ),
  );
  $export['group_page7|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page8|node|grantee_survey|form';
  $field_group->group_name = 'group_page8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'page 8',
    'weight' => '7',
    'children' => array(
      0 => 'field_question_complete',
      1 => 'field_question_informative',
      2 => 'field_question_length',
      3 => 'field_question_improved',
      4 => 'field_anything_else',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'page 8',
    ),
  );
  $export['group_page8|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_percent_students|node|grantee_survey|form';
  $field_group->group_name = 'group_percent_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'What percent of the students/youth directly served by your organization were in each of the following grade levels? (total shoul',
    'weight' => '8',
    'children' => array(
      0 => 'field_per_prek_3',
      1 => 'field_per_4_5',
      2 => 'field_per_6_8',
      3 => 'field_per_9_12',
      4 => 'field_per_other',
      5 => 'field_i_don_t_know_the_percent',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What percent of the students/youth directly served by your organization were in each of the following grade levels? (total shoul',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'What percent of the students/youth directly served by your organization were in each of the following grade levels? (total should equal 100%)',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_percent_students|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practice_rank|node|teacher_survey|form';
  $field_group->group_name = 'group_practice_rank';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_practices';
  $field_group->data = array(
    'label' => 'Please rank the 3 practices were most valuable in helping you implement MWEEs. (1 is the most valuable)',
    'weight' => '87',
    'children' => array(
      0 => 'field_connections_1',
      1 => 'field_interactions_1',
      2 => 'field_interactions_pro_1',
      3 => 'field_stipend_1',
      4 => 'field_i_was_offered_continuing_1',
      5 => 'field_i_was_offered_graduate_1',
      6 => 'field_i_was_provided_equipm_1',
      7 => 'field__was_provided_instruc_1',
      8 => 'field_i_was_provided_inform_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Please rank the 3 practices were most valuable in helping you implement MWEEs. (1 is the most valuable)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_practice_rank|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practices|node|teacher_survey|form';
  $field_group->group_name = 'group_practices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'Which additional practices did your MWEE professional development and/or the support you received include? (a) Please indicate yes or no for each statement. (b) Then indicate which 3 practices were most valuable in helping you implement MWEEs.',
    'weight' => '27',
    'children' => array(
      0 => 'field_connections_were_made_to_l',
      1 => 'field_interactions_were_facilita',
      2 => 'field_interactions_pro',
      3 => 'field_stipend',
      4 => 'field_i_was_offered_continuing_e',
      5 => 'field_i_was_offered_graduate_cre',
      6 => 'field_i_was_provided_with_equipm',
      7 => 'field__was_provided_with_instruc',
      8 => 'field_i_was_provided_with_inform',
      9 => 'group_practice_rank',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Which additional practices did your MWEE professional development and/or the support you received  include? (a) Please indicate ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_practices|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pro_development_practices|node|teacher_survey|form';
  $field_group->group_name = 'group_pro_development_practices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'Did the workshops, institutes, or classes you participated in include the following professional development practices? (a) Please indicate yes or no for each statement. (b) Then indicate which 3 practices were most valuable in helping you implement MWEEs.',
    'weight' => '24',
    'children' => array(
      0 => 'field_sharing_of_information_and',
      1 => 'field_discussion_of_how_teachers',
      2 => 'field_discussion_of_alignment_of',
      3 => 'field_provision_of_examples_of_h',
      4 => 'field_engaging_you_and_other_par',
      5 => 'field_participating_along_with_o',
      6 => 'field_allowing_you_and_other_par',
      7 => 'field_engaging_practices',
      8 => 'field_presentation_of_how_noaa_d',
      9 => 'field_discussion_of_how_noaa_dat',
      10 => 'field_examples_of_how_other_teac',
      11 => 'field_allow_you_and_other_partic',
      12 => 'group_pro_development_rank',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Did the workshops, institutes, or classes you participated in include the following professional  development practices? Ple',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_pro_development_practices|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pro_development_rank|node|teacher_survey|form';
  $field_group->group_name = 'group_pro_development_rank';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pro_development_practices';
  $field_group->data = array(
    'label' => 'Please rank the 3 practices were most valuable in helping you implement MWEEs. (1 is the most valuable)',
    'weight' => '125',
    'children' => array(
      0 => 'field_sharing_of_information_1',
      1 => 'field_discussion_teachers_1',
      2 => 'field_discussion_of_alignment_1',
      3 => 'field_provision_of_examples_1',
      4 => 'field_engaging_you_and_other_1',
      5 => 'field_participating_along_1',
      6 => 'field_allowing_you_and_other_1',
      7 => 'field_engaging_practices_1',
      8 => 'field_presentation_of_how_noaa_1',
      9 => 'field_discussion_of_how_noaa_1',
      10 => 'field_examples_of_how_other_1',
      11 => 'field_allow_you_and_other_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Please rank the 3 practices were most valuable in helping you implement MWEEs. (1 is the most valuable)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_pro_development_rank|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_programs|node|grantee_survey|form';
  $field_group->group_name = 'group_programs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page2';
  $field_group->data = array(
    'label' => 'Which of the following B-WET-funded programs did your organization provide?',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_programs|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_protect_activities|node|teacher_survey|form';
  $field_group->group_name = 'group_protect_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'During your MWEE professional development, did you participate in any of these activities that  protect and/or restore ocean, co',
    'weight' => '28',
    'children' => array(
      0 => 'field_created_habitat',
      1 => 'field_installed_rain_barrel',
      2 => 'field_gave_presentations',
      3 => 'field_participated_event',
      4 => 'field_clean_up',
      5 => 'field_told_others',
      6 => 'field_monitored_water_quality',
      7 => 'field_participated_in_a_restorat',
      8 => 'field_limited_or_avoided_the_use',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'During your MWEE professional development, did you participate in any of these activities that  protect and/or restore ocean, co',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'During your MWEE professional development, did you participate in any of these activities that protect and/or restore ocean, coastal, and/or Great Lakes watersheds?',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_protect_activities|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_provide_for_students|node|grantee_survey|form';
  $field_group->group_name = 'group_provide_for_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'Which of the following did your B-WET-funded programs provide for students during this past grant year?',
    'weight' => '12',
    'children' => array(
      0 => 'field_off_site_programs',
      1 => 'field_schoolyard_programs',
      2 => 'field_classroom_programs',
      3 => 'field_summer_programs',
      4 => 'field_events',
      5 => 'field_after_school_program',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_provide_for_students|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_report_evidence|node|grantee_survey|form';
  $field_group->group_name = 'group_report_evidence';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page6';
  $field_group->data = array(
    'label' => 'Does the evaluation report include evidence of:',
    'weight' => '161',
    'children' => array(
      0 => 'field_eval_increase_knowledge',
      1 => 'field_eval_change_attitude',
      2 => 'field_eval_increase_in_skiills',
      3 => 'field_eval_intentions_to_act',
      4 => 'field_eval_engage_in_actions',
      5 => 'field_eval_improved_water_qualit',
      6 => 'field_eval_academic_performance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Does the evaluation report include evidence of:',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_report_evidence|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources_group|node|grantee_survey|form';
  $field_group->group_name = 'group_resources_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'Which NOAA resources were used as part of MWEEs for students, if any?',
    'weight' => '18',
    'children' => array(
      0 => 'field_information_for_noaa',
      1 => 'field_resources_noaa_expert',
      2 => 'field_resources_marine_sanctuary',
      3 => 'field_resources_estuarine_resear',
      4 => 'field_resources_noaa_data_new',
      5 => 'field_resource_noaa_data_other',
      6 => 'field_noaa_programs',
      7 => 'field_noaa_programs_other',
      8 => 'field_noaa_labs_or_facilities',
      9 => 'field_noaa_faciliities_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resources_group|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science_yes|node|teacher_survey|form';
  $field_group->group_name = 'group_science_yes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'If responded Yes to “Scientific-inquiry-based learning”  As part of your MWEE professional development, were you involved in...',
    'weight' => '22',
    'children' => array(
      0 => 'field_science_questions',
      1 => 'field_science__hypotheses',
      2 => 'field_science_data',
      3 => 'field_science_analyzing',
      4 => 'field_science_conclusions',
      5 => 'field_science_presentations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'If responded Yes to “Scientific-inquiry-based learning”  As part of your MWEE professional development, were you involved in...',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'If responded Yes to “Scientific-inquiry-based learning”<br/>
As part of your MWEE professional development, were you involved in...',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_science_yes|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_science|node|grantee_survey|form';
  $field_group->group_name = 'group_science';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'Which of the following steps did you include: Engage students in:',
    'weight' => '20',
    'children' => array(
      0 => 'field_science_questions',
      1 => 'field_science__hypotheses',
      2 => 'field_science_data',
      3 => 'field_science_analyzing',
      4 => 'field_science_conclusions',
      5 => 'field_science_presentations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Which of the following steps did you include: Engage students in:',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'IF SELECTED Scientific-inquiry learning above: Which of the following steps did you include?
Engage students in:',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_science|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_ethnicity|node|teacher_survey|form';
  $field_group->group_name = 'group_student_ethnicity';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'About what percent of your students are (percent should equal 100): ',
    'weight' => '12',
    'children' => array(
      0 => 'field_hispanic_or_latino',
      1 => 'field_american_indian_or_alaska_',
      2 => 'field_asian',
      3 => 'field_black_or_african_american',
      4 => 'field_native_hawaiian_or_other_p',
      5 => 'field_white',
      6 => 'field_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_student_ethnicity|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_instruction|node|grantee_survey|form';
  $field_group->group_name = 'group_student_instruction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'Please answer the following questions with regard to the instruction your organization provides directly to students',
    'weight' => '7',
    'children' => array(
      0 => 'field_title_1',
      1 => 'field_per_esl',
      2 => 'field_hours_taught',
      3 => 'field_hours_taught_outdoors',
      4 => 'field_length_participation',
      5 => 'field_focus_on_science',
      6 => 'field_were_any_noaa_resources_we',
      7 => 'group_number_students',
      8 => 'group_percent_students',
      9 => 'group_mwee_aligined_with',
      10 => 'group_provide_for_students',
      11 => 'group_resources_group',
      12 => 'group_education_methods',
      13 => 'group_science',
      14 => 'group_student_restore',
      15 => 'group_students_will',
      16 => 'group_students_able',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'page_header' => 3,
        'move_additional' => 1,
        'page_counter' => 1,
        'move_button' => 0,
      ),
    ),
  );
  $export['group_student_instruction|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_restore|node|grantee_survey|form';
  $field_group->group_name = 'group_student_restore';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'Did students participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds durin',
    'weight' => '21',
    'children' => array(
      0 => 'field_created_habitat',
      1 => 'field_conserved_water',
      2 => 'field_installed_rain_barrel',
      3 => 'field_gave_presentations',
      4 => 'field_reduced_litter',
      5 => 'field_participated_event',
      6 => 'field_clean_up',
      7 => 'field_restoration_activity',
      8 => 'field_told_others',
      9 => 'field_monitored_water_quality',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Did students participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds durin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'Did students participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds during your organization’s B-WET-funded MWEEs? (please indicate no or yes for each activity)',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_student_restore|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_students_able|node|grantee_survey|form';
  $field_group->group_name = 'group_students_able';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded MWEEs that students will be able to:',
    'weight' => '23',
    'children' => array(
      0 => 'field_define_watershed',
      1 => 'field_identify_local_watershed',
      2 => 'field_identify_watershed_connect',
      3 => 'field_identify_watershed_functio',
      4 => 'field_recognize_processes',
      5 => 'field_identify_human_connections',
      6 => 'field_identify_pollution',
      7 => 'field_identify_actions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_students_able|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_students_likely|node|grantee_survey|form';
  $field_group->group_name = 'group_students_likely';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded MWEEs that students will be more likely to:',
    'weight' => '46',
    'children' => array(
      0 => 'field_goal_create_habitat',
      1 => 'field_goal_save_water',
      2 => 'field_goal_install_rain_barrel',
      3 => 'field_goal_give_presentations',
      4 => 'field_goal_participate_event',
      5 => 'field_goal_help_cleanup',
      6 => 'field_goal_participate_restorati',
      7 => 'field_goal_tell_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_students_likely|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_students_will|node|grantee_survey|form';
  $field_group->group_name = 'group_students_will';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page4';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded MWEEs that students will:',
    'weight' => '22',
    'children' => array(
      0 => 'field_feel_connected',
      1 => 'field_express_concern',
      2 => 'field_confident_to_protect',
      3 => 'field_likely_to_protect',
      4 => 'field_conduct_investigations',
      5 => 'field_express_interest',
      6 => 'field_better_academically',
      7 => 'field_better_standardized_tests',
      8 => 'field_more_engaged',
      9 => 'field_know_more_about_the_ocean_',
      10 => 'field_know_more_about_climate_ch',
      11 => 'field_be_better_able_to_make_inf',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_students_will|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support_implement|node|teacher_survey|form';
  $field_group->group_name = 'group_support_implement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'Please rank the 3 practices were most valuable in helping you implement MWEEs. (1 is the most valuable)',
    'weight' => '26',
    'children' => array(
      0 => 'field_assistance_with_conduct_1',
      1 => 'field_assistance_with_est_1',
      2 => 'field_assistance_projects_1',
      3 => 'field_co_teaching_in_classroom_1',
      4 => 'field_coaching_in_my_classroom_1',
      5 => 'field_demonstrations__class_1',
      6 => 'field_assistance_use_of_1',
      7 => 'field_communicating_with_1',
      8 => 'field_communication_provide_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Please rank the 3 practices were most valuable in helping you implement MWEEs. (1 is the most valuable)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_support_implement|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_support|node|teacher_survey|form';
  $field_group->group_name = 'group_support';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'What types of support did you receive from your MWEE professional development provider? (a) Please indicate yes or no for each statement. (b) Then indicate which 3 practices were most valuable in helping you implement MWEEs.',
    'weight' => '25',
    'children' => array(
      0 => 'field_assistance_with_conducting',
      1 => 'field_assistance_with_establishi',
      2 => 'field_assistance_with_projects',
      3 => 'field_co_teaching_in_my_classroo',
      4 => 'field_coaching_in_my_classroom',
      5 => 'field_demonstrations_in_my_class',
      6 => 'field_assistance_with_the_use_of',
      7 => 'field_communicating_with_provide',
      8 => 'field_communication_with_provide',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What types of support did you receive from your MWEE professional development provider? (a)  Please indicate yes or no for each ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_support|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_able|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_able';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded professional development that teachers will be able to:',
    'weight' => '33',
    'children' => array(
      0 => 'field_teacher_term_watershed_',
      1 => 'field_identify_their_local_water',
      2 => 'field_identify_how_watersheds_ar',
      3 => 'field_identify_the_functions_tha',
      4 => 'field_recognize_that_both_natura',
      5 => 'field_identify_connections_betwe',
      6 => 'field_identify_possible_point_an',
      7 => 'field_identify_actions_individua',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'It is a goal of my organization’s B-WET-funded professional development that teachers will be able to:',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_able|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_dev_align|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_dev_align';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'To what extent was your organization\'s MWEE professional development content aligned with:',
    'weight' => '23',
    'children' => array(
      0 => 'field_teacher_school_district',
      1 => 'field_teacher_state_standards',
      2 => 'field_teacher_national_standards',
      3 => 'field_teacher_regional_prioritie',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teacher_dev_align|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_dev_character|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_dev_character';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'Which characteristics describe your organization\'s typical MWEE professional development this past grant year?',
    'weight' => '31',
    'children' => array(
      0 => 'field_teacher_local_connections',
      1 => 'field_teacher_noaa_interaction',
      2 => 'field_teacher_other_pro_interact',
      3 => 'field_teacher_stipends',
      4 => 'field_teacher_cont_edu_credit',
      5 => 'field_teacher_grad_credit',
      6 => 'field_teacher_equipment',
      7 => 'field_teacher_provided_edu_mater',
      8 => 'field_teacher_grant_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teacher_dev_character|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_dev_goal|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_dev_goal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded MWEE professional development that teachers will:',
    'weight' => '34',
    'children' => array(
      0 => 'field_teacher_teach_watershed',
      1 => 'field_teacher_implement_mwee',
      2 => 'field_teacher_implement_mwee_aft',
      3 => 'field_teacher_use_resources',
      4 => 'field_teacher_guide_students',
      5 => 'field_teacher_science_instructio',
      6 => 'field_teacher_outdoor_instructio',
      7 => 'field_teacher_local_resources',
      8 => 'field_teacher__interdisciplinary',
      9 => 'field_teacher__enthusiastic',
      10 => 'field_teacher_act_to_protect',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'It is a goal of my organization’s B-WET-funded MWEE professional development that teachers will:',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_dev_goal|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_development|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_development';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_page5';
  $field_group->data = array(
    'label' => 'Please answer the following questions with regard to the professional development your organization provides to teachers.',
    'weight' => '50',
    'children' => array(
      0 => 'field_teacher_teach_science',
      1 => 'field_teacher_hours_pro_developm',
      2 => 'field_teacher_outdoor_activity',
      3 => 'field_noaa_resources_teachers',
      4 => 'group_teacher_able',
      5 => 'group_teacher_dev_align',
      6 => 'group_teacher_dev_character',
      7 => 'group_teacher_dev_goal',
      8 => 'group_teacher_edu_methods',
      9 => 'group_teacher_per_taught',
      10 => 'group_teacher_pro_development',
      11 => 'group_teacher_resources_group',
      12 => 'group_teacher_science',
      13 => 'group_teacher_support',
      14 => 'group_teacher_watershed',
      15 => 'group_teacher_workshops',
      16 => 'group_teachers_number_supported',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'page_header' => 3,
        'move_additional' => 1,
        'page_counter' => 1,
        'move_button' => 0,
      ),
    ),
  );
  $export['group_teacher_development|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_edu_methods|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_edu_methods';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'What education methods were used during your MWEE professional development?',
    'weight' => '26',
    'children' => array(
      0 => 'field_teacher_method_issue_inves',
      1 => 'field_outdoor_trip_teacher_1',
      2 => 'field_field_work_teacher_1',
      3 => 'field_place_based_teacher_1',
      4 => 'field_scientific_inquiry_based_1',
      5 => 'field_teacher_investigation_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teacher_edu_methods|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_main|node|teacher_survey|form';
  $field_group->group_name = 'group_teacher_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Please answer all of the following questions based on the last MWEE (watershed education) professional development you participated in.',
    'weight' => '4',
    'children' => array(
      0 => 'field_zipcode',
      1 => 'field_grade',
      2 => 'field_grade_explain',
      3 => 'field_per_esl',
      4 => 'field_teacher_hours_pro_developm',
      5 => 'field_teacher_outdoor_activity',
      6 => 'field_question_complete',
      7 => 'field_question_informative',
      8 => 'field_question_length',
      9 => 'field_question_improved',
      10 => 'field_noaa_resources_teachers',
      11 => 'field_in_which_region_s_were_you',
      12 => 'field_in_which_grade_level_s_do_',
      13 => 'field_what_subject_s_do_you_prim',
      14 => 'field_which_of_these_categories_',
      15 => 'field_do_you_identify_yourself_a',
      16 => 'field_is_the_school_where_you_te',
      17 => 'field_did_you_conduct_mwees_with',
      18 => 'field_what_was_your_primary_reas',
      19 => 'field_did_you_participate_in_an_',
      20 => 'field_did_your_b_wet_professiona',
      21 => 'field_what_noaa_does',
      22 => 'field_noaa_science_data',
      23 => 'field_noaa_edu_resources',
      24 => 'field_what_component_s_of_the_mw',
      25 => 'field_how_could_the_mwee_profess',
      26 => 'field_any_other_comments_about_t',
      27 => 'field_if_other_please_describe',
      28 => 'title',
      29 => 'path',
      30 => 'group_as_a_result',
      31 => 'group_before_after_future',
      32 => 'group_edu_method',
      33 => 'group_noaa_resources',
      34 => 'group_practices',
      35 => 'group_pro_development_practices',
      36 => 'group_protect_activities',
      37 => 'group_science_yes',
      38 => 'group_student_ethnicity',
      39 => 'group_support_implement',
      40 => 'group_support',
      41 => 'group_which_type_pro_develop',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Please answer all of the following questions based on the last MWEE (watershed education)  professional development you particip',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_main|node|teacher_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_per_taught|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_per_taught';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'What percent of the participating teachers taught the following grades? (total should equal 100%)',
    'weight' => '19',
    'children' => array(
      0 => 'field_teacher_prek_3',
      1 => 'field_teacher_grades_4_5',
      2 => 'field_teacher_grades_6_8',
      3 => 'field_teacher_grades_9_12',
      4 => 'field_teacher_other_per',
      5 => 'field_i_don_t_know_the_percent_t',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What percent of the participating teachers taught the following grades? (total should equal 100%)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_per_taught|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_pro_development|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_pro_development';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'Which of the following types of B-WET-funded MWEE professional development did you typically provide over the past grant year?',
    'weight' => '17',
    'children' => array(
      0 => 'field_teacher_one_day_workshops',
      1 => 'field_teacher_institute',
      2 => 'field_teacher_multi_day_workshop',
      3 => 'field_teacher_college_level_cour',
      4 => 'field_teacher_training',
      5 => 'field_teacher_coaching',
      6 => 'field_teacher_online_development',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teacher_pro_development|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_resources_group|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_resources_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'Which NOAA resources were incorporated into your organization\'s typical B-WET-funded MWEE professional development?',
    'weight' => '25',
    'children' => array(
      0 => 'field_teacher_data_collected',
      1 => 'field_teacher_data_other',
      2 => 'field_teacher_edu_program',
      3 => 'field_teacher_edu_other',
      4 => 'field_teacher_labs_facilities',
      5 => 'field_teacher_lab_other',
      6 => 'field_information_from_noaa_1',
      7 => 'field_noaa_expert_1',
      8 => 'field_noaa_national_marine_1',
      9 => 'field_noaa_national_estuarine_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teacher_resources_group|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_science|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_science';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'Which of the following steps did you include? Engaged teachers in',
    'weight' => '28',
    'children' => array(
      0 => 'field_teacher_science_questions',
      1 => 'field_teacher_science_hypotheses',
      2 => 'field_teacher_science_data',
      3 => 'field_teacher_science_analyzing',
      4 => 'field_teacher_science_conclusion',
      5 => 'field_teacher_science_presentati',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Which of the following steps did you include? Engaged teachers in',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'IF SELECTED Scientific-inquiry learning above: Which of the following steps did you include?
Engaged teachers in:',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_science|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_support|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_support';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'What types of support did your organization typically provide to teachers participating in MWEE professional development this pa',
    'weight' => '30',
    'children' => array(
      0 => 'field_teacher_conduct_fieldwork',
      1 => 'field_teacher_habitats',
      2 => 'field_teacher_restoration',
      3 => 'field_teacher_co_teach',
      4 => 'field_teacher_provide_coaching',
      5 => 'field_teacher_demos',
      6 => 'field_teacher_assist_tech',
      7 => 'field_teacher_phone_email',
      8 => 'field_teacher_comm_online',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'What types of support did your organization typically provide to teachers participating in MWEE professional development this pa',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'What types of support did your organization typically provide to teachers participating in MWEE professional development this past grant year?',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_support|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_watershed|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_watershed';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'Did teachers participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds durin',
    'weight' => '32',
    'children' => array(
      0 => 'field_teacher_created_habitat',
      1 => 'field_teacher_installed_rain_bar',
      2 => 'field_teacher_gave_presentations',
      3 => 'field_teacher_participated_event',
      4 => 'field_teacher_clean_up',
      5 => 'field_teacher_restoration_activi',
      6 => 'field_teacher_limited_chemicals',
      7 => 'field_teacher_told_others',
      8 => 'field_teacher_monitored_water_qu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Did teachers participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds durin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'Did teachers participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds <span class="underlineText">during their MWEE professional development</span>?',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_watershed|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_workshops|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_workshops';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'As part of your B-WET professional development workshops or institutes this past grant year, did your organization typically inc',
    'weight' => '29',
    'children' => array(
      0 => 'field_teacher_ex_integration',
      1 => 'field_teacher_discuss_integratio',
      2 => 'field_teacher_discuss_standards',
      3 => 'field_teacher_ex_standards',
      4 => 'field_teacher_align_standards',
      5 => 'field_teacher_implement',
      6 => 'field_teacher_activities',
      7 => 'field_teacher_multiple',
      8 => 'field_teacher_present_data',
      9 => 'field_teacher_discuss_data',
      10 => 'field_teacher_ex_data',
      11 => 'field_teacher_integrate_data',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'As part of your B-WET professional development workshops or institutes this past grant year, did your organization typically inc',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'As part of your B-WET professional development workshops or institutes this past grant year, did your organization typically include the following:',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teacher_workshops|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teachers_number_supported|node|grantee_survey|form';
  $field_group->group_name = 'group_teachers_number_supported';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'For about how many teachers, schools, and school districts did your organization provide professional development or support',
    'weight' => '18',
    'children' => array(
      0 => 'field_teachers_served',
      1 => 'field_teachers_k_12_served',
      2 => 'field_teachers_school_districts_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'For about how many teachers, schools, and school districts did your organization provide professional development or support',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'For about how many teachers, schools, and school districts did your organization provide professional development or support (e.g., trained in workshops, coached at schools or in the field) this past grant year as a result of your B-WET grant? (Please provide one number, NOT a range.)',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_teachers_number_supported|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_which_type_pro_develop|node|teacher_survey|form';
  $field_group->group_name = 'group_which_type_pro_develop';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'teacher_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_main';
  $field_group->data = array(
    'label' => 'Which type(s) of MWEE professional development did you participate in or receive: (please select yes  or no for each type)',
    'weight' => '16',
    'children' => array(
      0 => 'field_teacher_one_day_workshops',
      1 => 'field_teacher_institute',
      2 => 'field_teacher_multi_day_workshop',
      3 => 'field_teacher_college_level_cour',
      4 => 'field_teacher_training',
      5 => 'field_teacher_coaching',
      6 => 'field_teacher_online_development',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_which_type_pro_develop|node|teacher_survey|form'] = $field_group;

  return $export;
}
