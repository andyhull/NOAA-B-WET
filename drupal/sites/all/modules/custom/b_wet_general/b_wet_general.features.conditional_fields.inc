<?php
/**
 * @file
 * b_wet_general.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function b_wet_general_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_develop_proposal',
    'dependee' => 'field_operate_program',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_implementing_grant',
    'dependee' => 'field_operate_program',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_evaluating_grant',
    'dependee' => 'field_operate_program',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_science_questions',
    'dependee' => 'field_method_scientific_inquiry',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_science__hypotheses',
    'dependee' => 'field_method_scientific_inquiry',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_science_data',
    'dependee' => 'field_method_scientific_inquiry',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_science_analyzing',
    'dependee' => 'field_method_scientific_inquiry',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_science_conclusions',
    'dependee' => 'field_method_scientific_inquiry',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_science_presentations',
    'dependee' => 'field_method_scientific_inquiry',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_teacher_science_questions',
    'dependee' => 'field_teacher_method_scientific_',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_teacher_science_hypotheses',
    'dependee' => 'field_teacher_method_scientific_',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_teacher_science_data',
    'dependee' => 'field_teacher_method_scientific_',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_teacher_science_analyzing',
    'dependee' => 'field_teacher_method_scientific_',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_teacher_science_conclusion',
    'dependee' => 'field_teacher_method_scientific_',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_teacher_science_presentati',
    'dependee' => 'field_teacher_method_scientific_',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_needs_assessment',
    'dependee' => 'field_evaluation',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => array(
        'select' => '4',
        'other' => '',
      ),
      'value' => array(
        0 => array(
          'value' => '4',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_process_implementation',
    'dependee' => 'field_evaluation',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => array(
        'select' => '4',
        'other' => '',
      ),
      'value' => array(
        0 => array(
          'value' => '4',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_outcome',
    'dependee' => 'field_evaluation',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => array(
        'select' => '4',
        'other' => '',
      ),
      'value' => array(
        0 => array(
          'value' => '4',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_impact',
    'dependee' => 'field_evaluation',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'AND',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => array(
        'select' => '4',
        'other' => '',
      ),
      'value' => array(
        0 => array(
          'value' => '4',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_led_evaluation',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_led_evaluation',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_led_evaluation',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_led_evaluation',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_knowledge',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_knowledge',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_knowledge',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_knowledge',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_change_attitude',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_change_attitude',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_change_attitude',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_change_attitude',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_in_skiills',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_in_skiills',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_in_skiills',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_increase_in_skiills',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_intentions_to_act',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_intentions_to_act',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_intentions_to_act',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_intentions_to_act',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_improved_water_qualit',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_improved_water_qualit',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_improved_water_qualit',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_improved_water_qualit',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_academic_performance',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_academic_performance',
    'dependee' => 'field_outcome',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_academic_performance',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '1',
      'value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'values' => array(),
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'grantee_survey',
    'dependent' => 'field_eval_academic_performance',
    'dependee' => 'field_impact',
    'options' => array(
      'state' => 'visible',
      'condition' => 'value',
      'grouping' => 'OR',
      'effect' => 'show',
      'effect_options' => array(),
      'element_view' => array(
        1 => '1',
        2 => '2',
        5 => 0,
        3 => 0,
        4 => 0,
      ),
      'element_view_per_role' => 0,
      'element_view_roles' => array(
        1 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        2 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        3 => array(
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
      ),
      'element_edit' => array(
        1 => '1',
        3 => 0,
      ),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(
        1 => array(
          1 => '1',
          3 => 0,
        ),
        2 => array(
          1 => '1',
          3 => 0,
        ),
        3 => array(
          1 => '1',
          3 => 0,
        ),
      ),
      'selector' => '',
      'values_set' => '1',
      'value_form' => '2',
      'value' => array(
        0 => array(
          'value' => '2',
        ),
      ),
      'values' => array(),
    ),
  );

  return $items;
}
