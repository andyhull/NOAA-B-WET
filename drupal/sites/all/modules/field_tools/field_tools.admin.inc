<?php
/**
 * @file
 * Contains admin callbacks for the Field tools module.
 */

/**
 * Form builder for the cloning multiple fields from a bundle.
 *
 * @param $entity_type
 *  The machine name of the entity.
 * @param $bundle_name
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_fields_clone_from_form($form, &$form_state, $entity_type, $bundle_name) {
  // Get the bundle name if the bundle name is really a bundle object.
  $bundle_name = field_extract_bundle($entity_type, $bundle_name);

  $field_instances = field_info_instances($entity_type, $bundle_name);
  //dsm($field_instances);

  $options_fields = array();
  foreach ($field_instances as $field_name => $field) {
    $options_fields[$field_name] = $field['label'];
  }

  $form['fields'] = array(
    '#title' => t('Fields to clone'),
    '#type' => 'checkboxes',
    '#options' => $options_fields,
    '#description' => t("Select fields to clone onto one or more bundles."),
  );

  $form['bundles'] = array(
    '#title' => t('Bundle(s) to clone onto'),
    '#type' => 'checkboxes',
    '#options' => field_tools_options_entity_bundle(),
    //'#default_value' => $default_bundles,
    '#description' => t("Select bundles on which to apply the selected fields."),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add field instances'),
  );

  return $form;
}

/**
 * Submit handler for the mass clone form.
 */
function field_tools_bundle_fields_clone_from_form_submit($form, &$form_state) {
  // Get details from the original form builder parameters.
  list($source_entity_type, $source_bundle_name) = $form_state['build_info']['args'];
  // Get the bundle name if the bundle name is really a bundle object.
  $source_bundle_name = field_extract_bundle($source_entity_type, $source_bundle_name);

  // Get names of fields to clone.
  $field_names = array_filter($form_state['values']['fields']);

  foreach ($field_names as $field_name) {
    $field = field_info_field($field_name);
    $instance = field_info_instance($source_entity_type, $field_name, $source_bundle_name);

    $new_instances = array();
    foreach (array_filter($form_state['values']['bundles']) as $option_key) {
      list($entity_type, $bundle_type) = explode(':', $option_key);
      $new_instances[$entity_type][] = $bundle_type;
    }
    if (!empty($new_instances)) {
      _field_tools_add_instance_to_bundles($instance, $new_instances);
    }
  }
}

/**
 * Form builder for the field clone page.
 *
 * @param $instance
 *  A FieldAPI field instance definition array.
 */
function field_tools_field_clone_form($form, &$form_state, $instance) {
  //dsm($instance);
  $form['#instance'] = $instance;

  $field_name = $instance['field_name'];

  // TODO: is there a way to turn most of what follows into a form element?
  $field = field_info_field($field_name);
  $field_exists = isset($field);
  $field_type = field_info_field_types('taxonomy_term_reference');

  // Field settings fieldset.
  // @todo restore this when we add a field apply-type UI.
  /*
  $form['settings'] = array(
    '#type' => 'fieldset',
  );
  $form['settings']['multiple'] = array('#type' => 'checkbox',
    '#title' => t('Multiple select'),
    '#description' => t('Allows reference fields to hold more than one term from this vocabulary.'),
  );
  // Lock this if the field exists.
  if ($field_exists) {
    $form['settings']['multiple'] += array(
      '#disabled' => TRUE,
      '#default_value' => ($field['cardinality'] == 1 ? FALSE : TRUE),
    );
    $form['settings']['multiple']['#description'] .= ' ' . t('This setting may not be changed here because this field already has instances.');
  }

  $form['settings']['required'] = array('#type' => 'checkbox',
    '#title' => t('Required'),
    '#description' => t('At least one term in this vocabulary must be selected when submitting data with this field.'),
  );

  module_load_include('inc', 'field_ui', 'field_ui.admin');
  $widget_options = field_ui_widget_type_options($field['type']);
  $form['settings']['widget_type'] = array(
    '#type' => 'select',
    '#title' => t('Widget type'),
    '#required' => TRUE,
    '#options' => $widget_options,
    '#default_value' => $field_type['default_widget'],
    '#description' => t('The type of form element you would like to present to the user when creating this field in the types below.'),
  );
  */

  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    if (_field_tools_entity_can_attach_field($entity_type, $field)) {
      foreach ($entity_info['bundles'] as $bundle_type => $bundle_info) {
        $options[$entity_type . ':' . $bundle_type] = $entity_info['label'] . ': ' . $bundle_info['label'];
      }
    }
  }
  //dsm($options);
  $default_bundles = array();
  if ($field_exists) {
    foreach ($field['bundles'] as $entity_type => $bundles) {
      foreach ($bundles as $bundle_type) {
        $default_bundles[] = $entity_type . ':' . $bundle_type;
      }
    }
  }
  $form['bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => $default_bundles,
    '#description' => t("Select bundles on which to apply this vocabulary's term reference field."),
  );
  // Very neat but undocumented trick: see http://drupal.org/node/1349432
  foreach ($default_bundles as $option_key) {
    $form['bundles'][$option_key] = array(
      '#disabled' => TRUE,
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add field instances'),
  );

  return $form;
}

