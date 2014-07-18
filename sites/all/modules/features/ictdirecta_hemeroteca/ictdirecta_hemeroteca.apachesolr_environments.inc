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
    'apachesolr_index_last' => array(
      'node' => array(
        'last_changed' => '1405608245',
        'last_entity_id' => '209',
      ),
    ),
    'apachesolr_index_updated' => 0,
    'apachesolr_last_optimize' => 1405670105,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'butlleti_sonor',
      1 => 'cd_noticies',
      2 => 'cd_serveis',
      3 => 'esdeveniment_agenda',
      4 => 'noticia',
      5 => 'noticia_paper',
      6 => 'numero_paper',
      7 => 'punts_de_venda',
    ),
  );
  $export['solr_server'] = $environment;

  return $export;
}
