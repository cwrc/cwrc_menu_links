<?php
/**
 * @file
 * cwrc_menu_links.borealis_sb_default.inc
 */

/**
 * Implements hook_default_semantic_wrapper().
 */
function cwrc_menu_links_default_semantic_wrapper() {
  $export = array();

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'cwrc_menu_links_login_link';
  $semantic_wrapper->module = 'cwrc_menu_links';
  $semantic_wrapper->delta = 'login_link';
  $semantic_wrapper->semantics = 'zip';
  $export['cwrc_menu_links_login_link'] = $semantic_wrapper;

  return $export;
}