/**
 * Submit handler for the field clone form.
 */
function field_tools_field_clone_form_submit($form, &$form_state) {
  $instance = $form['#instance'];
  $field_name = $instance['field_name'];
  $field = field_info_field($field_name);

  $new_instances = array();
  foreach (array_filter($form_state['values']['bundles']) as $option_key) {
    list($entity_type, $bundle_type) = explode(':', $option_key);
    $new_instances[$entity_type][] = $bundle_type;
  }
  if (!empty($new_instances)) {
    _field_tools_add_instance_to_bundles($instance, $new_instances);
  }
}

/**
 * Helper to get FormAPI options for entity bundles.
 *
 * @return
 *  An array for FormAPI '#options' properties, with:
 *    - keys of the form ENTITY:BUNDLE, using machine names.
 *    - values of the form ENTITY: BUNDLE, using labels.
 */
function field_tools_options_entity_bundle() {
  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    foreach ($entity_info['bundles'] as $bundle_type => $bundle_info) {
      $options[$entity_type . ':' . $bundle_type] = $entity_info['label'] . ': ' . $bundle_info['label'];
    }
  }
  return $options;
}

/**
 * Form builder for the cloning multiple fields to a bundle.
 *
 * @param $current_entity_type
 *  The machine name of the entity.
 * @param $current_bundle_name
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_fields_clone_to_form($form, &$form_state, $current_entity_type, $current_bundle_name) {
  $current_bundle_name = field_extract_bundle($current_entity_type, $current_bundle_name);
  $all_instances = field_info_instances();

  $entity_types = entity_get_info();
  $form['instructions'] = array(
    '#type' => 'markup',
    '#markup' => t('Select the fields you want to copy <em>to</em> this bundle. You can only select one instance of a particular field.'),
  );
  $form['entity_type'] = array(
    '#value' => $current_entity_type,
    '#type'  => 'value',
  );
  $form['bundle'] = array(
    '#value' => $current_bundle_name,
    '#type'  => 'value',
  );
  foreach ($entity_types as $entity_key => $entity_type) {
    if ($entity_type['fieldable'] == TRUE) {
      if (!empty($entity_type['bundles'])) {
        // This entity_type has bundles.
        $form['fields'][$entity_key] = array(
          '#type' => 'fieldset',
          '#title' => $entity_type['label'],
          '#description' => '',
          '#tree' => TRUE,
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );
        foreach ($entity_type['bundles'] as $bundle_name => $bundle) {
          if ($current_entity_type == $entity_key && $bundle_name == $current_bundle_name) {
            continue;
          }
          if (empty($all_instances[$entity_key][$bundle_name])) {
            // No fields on this bundle.
            continue;
          }
          $form['fields'][$entity_key][$bundle_name . '_set'] = array(
            '#type' => 'fieldset',
            '#title' => $bundle['label'],
            '#description' => '',
            '#collapsible' => TRUE,
            '#collapsed' => TRUE,
          );
          $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name] = array(
            '#type' => 'checkboxes',
            '#title' => $bundle['label'],
            '#description' => '',
            '#options' => array(),
          );

          foreach ($all_instances[$entity_key][$bundle_name] as $field_name => $field_info) {
            // Make sure this field doesn't already exist on the current bundle.
            $on_current_bundle = is_array($all_instances[$current_entity_type][$current_bundle_name]) && array_key_exists($field_name, $all_instances[$current_entity_type][$current_bundle_name]);
            if (!$on_current_bundle && _field_tools_entity_can_attach_field($current_entity_type, field_info_field($field_name))) {
              $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#options'][$field_name] = $field_info['label'] . " ({$field_name})";
            }
          }
          if (empty($form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#options'])) {
            // @todo should we not show a bundle if no fields can be attached??
            $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#description'] = t('Contains no fields that can be attached to this bundle.');
          }
        }
        // Set #parents to skip sets in form values.
        foreach (element_children($form['fields'][$entity_key]) as $key) {
          if (strrpos($key, '_set') === drupal_strlen($key) - drupal_strlen('_set')) {
            foreach (element_children($form['fields'][$entity_key][$key]) as $sub_key ) {
              $form['fields'][$entity_key][$key][$sub_key]['#parents'] = array('fields', $entity_key, $sub_key);
            }
          }
        }
        $bundle_names = element_children($form['fields'][$entity_key]);
        if (empty($bundle_names)) {
          // Don't show entities that have no bundle with fields.
          unset($form['fields'][$entity_key]);
        }
      }
    }
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Add field instances',
  );
  return $form;
}

/**
 * Validation for cloning multiple fields into one bundle.
 *
 * Make sure no field was selected more than once.
 */
