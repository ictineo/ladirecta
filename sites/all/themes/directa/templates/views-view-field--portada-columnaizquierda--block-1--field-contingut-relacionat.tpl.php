<?php 
/** Afegim un wrapper amb les clases del field
* collection
* i mostrem nomes si esta promogut a portada
*/
/** recorem els valors del field collection **/
$out_d  = '';
$out_nd = '';
foreach($row->field_field_contingut_relacionat as $key => $rel) {
  /** agafem el id del field collection per carregarlo **/
  $coll_id = array_keys($rel['rendered']['entity']['field_collection_item'])[0];
  /** carreguem l'entitat sencera del field collectiion per accedir als camps **/
  $field_coll = array_values(entity_load('field_collection_item', array($coll_id)))[0];
  /** mirem que estigui promogut a portada **/
  //dsm(node_load($field_coll->field_contingut_relacionat_ref[LANGUAGE_NONE][0]['target_id']));
  if(!empty($field_coll->field_contingut_relacionat_ref)) {
    $node_rel = array_values($field_coll->field_contingut_relacionat_ref[LANGUAGE_NONE])[0]['entity'];
    //dsm($node_rel);
    if(!empty($field_coll->field_promogut_portada) && ($field_coll->field_promogut_portada[LANGUAGE_NONE][0]['value'] == 'promoted')) {
      /** detemrinem un string per si esta destacat o no**/
      $destacar_class = "no-destacat";
      $autor = field_view_field('node', $node_rel, 'field_autor', 'token');
      $data  = field_view_field('node', $node_rel, 'field_data', 'token');
      $body  = field_view_field('node', $node_rel, 'body', 'token');
      $foto  = field_view_field('node', $node_rel, 'field_portada_fotogaleria', 'token');
      if(!empty($field_coll->field_destacar) && $field_coll->field_destacar[LANGUAGE_NONE][0]['value'] == 1) {
        $destacar_class = "destacat";
        $out_d .= '<span class="' . $destacar_class . '">';
        $out_d .=   '<div class="meta-info-top"><span class="autories">';
        $out_d .=     drupal_render($autor);
        $out_d .=     drupal_render($data);
        $out_d .=   '</span></div>';
        $out_d .=   '<h2 class="node-title">' . $node_rel->title . '</h2>';
        $out_d .=   drupal_render($body);
        $out_d .= '</span>';
      }
      else {
        $out_nd .= '<span class="' . $destacar_class . '">';
        $out_nd .=   '<div class="meta-info-top"><span class="autories">';
        $out_nd .=     drupal_render($autor);
        $out_nd .=     drupal_render($data);
        $out_nd .=   '</span></div>';
        $out_nd .=   drupal_render($foto);
        $out_nd .=  '<div class="col-right">';
        $out_nd .=     '<h2 class="node-title">' . $node_rel->title . '</h2>';
        $out_nd .=     drupal_render($body);
        $out_nd .=  '</div>';
        $out_nd .= '</span>';
      }
    }
  }
} 
print $out_d;
if(!empty($out_nd)) {
  print '<h4 class="titol-rel-no-dest">Noticies relacionades:</h4>';
  print $out_nd;
}
?>
