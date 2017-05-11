<?php
/**
 * @file
 * verhuizing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function verhuizing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create raam content'.
  $permissions['create raam content'] = array(
    'name' => 'create raam content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ruimte content'.
  $permissions['create ruimte content'] = array(
    'name' => 'create ruimte content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create trap content'.
  $permissions['create trap content'] = array(
    'name' => 'create trap content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any raam content'.
  $permissions['delete any raam content'] = array(
    'name' => 'delete any raam content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ruimte content'.
  $permissions['delete any ruimte content'] = array(
    'name' => 'delete any ruimte content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any trap content'.
  $permissions['delete any trap content'] = array(
    'name' => 'delete any trap content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own raam content'.
  $permissions['delete own raam content'] = array(
    'name' => 'delete own raam content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ruimte content'.
  $permissions['delete own ruimte content'] = array(
    'name' => 'delete own ruimte content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own trap content'.
  $permissions['delete own trap content'] = array(
    'name' => 'delete own trap content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any raam content'.
  $permissions['edit any raam content'] = array(
    'name' => 'edit any raam content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ruimte content'.
  $permissions['edit any ruimte content'] = array(
    'name' => 'edit any ruimte content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any trap content'.
  $permissions['edit any trap content'] = array(
    'name' => 'edit any trap content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own raam content'.
  $permissions['edit own raam content'] = array(
    'name' => 'edit own raam content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ruimte content'.
  $permissions['edit own ruimte content'] = array(
    'name' => 'edit own ruimte content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own trap content'.
  $permissions['edit own trap content'] = array(
    'name' => 'edit own trap content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
