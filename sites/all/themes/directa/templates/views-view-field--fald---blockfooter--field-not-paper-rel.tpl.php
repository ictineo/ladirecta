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
global $base_url;

foreach($row->field_field_not_paper_rel as $id => $obj): 
  $node = $obj['raw']['entity'];
  print '<div class="noti-no-dest count-' . $id . ' nid-' . $obj['raw']['target_id'] . '">';
  print   '<div class="meta-info-top">';
  print     render(field_view_field('node', $node, 'field_seccio', array('label' => 'hidden')));
  print     '<span class="autories">';
  print       render(field_view_field('node', $node, 'field_autor', array('label' => 'hidden')));
  print       render(field_view_field('node', $node, 'field_data', array('label' => 'hidden', 'settings' => array('format_type' => 'franja'))));
  print     '</span>';
  print   '</div>';
  print   '<a href="' . $base_url . '/' . drupal_get_path_alias('node/' . $node->nid) . '" class="node-title">' . $node->title . '</a>';
  print '</div>';

endforeach;

?>

