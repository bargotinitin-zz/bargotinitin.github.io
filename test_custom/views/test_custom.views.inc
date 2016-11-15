<?php

/**
 * @file
 * Using custom table in views.
 */

/**
 * Implements hook_views_data().
 * @return array
 */
function test_custom_views_data() {
  $data = array();
  $data['test_custom_info']['table']['group'] = t('Test custom info table');
  $data['test_custom_info']['table']['base'] = array(
    'field' => 'id',  //Primary key
    'title' => 'test_custom_info custom table',
    'help' => 'test_custom_info custom database table'
  );
  $data['test_custom_info']['id'] = array(
    'title' => t('Id'),
    'help' => t('Id field.'),

    // Field information.
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    // Will be used for sorting purpose.
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    // Will be used for filteration.
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    // Will be used to pass the column value as an argument.
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['test_custom_info']['entity_name'] = array(
    'title' => t('Entity name'),
    'help' => t('Entity name field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['test_custom_info']['email'] = array(
    'title' => t('Email'),
    'help' => t('Email field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['test_custom_info']['phone'] = array(
    'title' => t('Phone'),
    'help' => t('Phone field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  $data['test_custom_info']['address'] = array(
    'title' => t('Address'),
    'help' => t('Address field'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );
  return $data;
}
