<?php
/**
 * @file
 * soc_odder_stories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soc_odder_stories_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function soc_odder_stories_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function soc_odder_stories_node_info() {
  $items = array(
    'soc_odder_story' => array(
      'name' => t('Indlæg'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
