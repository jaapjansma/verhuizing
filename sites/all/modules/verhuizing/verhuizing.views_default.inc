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
  $view->name = 'alle_objecten';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alle objecten';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alle objecten';
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
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['text'] = 'Filter';
  $handler->display->display_options['style_options']['choose'] = '- Kiezen -';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'fotos/[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['alle_objecten'] = array(
    t('Master'),
    t('Alle objecten'),
    t('meer'),
    t('Toepassen'),
    t('Herstellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('fotos/[nid]'),
    t('Block'),
  );
  $export['alle_objecten'] = $view;

  $view = new view();
  $view->name = 'foto_s_opmerkingen';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Foto\'s & Opmerkingen';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Foto\'s & Opmerkingen';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kop: Algemeen: Gebied van het overzicht */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['empty'] = TRUE;
  $handler->display->display_options['header']['view']['view_to_insert'] = 'alle_objecten:block';
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'h2';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[title]';
  /* Veld: Inhoud: Verdieping */
  $handler->display->display_options['fields']['field_verdieping']['id'] = 'field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['table'] = 'field_data_field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['field'] = 'field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['label'] = '';
  $handler->display->display_options['fields']['field_verdieping']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_verdieping']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_verdieping']['type'] = 'taxonomy_term_reference_plain';
  /* Veld: Inhoud: Opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = '';
  $handler->display->display_options['fields']['field_opmerkingen']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_opmerkingen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opmerkingen']['type'] = 'text_plain';
  /* Veld: Inhoud: Foto's */
  $handler->display->display_options['fields']['field_foto_s']['id'] = 'field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['table'] = 'field_data_field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['field'] = 'field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['label'] = '';
  $handler->display->display_options['fields']['field_foto_s']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_foto_s']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_foto_s']['alter']['path'] = 'fotos/[nid]/gallerij';
  $handler->display->display_options['fields']['field_foto_s']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_foto_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto_s']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto_s']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_foto_s']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_foto_s']['separator'] = '';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fotos';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Foto\'s';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Pagina */
  $handler = $view->new_display('page', 'Pagina', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Inhoud: Bewerkingslink */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['edit_node']['element_type'] = 'h2';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[title]';
  /* Veld: Inhoud: Verdieping */
  $handler->display->display_options['fields']['field_verdieping']['id'] = 'field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['table'] = 'field_data_field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['field'] = 'field_verdieping';
  $handler->display->display_options['fields']['field_verdieping']['label'] = '';
  $handler->display->display_options['fields']['field_verdieping']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_verdieping']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_verdieping']['type'] = 'taxonomy_term_reference_plain';
  /* Veld: Inhoud: Opmerkingen */
  $handler->display->display_options['fields']['field_opmerkingen']['id'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['table'] = 'field_data_field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['field'] = 'field_opmerkingen';
  $handler->display->display_options['fields']['field_opmerkingen']['label'] = '';
  $handler->display->display_options['fields']['field_opmerkingen']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_opmerkingen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opmerkingen']['type'] = 'text_plain';
  /* Veld: Inhoud: Foto's */
  $handler->display->display_options['fields']['field_foto_s']['id'] = 'field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['table'] = 'field_data_field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['field'] = 'field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['label'] = '';
  $handler->display->display_options['fields']['field_foto_s']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_foto_s']['alter']['path'] = 'fotos/[nid]/gallerij';
  $handler->display->display_options['fields']['field_foto_s']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_foto_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto_s']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto_s']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_foto_s']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_foto_s']['separator'] = '';
  /* Veld: Inhoud: Aantal treden */
  $handler->display->display_options['fields']['field_aantal_treden']['id'] = 'field_aantal_treden';
  $handler->display->display_options['fields']['field_aantal_treden']['table'] = 'field_data_field_aantal_treden';
  $handler->display->display_options['fields']['field_aantal_treden']['field'] = 'field_aantal_treden';
  $handler->display->display_options['fields']['field_aantal_treden']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_aantal_treden']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_aantal_treden']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Veld: Inhoud: Afmetingen */
  $handler->display->display_options['fields']['field_afmetingen_1']['id'] = 'field_afmetingen_1';
  $handler->display->display_options['fields']['field_afmetingen_1']['table'] = 'field_data_field_afmetingen_1';
  $handler->display->display_options['fields']['field_afmetingen_1']['field'] = 'field_afmetingen_1';
  $handler->display->display_options['fields']['field_afmetingen_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_afmetingen_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_afmetingen_1']['click_sort_column'] = 'length';
  $handler->display->display_options['fields']['field_afmetingen_1']['delta_offset'] = '0';
  /* Veld: Inhoud: Afstand tot linkermuur */
  $handler->display->display_options['fields']['field_afstand_tot_linkermuur']['id'] = 'field_afstand_tot_linkermuur';
  $handler->display->display_options['fields']['field_afstand_tot_linkermuur']['table'] = 'field_data_field_afstand_tot_linkermuur';
  $handler->display->display_options['fields']['field_afstand_tot_linkermuur']['field'] = 'field_afstand_tot_linkermuur';
  $handler->display->display_options['fields']['field_afstand_tot_linkermuur']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_afstand_tot_linkermuur']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_afstand_tot_linkermuur']['type'] = 'dimension_formatter_simple';
  /* Veld: Inhoud: Afstand tot rechtermuur */
  $handler->display->display_options['fields']['field_afstand_tot_rechtermuur']['id'] = 'field_afstand_tot_rechtermuur';
  $handler->display->display_options['fields']['field_afstand_tot_rechtermuur']['table'] = 'field_data_field_afstand_tot_rechtermuur';
  $handler->display->display_options['fields']['field_afstand_tot_rechtermuur']['field'] = 'field_afstand_tot_rechtermuur';
  $handler->display->display_options['fields']['field_afstand_tot_rechtermuur']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_afstand_tot_rechtermuur']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_afstand_tot_rechtermuur']['type'] = 'dimension_formatter_simple';
  /* Veld: Inhoud: Hoogte tot plafond */
  $handler->display->display_options['fields']['field_hoogte_tot_plafond']['id'] = 'field_hoogte_tot_plafond';
  $handler->display->display_options['fields']['field_hoogte_tot_plafond']['table'] = 'field_data_field_hoogte_tot_plafond';
  $handler->display->display_options['fields']['field_hoogte_tot_plafond']['field'] = 'field_hoogte_tot_plafond';
  $handler->display->display_options['fields']['field_hoogte_tot_plafond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hoogte_tot_plafond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hoogte_tot_plafond']['type'] = 'dimension_formatter_simple';
  /* Veld: Inhoud: Hoogte vanaf grond */
  $handler->display->display_options['fields']['field_hoogte_vanaf_grond']['id'] = 'field_hoogte_vanaf_grond';
  $handler->display->display_options['fields']['field_hoogte_vanaf_grond']['table'] = 'field_data_field_hoogte_vanaf_grond';
  $handler->display->display_options['fields']['field_hoogte_vanaf_grond']['field'] = 'field_hoogte_vanaf_grond';
  $handler->display->display_options['fields']['field_hoogte_vanaf_grond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_hoogte_vanaf_grond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_hoogte_vanaf_grond']['type'] = 'dimension_formatter_simple';
  /* Veld: Inhoud: Maten binnenzijde */
  $handler->display->display_options['fields']['field_maten_binnenzijde']['id'] = 'field_maten_binnenzijde';
  $handler->display->display_options['fields']['field_maten_binnenzijde']['table'] = 'field_data_field_maten_binnenzijde';
  $handler->display->display_options['fields']['field_maten_binnenzijde']['field'] = 'field_maten_binnenzijde';
  $handler->display->display_options['fields']['field_maten_binnenzijde']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_maten_binnenzijde']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maten_binnenzijde']['click_sort_column'] = 'length';
  /* Veld: Inhoud: Maten inclusief kozijn */
  $handler->display->display_options['fields']['field_maten_inclusief_kozijn']['id'] = 'field_maten_inclusief_kozijn';
  $handler->display->display_options['fields']['field_maten_inclusief_kozijn']['table'] = 'field_data_field_maten_inclusief_kozijn';
  $handler->display->display_options['fields']['field_maten_inclusief_kozijn']['field'] = 'field_maten_inclusief_kozijn';
  $handler->display->display_options['fields']['field_maten_inclusief_kozijn']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_maten_inclusief_kozijn']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maten_inclusief_kozijn']['click_sort_column'] = 'length';
  /* Veld: Inhoud: Vensterbank */
  $handler->display->display_options['fields']['field_vensterbak']['id'] = 'field_vensterbak';
  $handler->display->display_options['fields']['field_vensterbak']['table'] = 'field_data_field_vensterbak';
  $handler->display->display_options['fields']['field_vensterbak']['field'] = 'field_vensterbak';
  $handler->display->display_options['fields']['field_vensterbak']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_vensterbak']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextueel filter: Inhoud: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'fotos/%';
  $translatables['foto_s_opmerkingen'] = array(
    t('Master'),
    t('Foto\'s & Opmerkingen'),
    t('meer'),
    t('Toepassen'),
    t('Herstellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('[title]'),
    t('Page'),
    t('Pagina'),
    t('Aantal treden'),
    t('Afmetingen'),
    t('Afstand tot linkermuur'),
    t('Afstand tot rechtermuur'),
    t('Hoogte tot plafond'),
    t('Hoogte vanaf grond'),
    t('Maten binnenzijde'),
    t('Maten inclusief kozijn'),
    t('Vensterbank'),
    t('Alle'),
  );
  $export['foto_s_opmerkingen'] = $view;

  $view = new view();
  $view->name = 'fotos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'fotos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'fotos';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Startpunt';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Veld: Inhoud: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Terug naar foto\'s';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'fotos/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Veld: Inhoud: Foto's */
  $handler->display->display_options['fields']['field_foto_s']['id'] = 'field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['table'] = 'field_data_field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['field'] = 'field_foto_s';
  $handler->display->display_options['fields']['field_foto_s']['label'] = '';
  $handler->display->display_options['fields']['field_foto_s']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_foto_s']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_foto_s']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_foto_s']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_foto_s']['delta_offset'] = '0';
  /* Sorteercriterium: Inhoud: Datum van inzending */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextueel filter: Inhoud: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  /* Filtercriterium: Inhoud: Foto&#039;s (field_foto_s:fid) */
  $handler->display->display_options['filters']['field_foto_s_fid']['id'] = 'field_foto_s_fid';
  $handler->display->display_options['filters']['field_foto_s_fid']['table'] = 'field_data_field_foto_s';
  $handler->display->display_options['filters']['field_foto_s_fid']['field'] = 'field_foto_s_fid';
  $handler->display->display_options['filters']['field_foto_s_fid']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fotos/%/gallerij';
  $translatables['fotos'] = array(
    t('Master'),
    t('fotos'),
    t('meer'),
    t('Toepassen'),
    t('Herstellen'),
    t('Sorteren op'),
    t('Oplopend'),
    t('Aflopend'),
    t('Items per pagina'),
    t('- Alle -'),
    t('Startpunt'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Terug naar foto\'s'),
    t('Alle'),
    t('Page'),
  );
  $export['fotos'] = $view;

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
  /* Veld: Algemeen: Aangepaste tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Fotogallerij';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'fotos/[nid]/gallerij';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
    t('Foto\'s'),
    t('Fotogallerij'),
    t('Page'),
  );
  $export['objecten'] = $view;

  return $export;
}
