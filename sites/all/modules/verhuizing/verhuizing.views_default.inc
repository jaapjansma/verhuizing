<?php
/**
 * @file
 * verhuizing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function verhuizing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'objecten';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Objecten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Objecten';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'meer';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Toepassen';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Herstellen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Oplopend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Aflopend';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Voet: Algemeen: Tekstveld */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<ul>
<li><a href="node/add/ruimte">Nieuwe ruimte</a></li>
<li><a href="node/add/raam">Nieuw raam</a></li>
<li><a href="node/add/trap">Nieuw trap</a></li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[title]';
  /* Veld: Inhoud: Verdieping */
  $handler->display->display_options['fields']['field_verdieping']['id'] = 'field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['table'] = 'field_data_field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['field'] = 'field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['type'] = 'taxonomy_term_reference_plain';
  /* Veld: Inhoud: Opgemeten */
  $handler->display->display_options['fields']['field_opgemeten']['id'] = 'field_opgemeten';
  $handler->display->display_options['fields']['field_opgemeten']['table'] = 'field_data_field_opgemeten';
  $handler->display->display_options['fields']['field_opgemeten']['field'] = 'field_opgemeten';
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Foto\'s';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'fotos/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sorteercriterium: Inhoud: Opgemeten (field_opgemeten) */
  $handler->display->display_options['sorts']['field_opgemeten_value']['id'] = 'field_opgemeten_value';
  $handler->display->display_options['sorts']['field_opgemeten_value']['table'] = 'field_data_field_opgemeten';
  $handler->display->display_options['sorts']['field_opgemeten_value']['field'] = 'field_opgemeten_value';
  /* Sorteercriterium: Inhoud: Verdieping (field_verdieping) */
  $handler->display->display_options['sorts']['field_verdieping_tid']['id'] = 'field_verdieping_tid';
  $handler->display->display_options['sorts']['field_verdieping_tid']['table'] = 'field_data_field_verdieping';
  $handler->display->display_options['sorts']['field_verdieping_tid']['field'] = 'field_verdieping_tid';
  /* Filtercriterium: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtercriterium: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'raam' => 'raam',
    'ruimte' => 'ruimte',
    'trap' => 'trap',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'objecten';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Objecten';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['objecten'] = array(
    t('Master'),
    t('Objecten'),
    t('meer'),
    t('Toepassen'),
    t('Herstellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('<ul>
<li><a href="node/add/ruimte">Nieuwe ruimte</a></li>
<li><a href="node/add/raam">Nieuw raam</a></li>
<li><a href="node/add/trap">Nieuw trap</a></li>
</ul>'),
    t('[title]'),
    t('Verdieping'),
    t('Opgemeten'),
    t('Foto\'s'),
    t('Page'),
  );
  $export['objecten'] = $view;

  return $export;
}
