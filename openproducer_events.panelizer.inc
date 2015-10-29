<?php
/**
 * @file
 * openproducer_events.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function openproducer_events_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'events';
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
  $display->layout = 'santana_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'header' => NULL,
      'half' => NULL,
      'quarter1' => NULL,
      'quarter2' => NULL,
      'footer' => NULL,
      'contentcolumn1' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'contentcolumn2' => array(
        'region_title' => '',
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'contentfooter' => NULL,
      'contentheader' => NULL,
    ),
    'contentheader' => array(
      'style' => '0',
    ),
    'contentcolumn1' => array(
      'style' => 'bootstrap_styles:well',
    ),
    'contentcolumn2' => array(
      'style' => 'bootstrap_styles:well',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a0e11f53-5634-442e-ae6d-7a020c7826c5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7ffc7eed-9c48-4ea0-904d-b00f68937b6e';
  $pane->panel = 'contentcolumn1';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7ffc7eed-9c48-4ea0-904d-b00f68937b6e';
  $display->content['new-7ffc7eed-9c48-4ea0-904d-b00f68937b6e'] = $pane;
  $display->panels['contentcolumn1'][0] = 'new-7ffc7eed-9c48-4ea0-904d-b00f68937b6e';
  $pane = new stdClass();
  $pane->pid = 'new-0161932e-0906-4b4e-bdcd-ac3502fcb75a';
  $pane->panel = 'contentcolumn2';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => 'Details',
    'view_mode' => NULL,
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
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'default',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0161932e-0906-4b4e-bdcd-ac3502fcb75a';
  $display->content['new-0161932e-0906-4b4e-bdcd-ac3502fcb75a'] = $pane;
  $display->panels['contentcolumn2'][0] = 'new-0161932e-0906-4b4e-bdcd-ac3502fcb75a';
  $pane = new stdClass();
  $pane->pid = 'new-d79642ca-48a3-4ad4-9db3-8bc6775b51d4';
  $pane->panel = 'contentheader';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
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
  $pane->uuid = 'd79642ca-48a3-4ad4-9db3-8bc6775b51d4';
  $display->content['new-d79642ca-48a3-4ad4-9db3-8bc6775b51d4'] = $pane;
  $display->panels['contentheader'][0] = 'new-d79642ca-48a3-4ad4-9db3-8bc6775b51d4';
  $pane = new stdClass();
  $pane->pid = 'new-3af0fe72-d82b-4dbd-8d7c-50fd90a1d47d';
  $pane->panel = 'contentheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_half',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
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
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3af0fe72-d82b-4dbd-8d7c-50fd90a1d47d';
  $display->content['new-3af0fe72-d82b-4dbd-8d7c-50fd90a1d47d'] = $pane;
  $display->panels['contentheader'][1] = 'new-3af0fe72-d82b-4dbd-8d7c-50fd90a1d47d';
  $pane = new stdClass();
  $pane->pid = 'new-1d48d6ac-7775-456d-a98a-4c6a402b3ea0';
  $pane->panel = 'contentheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'panopoly_day',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1d48d6ac-7775-456d-a98a-4c6a402b3ea0';
  $display->content['new-1d48d6ac-7775-456d-a98a-4c6a402b3ea0'] = $pane;
  $display->panels['contentheader'][2] = 'new-1d48d6ac-7775-456d-a98a-4c6a402b3ea0';
  $pane = new stdClass();
  $pane->pid = 'new-06beccc6-b807-4814-a748-0bd7a575932b';
  $pane->panel = 'contentheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'panopoly_time',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'view_mode' => NULL,
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '06beccc6-b807-4814-a748-0bd7a575932b';
  $display->content['new-06beccc6-b807-4814-a748-0bd7a575932b'] = $pane;
  $display->panels['contentheader'][3] = 'new-06beccc6-b807-4814-a748-0bd7a575932b';
  $pane = new stdClass();
  $pane->pid = 'new-045bb3bd-d1a2-4200-939c-26aeb212182e';
  $pane->panel = 'contentheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'link_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'collapsible' => 0,
      'collapsed' => 0,
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
    'style' => 'bootstrap_styles:panel',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '045bb3bd-d1a2-4200-939c-26aeb212182e';
  $display->content['new-045bb3bd-d1a2-4200-939c-26aeb212182e'] = $pane;
  $display->panels['contentheader'][4] = 'new-045bb3bd-d1a2-4200-939c-26aeb212182e';
  $pane = new stdClass();
  $pane->pid = 'new-af394309-24d3-4abe-9ce5-f539f0052376';
  $pane->panel = 'contentheader';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => 1,
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'af394309-24d3-4abe-9ce5-f539f0052376';
  $display->content['new-af394309-24d3-4abe-9ce5-f539f0052376'] = $pane;
  $display->panels['contentheader'][5] = 'new-af394309-24d3-4abe-9ce5-f539f0052376';
  $pane = new stdClass();
  $pane->pid = 'new-7d34edf9-db4e-4174-954a-b0c92a1d3558';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
    'items_per_page' => '3',
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
    'widget_title' => 'Upcoming Shows',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d34edf9-db4e-4174-954a-b0c92a1d3558';
  $display->content['new-7d34edf9-db4e-4174-954a-b0c92a1d3558'] = $pane;
  $display->panels['sidebar'][0] = 'new-7d34edf9-db4e-4174-954a-b0c92a1d3558';
  $pane = new stdClass();
  $pane->pid = 'new-b4f868f1-d8c5-4aaf-9050-0a37c55b29e3';
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
  $pane->uuid = 'b4f868f1-d8c5-4aaf-9050-0a37c55b29e3';
  $display->content['new-b4f868f1-d8c5-4aaf-9050-0a37c55b29e3'] = $pane;
  $display->panels['sidebar'][1] = 'new-b4f868f1-d8c5-4aaf-9050-0a37c55b29e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  return $export;
}
