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
      'title_label' => t('NOAA B-WET award number'),
      'help' => '',
    ),
    'teacher_survey' => array(
      'name' => t('Teacher Survey'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Teacher unique ID'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function b_wet_general_default_profile2_type() {
  $items = array();
  $items['grantee'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "grantee",
    "label" : "Grantee",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : true, "use_page" : true },
    "rdf_mapping" : []
  }');
  return $items;
}
