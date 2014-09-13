<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

/** Afegim un wrapper amb les clases del field
 * collection
 * i mostrem nomes si esta promogut a portada
 */
/** recorem els valors del field collection **/
foreach($row->field_field_contingut_relacionat as $key => $rel) {
  /** agafem el id del field collection per carregarlo **/
  $coll_id = array_keys($rel['rendered']['entity']['field_collection_item'])[0];
  /** carreguem l'entitat sencera del field collectiion per accedir als camps **/
  $field_coll = array_values(entity_load('field_collection_item', array($coll_id)))[0];
  /** mirem que estigui promogut a portada **/
  dsm($field_coll);
  if(!empty($field_coll->field_promogut_portada) && ($field_coll->field_promogut_portada[LANGUAGE_NONE][0]['value'] == 'promoted')) {
    /** detemrinem un string per si esta destacat o no**/
    $destacar_class = "no-destacat";
    if(!empty($field_coll->field_destacar) && $field_coll->field_destacar[LANGUAGE_NONE][0]['value'] == 1) {
      $destacar_class = "destacat";
    }
    /** mostrem el wrapper amb la clase **/
    print('<span class="' . $destacar_class . '">');
      /** renderitzem el valor inicial de la row per lelement referenciat del field collection **/
      print drupal_render(array_values($rel['rendered']['entity']['field_collection_item'])[0]['field_contingut_relacionat_ref']);
    print('</span>');
  }
}
?>
