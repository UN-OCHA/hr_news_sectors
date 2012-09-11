<?php
/**
 * @file
 * hr_news_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_news_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-news-field_clusters'])) {
    $data['node-news-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster(s)' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_news_sectors_views_default_views_alter(&$data) {
  if (isset($data['news'])) {
    $data['news']->display['page']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
  }
}
