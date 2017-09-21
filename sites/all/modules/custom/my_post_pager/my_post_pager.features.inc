<?php
/**
 * @file
 * my_post_pager.features.inc
 */

/**
 * Implements hook_views_api().
 */
function my_post_pager_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
