<?php

/**
 * @file
 * Theme related functions for module "Multistep Nodeform".
 */

/**
 * @file
 * Theme preprocess function for msnf-admin-step-overview-form.tpl.php.
 */
function template_preprocess_msnf_step_overview_form(&$vars) {
  $form = &$vars['form'];

  $vars['help'] = t('Add steps to the content type and arrange them on content display and input forms.');
  $vars['help'] .= '<br/>'. t('Fields not associated to a step will not be displayed on the node form and not be saved. You have to add all required fields to a step to be able to save a node.');
  if (module_exists('content')) {
    $vars['help'] .= '<br/><strong>'. t('Note:'). '</strong> '. t('Moving fields around in this table has direct implications on the order on the "Manage fields" tab. If you move a field here (e.g. out of a fieldgroup) it will be moved "for real"!');
  }
  if (module_exists('fieldgroup')) {
    $vars['help'] .= '<br/><strong>'. t('Warning:'). '</strong> '. t('Warning: associating non-CCK fields (such as %author) to fieldgroup is not supported right now (though you can move them into fieldgroups).', array('%author' => t('Authoring information')));
  }
  #$vars['help'] = theme('advanced_help_topic', 'msnf', 'manage-steps') . $vars['help'];
  #if (!module_exists('advanced_help') && !variable_get('msnf_hide_message:advanced_help', FALSE)) {
    #$vars['help'] .= '<br/>' . t('Note: Installing the <a href="!adv_help">Advanced help</a> module will let you access more and better help.', array('!adv_help' => 'http://drupal.org/project/advanced_help'));
  #}

  $order = _msnf_overview_order($form, $form['#field_rows'], $form['#group_rows'], $form['#step_rows']);
  $rows = array();

  // Identify the 'new item' keys in the form, they look like add_new_step.
  $keys = array_keys($form);
  $add_rows = array();
  foreach ($keys as $key) {
    if (substr($key, 0, 4) == '_add') {
      $add_rows[] = $key;
    }
  }
  while ($order) {
    $key = reset($order);
    $element = &$form[$key];

    // Only display the 'Add' separator if the 'add' rows are still
    // at the end of the table.
    if (!isset($added_separator)) {
      $remaining_rows = array_diff($order, $add_rows);
      if (empty($remaining_rows) && empty($element['#depth'])) {
        $row = new stdClass();
        $row->row_type = 'separator';
        $row->class = 'tabledrag-leaf region';
        $rows[] = $row;
        $added_separator = TRUE;
      }
    }

    $row = new stdClass();

    // Add target classes for the tabledrag behavior.
    $element['weight']['#attributes']['class'] = 'field-weight';
    $element['parent']['#attributes']['class'] = 'step-parent';
    $element['hidden_name']['#attributes']['class'] = 'field-name';
    foreach (element_children($element) as $child) {
      $row->{$child} = drupal_render($element[$child]);
    }
    $row->label_class = 'label-'. strtr($element['#row_type'], '_', '-');
    $row->row_type = $element['#row_type'];
    $row->indentation = theme('indentation', isset($element['#depth']) ? $element['#depth'] : 0);
    $row->class = 'draggable';
    $row->class .= isset($element['#disabled_row']) ? ' menu-disabled' : '';
    $row->class .= isset($element['#add_new']) ? ' msnf-add-new' : '';
    $row->class .= isset($element['#leaf']) && $element['#leaf'] == TRUE ? ' tabledrag-leaf' : '';
    $row->class .= isset($element['#root']) ? ' tabledrag-root' : '';

    $rows[] = $row;
    array_shift($order);
  }
  $vars['rows'] = $rows;
  $vars['submit'] = drupal_render($form);

  // Add tabledrag behavior.
  drupal_add_tabledrag('msnf-step-overview', 'match', 'parent', 'step-parent', 'step-parent', 'field-name', TRUE, 2);
  drupal_add_tabledrag('msnf-step-overview', 'order', 'sibling', 'field-weight');
  // Add CSS styles.
  drupal_add_css(drupal_get_path('module', 'msnf') .'/theme/css/msnf.admin.css');
}
