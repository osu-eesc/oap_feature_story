<?php
/**
 * @file
 * oap_feature_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oap_feature_story_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function oap_feature_story_views_api() {
  return array("version" => "3.0");
}
