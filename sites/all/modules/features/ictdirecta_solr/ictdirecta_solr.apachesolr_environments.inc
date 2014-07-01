<?php
/**
 * @file
 * ictdirecta_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function ictdirecta_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'Solr server';
  $environment->url = 'http://188.165.131.21:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_index_last' => array(),
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'butlleti_sonor',
      2 => 'cd_noticies',
      3 => 'cd_serveis',
      4 => 'esdeveniment_agenda',
      5 => 'noticia',
      6 => 'numero_paper',
      7 => 'page',
      8 => 'punts_de_venda',
    ),
    'file' => array(
      0 => 'file',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
