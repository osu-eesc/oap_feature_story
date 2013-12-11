<?php
/**
 * @file
 * oap_feature_story.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function oap_feature_story_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'oap_feature_story';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OAP Feature Story';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'All Stories';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Story Header */
  $handler->display->display_options['fields']['field_story_header']['id'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['table'] = 'field_data_field_story_header';
  $handler->display->display_options['fields']['field_story_header']['field'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['label'] = '';
  $handler->display->display_options['fields']['field_story_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story_header']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_story_header']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_story_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_story_header']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Sort criterion: Book: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Book: Hierarchy */
  $handler->display->display_options['sorts']['p']['id'] = 'p';
  $handler->display->display_options['sorts']['p']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['p']['field'] = 'p';
  $handler->display->display_options['sorts']['p']['sort_within_level'] = 0;
  /* Contextual filter: Content: Issue (field_issue) */
  $handler->display->display_options['arguments']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['arguments']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['arguments']['field_issue_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_issue_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_issue_tid']['default_argument_options']['code'] = 'if (is_numeric(arg(1)) && arg(2) !== \'edit\') {
  $node = node_load(arg(1));
  $tid = $node->field_issue[\'und\'][0][\'tid\'];
  return $tid;
}';
  $handler->display->display_options['arguments']['field_issue_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_issue_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_issue_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Story Header (field_story_header:fid) */
  $handler->display->display_options['filters']['field_story_header_fid']['id'] = 'field_story_header_fid';
  $handler->display->display_options['filters']['field_story_header_fid']['table'] = 'field_data_field_story_header';
  $handler->display->display_options['filters']['field_story_header_fid']['field'] = 'field_story_header_fid';
  $handler->display->display_options['filters']['field_story_header_fid']['operator'] = 'not empty';
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['value']['value'] = '2';
  $handler->display->display_options['filters']['depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['depth']['expose']['operator_id'] = 'depth_op';
  $handler->display->display_options['filters']['depth']['expose']['label'] = 'Depth';
  $handler->display->display_options['filters']['depth']['expose']['operator'] = 'depth_op';
  $handler->display->display_options['filters']['depth']['expose']['identifier'] = 'depth';
  $handler->display->display_options['filters']['depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Include story header in feature slideshow (field_story_header_include) */
  $handler->display->display_options['filters']['field_story_header_include_value']['id'] = 'field_story_header_include_value';
  $handler->display->display_options['filters']['field_story_header_include_value']['table'] = 'field_data_field_story_header_include';
  $handler->display->display_options['filters']['field_story_header_include_value']['field'] = 'field_story_header_include_value';
  $handler->display->display_options['filters']['field_story_header_include_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Feature Story Front Page Block';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_magazine_ref',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'edit_node' => 'edit_node',
    'title' => 'field_story_header',
    'path' => 'field_story_header',
    'field_story_header' => 'field_story_header',
    'field_magazine_ref' => 'field_magazine_ref',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'edit_node' => array(
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_story_header' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_magazine_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Magazine (field_magazine_ref) */
  $handler->display->display_options['relationships']['field_magazine_ref_nid']['id'] = 'field_magazine_ref_nid';
  $handler->display->display_options['relationships']['field_magazine_ref_nid']['table'] = 'field_data_field_magazine_ref';
  $handler->display->display_options['relationships']['field_magazine_ref_nid']['field'] = 'field_magazine_ref_nid';
  $handler->display->display_options['relationships']['field_magazine_ref_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_magazine_ref_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[edit]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]<span> [edit_node]</span></h4>';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['element_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Story Header */
  $handler->display->display_options['fields']['field_story_header']['id'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['table'] = 'field_data_field_story_header';
  $handler->display->display_options['fields']['field_story_header']['field'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['label'] = '';
  $handler->display->display_options['fields']['field_story_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story_header']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_story_header']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_story_header']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_story_header']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Magazine */
  $handler->display->display_options['fields']['field_magazine_ref']['id'] = 'field_magazine_ref';
  $handler->display->display_options['fields']['field_magazine_ref']['table'] = 'field_data_field_magazine_ref';
  $handler->display->display_options['fields']['field_magazine_ref']['field'] = 'field_magazine_ref';
  $handler->display->display_options['fields']['field_magazine_ref']['label'] = '';
  $handler->display->display_options['fields']['field_magazine_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_magazine_ref']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Volume (field_volume) */
  $handler->display->display_options['sorts']['field_volume_value']['id'] = 'field_volume_value';
  $handler->display->display_options['sorts']['field_volume_value']['table'] = 'field_data_field_volume';
  $handler->display->display_options['sorts']['field_volume_value']['field'] = 'field_volume_value';
  $handler->display->display_options['sorts']['field_volume_value']['relationship'] = 'field_magazine_ref_nid';
  $handler->display->display_options['sorts']['field_volume_value']['order'] = 'DESC';
  /* Sort criterion: Content: Number (field_number) */
  $handler->display->display_options['sorts']['field_number_value']['id'] = 'field_number_value';
  $handler->display->display_options['sorts']['field_number_value']['table'] = 'field_data_field_number';
  $handler->display->display_options['sorts']['field_number_value']['field'] = 'field_number_value';
  $handler->display->display_options['sorts']['field_number_value']['relationship'] = 'field_magazine_ref_nid';
  $handler->display->display_options['sorts']['field_number_value']['order'] = 'DESC';
  /* Sort criterion: Book: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Book: Hierarchy */
  $handler->display->display_options['sorts']['p']['id'] = 'p';
  $handler->display->display_options['sorts']['p']['table'] = 'book_menu_links';
  $handler->display->display_options['sorts']['p']['field'] = 'p';
  $handler->display->display_options['sorts']['p']['sort_within_level'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Story Header (field_story_header:fid) */
  $handler->display->display_options['filters']['field_story_header_fid']['id'] = 'field_story_header_fid';
  $handler->display->display_options['filters']['field_story_header_fid']['table'] = 'field_data_field_story_header';
  $handler->display->display_options['filters']['field_story_header_fid']['field'] = 'field_story_header_fid';
  $handler->display->display_options['filters']['field_story_header_fid']['operator'] = 'not empty';
  /* Filter criterion: Book: Depth */
  $handler->display->display_options['filters']['depth']['id'] = 'depth';
  $handler->display->display_options['filters']['depth']['table'] = 'book_menu_links';
  $handler->display->display_options['filters']['depth']['field'] = 'depth';
  $handler->display->display_options['filters']['depth']['value']['value'] = '2';
  $handler->display->display_options['filters']['depth']['expose']['operator_id'] = 'depth_op';
  $handler->display->display_options['filters']['depth']['expose']['label'] = 'Depth';
  $handler->display->display_options['filters']['depth']['expose']['operator'] = 'depth_op';
  $handler->display->display_options['filters']['depth']['expose']['identifier'] = 'depth';
  $handler->display->display_options['filters']['depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Include story header in feature slideshow (field_story_header_include) */
  $handler->display->display_options['filters']['field_story_header_include_value']['id'] = 'field_story_header_include_value';
  $handler->display->display_options['filters']['field_story_header_include_value']['table'] = 'field_data_field_story_header_include';
  $handler->display->display_options['filters']['field_story_header_include_value']['field'] = 'field_story_header_include_value';
  $handler->display->display_options['filters']['field_story_header_include_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Issue (field_issue) */
  $handler->display->display_options['filters']['field_issue_tid']['id'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['table'] = 'field_data_field_issue';
  $handler->display->display_options['filters']['field_issue_tid']['field'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator_id'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['label'] = 'Issue';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['operator'] = 'field_issue_tid_op';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['identifier'] = 'field_issue_tid';
  $handler->display->display_options['filters']['field_issue_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_issue_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_issue_tid']['vocabulary'] = 'issue';
  $handler->display->display_options['path'] = 'summary/feature-slideshow';
  $export['oap_feature_story'] = $view;

  return $export;
}
