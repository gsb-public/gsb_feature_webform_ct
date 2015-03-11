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
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'gsb-landing-standard-page-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'fullheader' => NULL,
      'maintop' => NULL,
      'mainmiddlefirst' => NULL,
      'mainmiddlesecond' => NULL,
      'mainbottom' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c6fd1332-af3e-40ef-8104-82b20b9227ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0ddb0def-a459-4949-a5d2-4988257e73a1';
    $pane->panel = 'maintop';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0ddb0def-a459-4949-a5d2-4988257e73a1';
    $display->content['new-0ddb0def-a459-4949-a5d2-4988257e73a1'] = $pane;
    $display->panels['maintop'][0] = 'new-0ddb0def-a459-4949-a5d2-4988257e73a1';
    $pane = new stdClass();
    $pane->pid = 'new-680ad1d8-eda8-4228-b618-77868a5d063c';
    $pane->panel = 'maintop';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '680ad1d8-eda8-4228-b618-77868a5d063c';
    $display->content['new-680ad1d8-eda8-4228-b618-77868a5d063c'] = $pane;
    $display->panels['maintop'][1] = 'new-680ad1d8-eda8-4228-b618-77868a5d063c';
    $pane = new stdClass();
    $pane->pid = 'new-2c7f1a2c-e396-44d1-87b2-ee2b06bc9d99';
    $pane->panel = 'maintop';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2c7f1a2c-e396-44d1-87b2-ee2b06bc9d99';
    $display->content['new-2c7f1a2c-e396-44d1-87b2-ee2b06bc9d99'] = $pane;
    $display->panels['maintop'][2] = 'new-2c7f1a2c-e396-44d1-87b2-ee2b06bc9d99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:webform:default'] = $panelizer;

  return $export;
}