function field_tools_bundle_fields_clone_to_form_validate($form, &$form_state) {
  $selected_fields = array();
  $fields = $form_state['values']['fields'];
  foreach ($fields as $entity_type => $bundles) {
    foreach ($bundles as $bundle_name => $bundle_fields) {
      $bundle_fields = array_filter($bundle_fields);
      $matching_fields = array_intersect_key($selected_fields, $bundle_fields);
      if (!empty($matching_fields)) {
        $match_key = array_shift($matching_fields);
        form_error($form['fields'][$entity_type][$bundle_name . '_set'], t("You have selected the field %field more that once.", array(
          '%field' => $match_key,
        )));
        return;
      }
      $selected_fields += $bundle_fields;
    }
  }
}

/**
 * Submit handler for the mass clone to bundle form.
 */
function field_tools_bundle_fields_clone_to_form_submit($form, &$form_state) {
  $fields = $form_state['values']['fields'];
  $current_entity_type = $form_state['values']['entity_type'];
  $current_bundle_name = $form_state['values']['bundle'];

  foreach ($fields as $entity_type => $bundles) {
    foreach ($bundles as $bundle_name => $bundle_fields) {
      $bundle_fields = array_filter($bundle_fields);
      foreach ($bundle_fields as $field_name) {
        $field_info = field_info_instance($entity_type, $field_name, $bundle_name);
        _field_tools_add_instance_to_bundles($field_info, array($current_entity_type => array($current_bundle_name)));
      }
    }
  }
}

/**
 * Helper function to clone a single field instance into multiple bundles.
 *
 * @param array $instance
 *   The field instance to be added to the bundles.
 * @param array $new_instances
 *   An array describing entity bundles on which to create field instances.
 *   Each key is an entity type machine name, each value is an array of bundle
 *   machine names of that entity.
 */
function _field_tools_add_instance_to_bundles($instance, $new_instances) {
  $original_display = $instance['display'];
  $field_info = field_info_field($instance['field_name']);
  $entity_types = entity_get_info();
  foreach ($new_instances as $entity_type => $bundles) {
    $bundles = array_filter($bundles);
    if (!empty($bundles)) {
      if (!_field_tools_entity_can_attach_field($entity_type, $field_info)) {
        drupal_set_message(t('Field %field_label cannot be attached to entity type %entity_type', array('
          %field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
        )));
        continue;
      }

      $instance = array_diff_key($instance, array_flip(array('id', 'field_id', 'bundle', 'entity_type', 'deleted')));
      // Only bring back displays that have matching "view mode" in this entity type.
      $instance['display'] = array_intersect_key($original_display, $entity_types[$entity_type]['view modes']);
      if (empty($instance['display'])) {
        //@todo should there be logic to handle to no matching 'view modes'
      }
      $instance['entity_type'] = $entity_type;
      foreach ($bundles as $bundle) {
        if (_field_tools_field_already_attached($entity_type, $bundle, $field_info)) {
          drupal_set_message(t('Field %field_label is already attached to %entity_type - %bundle', array(
            '%field_label' => $instance['label'],
            '%entity_type' => $entity_types[$entity_type]['label'],
            '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
          )));
          continue;
        }
        $instance['bundle'] = $bundle;
        field_create_instance($instance);
        drupal_set_message(t('Attached field %field_label to %entity_type - %bundle', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
          '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
        )));
      }
    }
  }
}
