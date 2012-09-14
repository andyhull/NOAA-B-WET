<?php
/**
 * @file
 * b_wet_general.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function b_wet_general_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function b_wet_general_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function b_wet_general_node_info() {
  $items = array(
    'grantee_survey' => array(
      'name' => t('Grantee Survey'),
      'base' => 'node_content',
      'description' => t('The main survey used by grantees'),
      'has_title' => '1',
      'title_label' => t('Award Number'),
      'help' => '',
    ),
  );
  return $items;
}
