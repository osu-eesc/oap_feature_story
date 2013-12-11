<?php
/**
 * @file
 * oap_feature_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function oap_feature_story_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|oap_sections|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'oap_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_section_header',
      2 => 'field_teaser_image',
      3 => 'field_story_header',
      4 => 'field_sub_title',
      5 => 'field_deck',
      6 => 'field_author',
      7 => 'field_article_image',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|oap_sections|form'] = $field_group;

  return $export;
}
