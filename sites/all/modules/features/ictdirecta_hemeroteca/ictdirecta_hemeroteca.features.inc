<?php
/**
 * @file
 * ictdirecta_hemeroteca.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ictdirecta_hemeroteca_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "apachesolr_search" && $api == "apachesolr_search_defaults") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ictdirecta_hemeroteca_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function ictdirecta_hemeroteca_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_hemeroteca'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_hemeroteca",
    "name" : "Hemeroteca",
    "index_id" : "default_node_index",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "result count" : true,
      "fields" : [
        "attachments_field_butlleti_sonor",
        "attachments_field_pdf",
        "body:value",
        "title"
      ],
      "results" : 1,
      "min_length" : "2",
      "custom" : { "display" : "page" }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function ictdirecta_hemeroteca_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv " }
        },
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-48", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-46",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "-44", "settings" : [] },
        "search_api_attachments_field_collections_alter_settings" : {
          "status" : 0,
          "weight" : "-42",
          "settings" : { "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv" }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "-40", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "-38",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "-36", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "-34", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "-32", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 1, "weight" : "-30", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "attachments_field_pdf" : true,
              "attachments_field_butlleti_sonor" : true,
              "body:value" : true,
              "field_pdf:file" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "fields" : {
        "attachments_field_butlleti_sonor" : { "type" : "text" },
        "attachments_field_pdf" : { "type" : "text" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "field_data" : { "type" : "date" },
        "field_pdf:file" : { "type" : "integer", "entity_type" : "file" },
        "field_seccio" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_territori" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_territoripv" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_webpv" : { "type" : "boolean" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
