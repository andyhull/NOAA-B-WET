<?php
/**
 * @file
 * b_wet_general.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function b_wet_general_user_default_roles() {
  $roles = array();

  // Exported role: NOAA manager.
  $roles['NOAA manager'] = array(
    'name' => 'NOAA manager',
    'weight' => '5',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: grantee.
  $roles['grantee'] = array(
    'name' => 'grantee',
    'weight' => '3',
  );

  // Exported role: teacher.
  $roles['teacher'] = array(
    'name' => 'teacher',
    'weight' => '4',
  );

  return $roles;
}
