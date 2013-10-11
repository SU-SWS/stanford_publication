<?php
/**
 * @file
 * stanford_publication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_publication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publication_manage';
  $view->description = 'View, edit, and delete your site\'s content.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publication: Manage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'views_bulk_operations' => 'views_bulk_operations',
    'field_stanford_event_image' => 'field_stanford_event_image',
    'title' => 'title',
    'timestamp' => 'title',
    'status' => 'status',
    'changed' => 'changed',
    'field_s_pub_date' => 'field_s_pub_date',
    'field_s_pub_author' => 'field_s_pub_author',
    'field_s_pub_publisher' => 'field_s_pub_publisher',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'view_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'field_stanford_event_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_pub_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_pub_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_s_pub_publisher' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Row';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Modify',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_thumbnail_square',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = '';
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_s_pub_publisher']['id'] = 'field_s_pub_publisher';
  $handler->display->display_options['fields']['field_s_pub_publisher']['table'] = 'field_data_field_s_pub_publisher';
  $handler->display->display_options['fields']['field_s_pub_publisher']['field'] = 'field_s_pub_publisher';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node ID';
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_publication' => 'stanford_publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage/publication';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Publications';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-manage-content-by-type';
  $handler->display->display_options['menu']['context'] = 0;
  $export['publication_manage'] = $view;

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View More Publications';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_small_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Publication Year (field_s_publication_year) */
  $handler->display->display_options['sorts']['field_s_publication_year_value']['id'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['field'] = 'field_s_publication_year_value';
  $handler->display->display_options['sorts']['field_s_publication_year_value']['order'] = 'DESC';
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
    'stanford_publication' => 'stanford_publication',
  );

  /* Display: 21 Item Publication Page */
  $handler = $view->new_display('page', '21 Item Publication Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-five well';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No publications found.';
  $handler->display->display_options['empty']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_sm_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'normal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['text'] = '([field_s_publication_year])';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
    'stanford_publication' => 'stanford_publication',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  /* Filter criterion: Content: Author (field_s_pub_author) */
  $handler->display->display_options['filters']['field_s_pub_author_value']['id'] = 'field_s_pub_author_value';
  $handler->display->display_options['filters']['field_s_pub_author_value']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['filters']['field_s_pub_author_value']['field'] = 'field_s_pub_author_value';
  $handler->display->display_options['filters']['field_s_pub_author_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_s_pub_author_value']['group'] = 1;
  $handler->display->display_options['filters']['field_s_pub_author_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['operator_id'] = 'field_s_pub_author_value_op';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['label'] = 'Search by author';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['operator'] = 'field_s_pub_author_value_op';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['identifier'] = 'field_s_pub_author_value';
  $handler->display->display_options['filters']['field_s_pub_author_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    9 => 0,
    7 => 0,
    5 => 0,
    13 => 0,
    15 => 0,
    17 => 0,
  );
  $handler->display->display_options['path'] = 'publications';
  $handler->display->display_options['menu']['title'] = 'Publications';

  /* Display: 14 Item Publication Page Block */
  $handler = $view->new_display('block', '14 Item Publication Page Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-five';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_small_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'normal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['text'] = '([field_s_publication_year])';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'stanford_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';

  /* Display: 4 Item Publication Block With Images */
  $handler = $view->new_display('block', '4 Item Publication Block With Images', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'views-grid-four views-grid-header-footer';
  $handler->display->display_options['display_description'] = 'Department Bookshelf';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'views-align-center';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['format'] = 'content_editor_text_format';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_sm_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'normal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
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
    'stanford_publication' => 'stanford_publication',
  );

  /* Display: 4 Item Most Recent Publications Block */
  $handler = $view->new_display('block', '4 Item Most Recent Publications Block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'More Publications';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_s_image_info']['id'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['table'] = 'field_data_field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['field'] = 'field_s_image_info';
  $handler->display->display_options['fields']['field_s_image_info']['label'] = '';
  $handler->display->display_options['fields']['field_s_image_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_image_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_image_info']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'stanford_small_profile',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'normal-link';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_s_pub_author']['id'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['table'] = 'field_data_field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['field'] = 'field_s_pub_author';
  $handler->display->display_options['fields']['field_s_pub_author']['label'] = '';
  $handler->display->display_options['fields']['field_s_pub_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_s_pub_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_pub_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_s_pub_author']['delta_offset'] = '0';
  /* Field: Content: Publication Year */
  $handler->display->display_options['fields']['field_s_publication_year']['id'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['table'] = 'field_data_field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['field'] = 'field_s_publication_year';
  $handler->display->display_options['fields']['field_s_publication_year']['label'] = '';
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_s_publication_year']['alter']['text'] = '[field_s_pub_author], [field_s_publication_year]';
  $handler->display->display_options['fields']['field_s_publication_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_publication_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['edit_node']['element_wrapper_class'] = 'edit-link';
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'stanford_publication' => 'stanford_publication',
  );

  $export['publications'] = $view;

  return $export;
}
