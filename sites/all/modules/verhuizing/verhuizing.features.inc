<?php
/**
 * @file
 * verhuizing.features.inc
 */

/**
 * Implements hook_views_api().
 */
function verhuizing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function verhuizing_node_info() {
  $items = array(
    'raam' => array(
      'name' => t('Raam'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ruimte' => array(
      'name' => t('Ruimte'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'trap' => array(
      'name' => t('Trap'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
