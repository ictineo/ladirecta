<?php
/**
 * @file
 * ictdirecta_hemeroteca.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function ictdirecta_hemeroteca_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr_server';
  $environment->name = 'Solr server';
  $environment->url = 'http://188.165.131.21:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1405077970',
        'last_entity_id' => '220',
      ),
      'file' => array(
        'last_changed' => '1405077970',
        'last_entity_id' => '72',
      ),
    ),
    'apachesolr_index_updated' => 1405328788,
    'apachesolr_last_optimize' => 1405328788,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'butlleti_sonor',
      1 => 'cd_noticies',
      2 => 'cd_serveis',
      3 => 'esdeveniment_agenda',
      4 => 'noticia',
      5 => 'numero_paper',
      6 => 'punts_de_venda',
    ),
    'file' => array(
      0 => 'file',
    ),
  );
  $export['solr_server'] = $environment;

  return $export;
}
