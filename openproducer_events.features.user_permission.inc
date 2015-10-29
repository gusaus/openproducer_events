<?php
/**
 * @file
 * openproducer_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openproducer_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node event content'.
  $permissions['administer panelizer node event content'] = array(
    'name' => 'administer panelizer node event content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node event layout'.
  $permissions['administer panelizer node event layout'] = array(
    'name' => 'administer panelizer node event layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
