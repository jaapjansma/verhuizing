<?php
/**
 * @file
 * verhuizing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function verhuizing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-raam-field_afstand_tot_linkermuur'.
  $field_instances['node-raam-field_afstand_tot_linkermuur'] = array(
    'bundle' => 'raam',
    'default_value' => array(
      0 => array(
        'length' => 1,
        'width' => 1,
        'height' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'dimension',
        'settings' => array(),
        'type' => 'dimension_formatter',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_afstand_tot_linkermuur',
    'label' => 'Afstand tot linkermuur',
    'required' => 0,
    'settings' => array(
      'fields' => array(
        'height' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Hoogte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'length' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Lengte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'width' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Breedte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'dimension',
      'settings' => array(),
      'type' => 'dimension_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-raam-field_afstand_tot_rechtermuur'.
  $field_instances['node-raam-field_afstand_tot_rechtermuur'] = array(
    'bundle' => 'raam',
    'default_value' => array(
      0 => array(
        'length' => 1,
        'width' => 1,
        'height' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'dimension',
        'settings' => array(),
        'type' => 'dimension_formatter',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_afstand_tot_rechtermuur',
    'label' => 'Afstand tot rechtermuur',
    'required' => 0,
    'settings' => array(
      'fields' => array(
        'height' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Hoogte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'length' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Lengte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'width' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Breedte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'dimension',
      'settings' => array(),
      'type' => 'dimension_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-raam-field_foto_s'.
  $field_instances['node-raam-field_foto_s'] = array(
    'bundle' => 'raam',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_foto_s',
    'label' => 'Foto\'s',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-raam-field_hoogte_tot_plafond'.
  $field_instances['node-raam-field_hoogte_tot_plafond'] = array(
    'bundle' => 'raam',
    'default_value' => array(
      0 => array(
        'length' => 1,
        'width' => 1,
        'height' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'dimension',
        'settings' => array(),
        'type' => 'dimension_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hoogte_tot_plafond',
    'label' => 'Hoogte tot plafond',
    'required' => 0,
    'settings' => array(
      'fields' => array(
        'height' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Hoogte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'length' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Lengte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'width' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Breedte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'dimension',
      'settings' => array(),
      'type' => 'dimension_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-raam-field_hoogte_vanaf_grond'.
  $field_instances['node-raam-field_hoogte_vanaf_grond'] = array(
    'bundle' => 'raam',
    'default_value' => array(
      0 => array(
        'length' => 1,
        'width' => 1,
        'height' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'dimension',
        'settings' => array(),
        'type' => 'dimension_formatter',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hoogte_vanaf_grond',
    'label' => 'Hoogte vanaf grond',
    'required' => 0,
    'settings' => array(
      'fields' => array(
        'height' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Hoogte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'length' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Lengte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'width' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Breedte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'dimension',
      'settings' => array(),
      'type' => 'dimension_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-raam-field_maten_binnenzijde'.
  $field_instances['node-raam-field_maten_binnenzijde'] = array(
    'bundle' => 'raam',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_dimensions_formatted',
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
    'field_name' => 'field_maten_binnenzijde',
    'label' => 'Maten binnenzijde',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'physical',
      'settings' => array(
        'default_unit' => 'mm',
        'unit_select_list' => 1,
      ),
      'type' => 'physical_dimensions_textfields',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-raam-field_maten_inclusief_kozijn'.
  $field_instances['node-raam-field_maten_inclusief_kozijn'] = array(
    'bundle' => 'raam',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_dimensions_formatted',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maten_inclusief_kozijn',
    'label' => 'Maten inclusief kozijn',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'physical',
      'settings' => array(
        'default_unit' => 'mm',
        'unit_select_list' => 1,
      ),
      'type' => 'physical_dimensions_textfields',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-raam-field_opgemeten'.
  $field_instances['node-raam-field_opgemeten'] = array(
    'bundle' => 'raam',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opgemeten',
    'label' => 'Opgemeten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-raam-field_opmerkingen'.
  $field_instances['node-raam-field_opmerkingen'] = array(
    'bundle' => 'raam',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
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
    'field_name' => 'field_opmerkingen',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-raam-field_vensterbak'.
  $field_instances['node-raam-field_vensterbak'] = array(
    'bundle' => 'raam',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vensterbak',
    'label' => 'Vensterbank',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-raam-field_verdieping'.
  $field_instances['node-raam-field_verdieping'] = array(
    'bundle' => 'raam',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_verdieping',
    'label' => 'Verdieping',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-ruimte-field_afmetingen_1'.
  $field_instances['node-ruimte-field_afmetingen_1'] = array(
    'bundle' => 'ruimte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'physical',
        'settings' => array(),
        'type' => 'physical_dimensions_formatted',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_afmetingen_1',
    'label' => 'Afmetingen',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'physical',
      'settings' => array(
        'default_unit' => 'mm',
        'unit_select_list' => 1,
      ),
      'type' => 'physical_dimensions_textfields',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ruimte-field_foto_s'.
  $field_instances['node-ruimte-field_foto_s'] = array(
    'bundle' => 'ruimte',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_foto_s',
    'label' => 'Foto\'s',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '128MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-ruimte-field_hoogte_tot_plafond'.
  $field_instances['node-ruimte-field_hoogte_tot_plafond'] = array(
    'bundle' => 'ruimte',
    'default_value' => array(
      0 => array(
        'length' => 1,
        'width' => 1,
        'height' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'dimension',
        'settings' => array(),
        'type' => 'dimension_formatter',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hoogte_tot_plafond',
    'label' => 'Hoogte tot plafond',
    'required' => 0,
    'settings' => array(
      'fields' => array(
        'height' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Hoogte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'length' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Lengte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
        'width' => array(
          'datatype' => 1,
          'decimals' => 0,
          'descr' => '',
          'factor' => 1,
          'label' => 'Breedte',
          'prefix' => '',
          'suffix' => 'mm',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'dimension',
      'settings' => array(),
      'type' => 'dimension_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-ruimte-field_opgemeten'.
  $field_instances['node-ruimte-field_opgemeten'] = array(
    'bundle' => 'ruimte',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opgemeten',
    'label' => 'Opgemeten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-ruimte-field_opmerkingen'.
  $field_instances['node-ruimte-field_opmerkingen'] = array(
    'bundle' => 'ruimte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_opmerkingen',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-ruimte-field_verdieping'.
  $field_instances['node-ruimte-field_verdieping'] = array(
    'bundle' => 'ruimte',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_verdieping',
    'label' => 'Verdieping',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-trap-field_aantal_treden'.
  $field_instances['node-trap-field_aantal_treden'] = array(
    'bundle' => 'trap',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
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
    'field_name' => 'field_aantal_treden',
    'label' => 'Aantal treden',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-trap-field_foto_s'.
  $field_instances['node-trap-field_foto_s'] = array(
    'bundle' => 'trap',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_foto_s',
    'label' => 'Foto\'s',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-trap-field_opgemeten'.
  $field_instances['node-trap-field_opgemeten'] = array(
    'bundle' => 'trap',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opgemeten',
    'label' => 'Opgemeten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-trap-field_opmerkingen'.
  $field_instances['node-trap-field_opmerkingen'] = array(
    'bundle' => 'trap',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opmerkingen',
    'label' => 'Opmerkingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-trap-field_verdieping'.
  $field_instances['node-trap-field_verdieping'] = array(
    'bundle' => 'trap',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_verdieping',
    'label' => 'Verdieping',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aantal treden');
  t('Afmetingen');
  t('Afstand tot linkermuur');
  t('Afstand tot rechtermuur');
  t('Foto\'s');
  t('Hoogte tot plafond');
  t('Hoogte vanaf grond');
  t('Maten binnenzijde');
  t('Maten inclusief kozijn');
  t('Opgemeten');
  t('Opmerkingen');
  t('Vensterbank');
  t('Verdieping');

  return $field_instances;
}
