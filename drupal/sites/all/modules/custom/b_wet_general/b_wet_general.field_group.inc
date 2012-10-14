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
  $field_group->identifier = 'group_education_methods|node|grantee_survey|form';
  $field_group->group_name = 'group_education_methods';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'What education methods were used by your organization’s staff with students during your organization\'s typical B-WET-funded MWEE',
    'weight' => '44',
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
    'weight' => '158',
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
      7 => 'field_access_research',
      8 => 'field_best_practices',
      9 => 'field_evaluation_assistance',
      10 => 'field_grant_management_assistanc',
      11 => 'field_learn_watershed',
      12 => 'field_learn_environmental_issues',
      13 => 'field_learn_local_policy',
      14 => 'field_learn_national_policy',
      15 => 'field_opportunities_change',
      16 => 'field_opportunities_ocean',
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
    'weight' => '3',
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
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'To what extent were your organization\'s MWEEs aligned with',
    'weight' => '36',
    'children' => array(
      0 => 'field_standards_school_district',
      1 => 'field_standards_state',
      2 => 'field_standards_national',
      3 => 'field_standards_regional',
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
  $export['group_mwee_aligined_with|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_number_students|node|grantee_survey|form';
  $field_group->group_name = 'group_number_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'How many students, schools, and school districts were served directly by your organization this past grant year as a result of y',
    'weight' => '32',
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
        'description' => 'How many students, schools, and school districts were served directly by your organization this past grant year as a result of your B-WET grant? (Please provide one number, NOT a range.)',
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
    'weight' => '159',
    'children' => array(
      0 => 'field_led_evaluation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Please answer the following questions with regard to the outcome or impact evaluation your organization completed. If your organ',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'longText',
        'description' => 'Please answer the following questions with regard to the outcome or impact evaluation your organization completed. If your organization completed more than one outcome or impact evaluation, please answer the following questions based on the evaluation with the most rigorous research (e.g., valid/reliable instruments, appropriate sampling, use of control/comparison groups, content analysis of qualitative data, etc.) methods:',
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
    'label' => 'Page 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_operate_program',
      1 => 'title',
      2 => 'group_involvement',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Page 1',
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
    'label' => 'Page 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_zipcode',
      1 => 'field_noaa_funding',
      2 => 'field_funding_all',
      3 => 'field_years_noaa_funding',
      4 => 'field_project_existence',
      5 => 'field_region',
      6 => 'field_organization',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
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
    'label' => 'Page 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_grade',
      1 => 'field_grade_explain',
      2 => 'group_future_involvement',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
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
    'label' => 'Page 4',
    'weight' => '4',
    'children' => array(
      0 => 'field_mwee_students',
      1 => 'group_student_instruction',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
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
    'label' => 'Page 5',
    'weight' => '5',
    'children' => array(
      0 => 'field_mwee_professional',
      1 => 'group_teacher_development',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
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
    'label' => 'Page 6',
    'weight' => '6',
    'children' => array(
      0 => 'field_evaluation',
      1 => 'field_program_other',
      2 => 'group_evaluation',
      3 => 'group_report_evidence',
      4 => 'group_outcome_impact',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
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
    'label' => 'Page 7',
    'weight' => '7',
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
      'formatter' => '',
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
    'label' => 'Page 8',
    'weight' => '8',
    'children' => array(
      0 => 'field_question_complete',
      1 => 'field_question_informative',
      2 => 'field_question_length',
      3 => 'field_question_improved',
      4 => 'field_anything_else',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
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
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'What percent of the students/youth directly served by your organization were in each of the following grade levels? (total shoul',
    'weight' => '33',
    'children' => array(
      0 => 'field_per_prek_3',
      1 => 'field_per_4_5',
      2 => 'field_per_6_8',
      3 => 'field_per_9_12',
      4 => 'field_per_dont_know',
      5 => 'field_per_other',
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
  $field_group->identifier = 'group_provide_for_students|node|grantee_survey|form';
  $field_group->group_name = 'group_provide_for_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'Which of the following did your B-WET-funded programs provide for students during this past grant year?',
    'weight' => '37',
    'children' => array(
      0 => 'field_off_site_programs',
      1 => 'field_schoolyard_programs',
      2 => 'field_classroom_programs',
      3 => 'field_after_school_programs',
      4 => 'field_summer_programs',
      5 => 'field_events',
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
    'label' => 'Does the evaluation report include evidence of',
    'weight' => '160',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
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
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'Which NOAA resources were used as part of MWEEs for students, if any?',
    'weight' => '43',
    'children' => array(
      0 => 'field_information_for_noaa',
      1 => 'field_resources_noaa_data',
      2 => 'field_resources_noaa_expert',
      3 => 'field_resources_education_progra',
      4 => 'field_resources_facilities',
      5 => 'field_resources_marine_sanctuary',
      6 => 'field_resources_estuarine_resear',
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
  $field_group->identifier = 'group_science|node|grantee_survey|form';
  $field_group->group_name = 'group_science';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'Which of the following steps did you include: Engage students in:',
    'weight' => '45',
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
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'Did students participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds durin',
    'weight' => '46',
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
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded MWEEs that students will be able to:',
    'weight' => '48',
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
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded MWEEs that students will:',
    'weight' => '47',
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
  $field_group->identifier = 'group_teacher_able|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_able';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'It is a goal of my organization’s B-WET-funded professional development that teachers will be able to',
    'weight' => '32',
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
    'weight' => '30',
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
    'label' => 'It is a goal of my organization’s B-WET-funded MWEE professional development that teachers will',
    'weight' => '33',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
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
    'weight' => '8',
    'children' => array(
      0 => 'field_teacher_teach_science',
      1 => 'field_teacher_hours_pro_developm',
      2 => 'field_teacher_outdoor_activity',
      3 => 'field_noaa_resources_teachers',
      4 => 'group_teacher_pro_development',
      5 => 'group_teachers_number_supported',
      6 => 'group_teacher_per_taught',
      7 => 'group_teacher_dev_align',
      8 => 'group_teacher_resources_group',
      9 => 'group_teacher_edu_methods',
      10 => 'group_teacher_science',
      11 => 'group_teacher_workshops',
      12 => 'group_teacher_support',
      13 => 'group_teacher_dev_character',
      14 => 'group_teacher_watershed',
      15 => 'group_teacher_able',
      16 => 'group_teacher_dev_goal',
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
      0 => 'field_teacher_method_outdoor',
      1 => 'field_teacher_method_field_work',
      2 => 'field_teacher_method_place_based',
      3 => 'field_teacher_method_scientific_',
      4 => 'field_teacher_method_issue_inves',
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
  $field_group->identifier = 'group_teacher_per_taught|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_per_taught';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_teacher_development';
  $field_group->data = array(
    'label' => 'What percent of the participating teachers taught the following grades?',
    'weight' => '19',
    'children' => array(
      0 => 'field_teacher_prek_3',
      1 => 'field_teacher_grades_4_5',
      2 => 'field_teacher_grades_6_8',
      3 => 'field_teacher_grades_9_12',
      4 => 'field_teacher_grades_dont_know',
      5 => 'field_teacher_other_per',
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
      0 => 'field_teacher_resources_noaa_dat',
      1 => 'field_teacher_esources_noaa_expe',
      2 => 'field_teacher_information_for_no',
      3 => 'field_teacher_resources_edu_prog',
      4 => 'field_teacher_resources_faciliti',
      5 => 'field_teacher_resources_marine_s',
      6 => 'field_teacher_resources_estuarin',
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
    'weight' => '27',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
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
    'weight' => '29',
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
    'weight' => '31',
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
        'description' => 'Did teachers participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds during their MWEE professional development?',
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
    'weight' => '28',
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

  return $export;
}
