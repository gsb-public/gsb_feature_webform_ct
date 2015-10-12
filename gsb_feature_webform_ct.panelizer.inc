<?php
/**
 * @file
 * gsb_feature_webform_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_webform_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:webform:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'webform';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f9ebd674-20c7-433e-9151-ed05381a35a1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-afef8892-cb9d-4336-856f-aa080d240615';
    $pane->panel = 'center';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'afef8892-cb9d-4336-856f-aa080d240615';
    $display->content['new-afef8892-cb9d-4336-856f-aa080d240615'] = $pane;
    $display->panels['center'][0] = 'new-afef8892-cb9d-4336-856f-aa080d240615';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-afef8892-cb9d-4336-856f-aa080d240615';
  $panelizer->display = $display;
  $export['node:webform:default'] = $panelizer;

  return $export;
}
