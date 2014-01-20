<?php
/**
 * @file
 * stanford_publication.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_publication_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_s_image_info-field_s_image_caption'
  $field_instances['field_collection_item-field_s_image_info-field_s_image_caption'] = array(
    'bundle' => 'field_s_image_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optionally enter information to appear as a caption for this image. This text may be trimmed to 180 characters.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_3_col_header' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_4_col_header' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_6_col_banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 3,
      ),
      'stanford_6_col_banner_short' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_6_col_banner_tall' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_8_col_banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_8_col_banner_short' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 3,
      ),
      'stanford_8_col_banner_tall' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_9_col_banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_9_col_banner_short' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_12_col_banner' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_icon_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_large_scaled' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 2,
      ),
      'stanford_large_square' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 180,
        ),
        'type' => 'text_trimmed',
        'weight' => 8,
      ),
      'stanford_med_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_medium_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_sm_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_small_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_thumbnail_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'test' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_s_image_caption',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_s_image_info-field_s_image_credits'
  $field_instances['field_collection_item-field_s_image_info-field_s_image_credits'] = array(
    'bundle' => 'field_s_image_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the photographer or organization credits.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_3_col_header' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'stanford_4_col_header' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'stanford_6_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'stanford_6_col_banner_short' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_6_col_banner_tall' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_8_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'stanford_8_col_banner_short' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'stanford_8_col_banner_tall' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_9_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_9_col_banner_short' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_12_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_icon_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_large_scaled' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'stanford_large_square' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'stanford_med_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_medium_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'stanford_sm_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_small_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_thumbnail_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'test' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_s_image_credits',
    'label' => 'Credits',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_s_image_info-field_s_image_image'
  $field_instances['field_collection_item-field_s_image_info-field_s_image_image'] = array(
    'bundle' => 'field_s_image_info',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'page-width',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_3_col_header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '3-col-header',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_4_col_header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-col-header',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_6_col_banner' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '6-col-banner',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'stanford_6_col_banner_short' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '6-col-banner',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_6_col_banner_tall' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '6-col-banner-tall',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'stanford_8_col_banner' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '8-col-banner',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'stanford_8_col_banner_short' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '8-col-banner-short',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'stanford_8_col_banner_tall' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '8-col-banner-tall',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_9_col_banner' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '9-col-banner',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_9_col_banner_short' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '9-col-banner-short',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_12_col_banner' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '12-col-banner',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_icon_square' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'icon-square',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'stanford_large_scaled' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large-scaled',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'stanford_large_square' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large-square',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_med_profile' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'med-profile',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_medium_square' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'med-square',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_sm_profile' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'sm-profile',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_small_square' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'sm-square',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'stanford_thumbnail_square' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thmb-square',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'test' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'med-profile',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_s_image_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1200x1200',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-scaled' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-landscape-scaled' => 0,
          'image_med-profile' => 0,
          'image_med-profile-scaled' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_s_image_info-field_s_image_source_info'
  $field_instances['field_collection_item-field_s_image_info-field_s_image_source_info'] = array(
    'bundle' => 'field_s_image_info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the original name, if changed, and other information to aid in finding the original image.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_3_col_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_4_col_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_6_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_6_col_banner_short' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_6_col_banner_tall' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_8_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'stanford_8_col_banner_short' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'stanford_8_col_banner_tall' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_9_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_9_col_banner_short' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_12_col_banner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_icon_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_large_scaled' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_large_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_med_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_medium_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_sm_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_small_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'stanford_thumbnail_square' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'test' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_s_image_source_info',
    'label' => 'Source Info',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-body'
  $field_instances['node-stanford_publication-body'] = array(
    'bundle' => 'stanford_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a description for this publication. Optionally, by clicking "edit summary," you can enter a brief summary of the description.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-field_s_image_info'
  $field_instances['node-stanford_publication-field_s_image_info'] = array(
    'bundle' => 'stanford_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a featured image for the publication and add an optional caption.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => '300_flex_width_no_caption',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_image_info',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-field_s_pub_author'
  $field_instances['node-stanford_publication-field_s_pub_author'] = array(
    'bundle' => 'stanford_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_pub_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-field_s_pub_document'
  $field_instances['node-stanford_publication-field_s_pub_document'] = array(
    'bundle' => 'stanford_publication',
    'deleted' => 0,
    'description' => 'Upload document(s) associated with this publication.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_pub_document',
    'label' => 'Document(s)',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'publications',
      'file_extensions' => 'csv doc docx gz pdf ppt pptx tar txt xls xlsx zip',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-scaled' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-landscape-scaled' => 0,
          'image_med-profile' => 0,
          'image_med-profile-scaled' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_page-width' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-field_s_pub_link'
  $field_instances['node-stanford_publication-field_s_pub_link'] = array(
    'bundle' => 'stanford_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you want to link to the publisher\'s website in the Title field, enter "Learn more on publisher\'s website" and add the URL in the Link field (e.g., http://www.stanford.edu).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_pub_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-field_s_pub_publisher'
  $field_instances['node-stanford_publication-field_s_pub_publisher'] = array(
    'bundle' => 'stanford_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the name of the publisher.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_pub_publisher',
    'label' => 'Publisher',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-stanford_publication-field_s_publication_year'
  $field_instances['node-stanford_publication-field_s_publication_year'] = array(
    'bundle' => 'stanford_publication',
    'deleted' => 0,
    'description' => 'Choose the year of publication.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_publication_year',
    'label' => 'Publication Year',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'M j Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '1980:+4',
      ),
      'type' => 'date_select',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author');
  t('Caption');
  t('Choose the year of publication.');
  t('Credits');
  t('Description');
  t('Document(s)');
  t('Enter a description for this publication. Optionally, by clicking "edit summary," you can enter a brief summary of the description.');
  t('Enter the name of the publisher.');
  t('Enter the original name, if changed, and other information to aid in finding the original image.');
  t('Enter the photographer or organization credits.');
  t('Featured Image');
  t('If you want to link to the publisher\'s website in the Title field, enter "Learn more on publisher\'s website" and add the URL in the Link field (e.g., http://www.stanford.edu).');
  t('Image');
  t('Link');
  t('Optionally enter information to appear as a caption for this image. This text may be trimmed to 180 characters.');
  t('Publication Year');
  t('Publisher');
  t('Select a featured image for the publication and add an optional caption.');
  t('Source Info');
  t('Upload document(s) associated with this publication.');

  return $field_instances;
}
