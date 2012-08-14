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
  $field_group->data = '';
  $export['group_education_methods|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evaluation|node|grantee_survey|form';
  $field_group->group_name = 'group_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_evaluation|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_future_involvement|node|grantee_survey|form';
  $field_group->group_name = 'group_future_involvement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_future_involvement|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_involvement|node|grantee_survey|form';
  $field_group->group_name = 'group_involvement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
  $export['group_number_students|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_percent_students|node|grantee_survey|form';
  $field_group->group_name = 'group_percent_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_student_instruction';
  $field_group->data = '';
  $export['group_percent_students|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_programs|node|grantee_survey|form';
  $field_group->group_name = 'group_programs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
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
  $field_group->data = '';
  $export['group_provide_for_students|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_report_evidence|node|grantee_survey|form';
  $field_group->group_name = 'group_report_evidence';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
  $export['group_science|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_instruction|node|grantee_survey|form';
  $field_group->group_name = 'group_student_instruction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
  $export['group_teacher_dev_goal|node|grantee_survey|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teacher_development|node|grantee_survey|form';
  $field_group->group_name = 'group_teacher_development';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'grantee_survey';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
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
  $field_group->data = '';
  $export['group_teachers_number_supported|node|grantee_survey|form'] = $field_group;

  return $export;
}
