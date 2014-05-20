<?php
/**
 * @file
 * openproducer_events_democontent.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openproducer_events_democontent_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_content_enabled';
  $strongarm->value = TRUE;
  $export['node_content_enabled'] = $strongarm;

  return $export;
}