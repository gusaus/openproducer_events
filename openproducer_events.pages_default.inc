<?php
/**
 * @file
 * openproducer_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'shows';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'events',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'floyd_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
    ),
    'contentmain' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = 'Shows';
  $display->uuid = 'b17472e1-c860-4aec-a51c-31316709c674';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-81eca58b-bbe9-4f15-a4bd-1a874bd970e0';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '0',
    'fields_override' => array(
      'field_event_date' => 1,
      'field_event_venue' => 1,
      'field_venue_address' => 0,
      'field_event_city' => 0,
      'field_event_state' => 0,
      'field_event_zip_post_code' => 0,
      'nothing' => 1,
      'title' => 1,
      'field_links' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Shows',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '81eca58b-bbe9-4f15-a4bd-1a874bd970e0';
  $display->content['new-81eca58b-bbe9-4f15-a4bd-1a874bd970e0'] = $pane;
  $display->panels['contentmain'][0] = 'new-81eca58b-bbe9-4f15-a4bd-1a874bd970e0';
  $pane = new stdClass();
  $pane->pid = 'new-b94f27e4-d3f9-4dc2-8986-86e90893a3aa';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '5',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 0,
      'field_event_date' => 0,
      'field_event_venue' => 0,
      'field_event_city' => 0,
      'field_event_state' => 0,
      'nothing' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Past shows',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b94f27e4-d3f9-4dc2-8986-86e90893a3aa';
  $display->content['new-b94f27e4-d3f9-4dc2-8986-86e90893a3aa'] = $pane;
  $display->panels['sidebar'][0] = 'new-b94f27e4-d3f9-4dc2-8986-86e90893a3aa';
  $pane = new stdClass();
  $pane->pid = 'new-f83d6cf2-af88-4456-a6fa-ed418a36c4b3';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array(
    'css_id' => 'news',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f83d6cf2-af88-4456-a6fa-ed418a36c4b3';
  $display->content['new-f83d6cf2-af88-4456-a6fa-ed418a36c4b3'] = $pane;
  $display->panels['sidebar'][1] = 'new-f83d6cf2-af88-4456-a6fa-ed418a36c4b3';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-81eca58b-bbe9-4f15-a4bd-1a874bd970e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
