<?php
/**
 * @file
 * verhuizing.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function verhuizing_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_aantal_treden'.
  $field_bases['field_aantal_treden'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_aantal_treden',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_afmetingen'.
  $field_bases['field_afmetingen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_afmetingen',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'dimension',
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
      'mode' => 2,
    ),
    'translatable' => 0,
    'type' => 'dimension',
  );

  // Exported field_base: 'field_afmetingen_2'.
  $field_bases['field_afmetingen_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_afmetingen_2',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'dimension',
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
      'mode' => 2,
    ),
    'translatable' => 0,
    'type' => 'dimension',
  );

  // Exported field_base: 'field_afmetingen_3'.
  $field_bases['field_afmetingen_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_afmetingen_3',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'dimension',
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
      'mode' => 2,
    ),
    'translatable' => 0,
    'type' => 'dimension',
  );

  // Exported field_base: 'field_beschrijvingen_afmetingen'.
  $field_bases['field_beschrijvingen_afmetingen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_beschrijvingen_afmetingen',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_beschrijvingen_afmetingen3'.
  $field_bases['field_beschrijvingen_afmetingen3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_beschrijvingen_afmetingen3',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_beschrijvingen_afmetingen_'.
  $field_bases['field_beschrijvingen_afmetingen_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_beschrijvingen_afmetingen_',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_foto_s'.
  $field_bases['field_foto_s'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_foto_s',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_hoogte_tot_plafond'.
  $field_bases['field_hoogte_tot_plafond'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hoogte_tot_plafond',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'dimension',
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
      'mode' => 1,
    ),
    'translatable' => 0,
    'type' => 'dimension',
  );

  // Exported field_base: 'field_hoogte_vanaf_grond'.
  $field_bases['field_hoogte_vanaf_grond'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hoogte_vanaf_grond',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'dimension',
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
      'mode' => 1,
    ),
    'translatable' => 0,
    'type' => 'dimension',
  );

  // Exported field_base: 'field_maten_binnenzijde'.
  $field_bases['field_maten_binnenzijde'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_maten_binnenzijde',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'physical',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'physical_dimensions',
  );

  // Exported field_base: 'field_opgemeten'.
  $field_bases['field_opgemeten'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opgemeten',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nog niet opgemeten',
        1 => 'Opgemeten',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_opmerkingen'.
  $field_bases['field_opmerkingen'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opmerkingen',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_vensterbak'.
  $field_bases['field_vensterbak'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_vensterbak',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Geen' => 'Geen',
        'Binnenzijde' => 'Binnenzijde',
        'Buitenzijde' => 'Buitenzijde',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_verdieping'.
  $field_bases['field_verdieping'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_verdieping',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'verdiepingen',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
