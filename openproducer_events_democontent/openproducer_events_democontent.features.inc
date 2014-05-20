<?php
/**
 * @file
 * openproducer_events_democontent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openproducer_events_democontent_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
