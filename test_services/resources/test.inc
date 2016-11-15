<?php

/**
 * @file
 */

/**
 * Function to define resources.
 *
 * @return array $config
 *   Array of resource definition
 */
function _test_services_resource_definition() {
  $config = array(
    'testpoint' => array(
      'actions' => array(
        'check' => array(
          'help' => t('Test point'),
          'access callback' => '_test_services_data_access',
          'access arguments' => array('config'),
          'access arguments append' => TRUE,
          'callback' => '_test_services_fetch_data',
          'file' => array(
            'type' => 'inc',
            'module' => 'test_services',
            'name' => 'resources/test',
          ),
          'args' => array(
            array(
              'name' => 'type',
              'type' => 'string',
              'description' => t('type of string'),
              'source' => array('data' => 'type'),
              'optional' => TRUE,
            ),
          ),
        ),
      ),
    ),
  );
  return $config;
}

/**
 * Access restriction.
 *
 * @return bool
 *   Returns boolean TRUE.
 */
function _test_services_data_access($op = 'config', $args = array()) {
  $permission = FALSE;
  global $user;
  $roles = $user->roles;
  if (in_array('administrator', $roles)) {
    return TRUE;
  }
  return $permission;
}

/**
 * Callback function.
 */
function _test_services_fetch_data($str = NULL) {
  $data = array('message' => 'Success');
  return $data;
}
