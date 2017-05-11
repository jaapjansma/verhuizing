<?php
/**
 * @file
 * verhuizing.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function verhuizing_default_rules_configuration() {
  $items = array();
  $items['rules_node_added'] = entity_import('rules_config', '{ "rules_node_added" : {
      "LABEL" : "Node toegevoegd",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [ { "redirect" : { "url" : "objecten" } } ]
    }
  }');
  $items['rules_node_edited'] = entity_import('rules_config', '{ "rules_node_edited" : {
      "LABEL" : "Node edited",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [ { "redirect" : { "url" : "objecten" } } ]
    }
  }');
  return $items;
}
