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
?>
<?php //print $output; ?>
<div id="faldo-sidebar-cplayer-wrapper" class="cp-jplayer"></div>
<?php /** view-source:http://happyworm.com/jPlayerLab/circleplayer/v13/ **/ ?>
<div class="prototype-wrapper">
  <div id="cp_container_faldo_sidebar" class="cp-container">
    <div class="cp-buffer-holder">
      <div class="cp-buffer-1"></div>
      <div class="cp-buffer-2"></div>
    </div>
    <div class="cp-progress-holder">
      <div class="cp-progress-1"></div>
      <div class="cp-progress-2"></div>
    </div>
    <div class="cp-circle-control"></div>
    <ul class="cp-controls">
      <li><a href="#" class="cp-play" tabindex="1">play</a></li>
      <li><a href="#" class="cp-pause" style="display:none;" tabindex="1">pause</a></li>
    </ul>
  </div>
</div>

<?php
  //print libraries_get_path('circleplayer');
  drupal_add_js(libraries_get_path('circleplayer') . '/js/jquery.grab.js');
  drupal_add_js(libraries_get_path('circleplayer') . '/js/jquery.jplayer.js');
  drupal_add_js(libraries_get_path('circleplayer') . '/js/jquery.transform2d.js');
  drupal_add_js(libraries_get_path('circleplayer') . '/js/mod.csstransforms.min.js');
  drupal_add_js(libraries_get_path('circleplayer') . '/js/circle.player.js');
  drupal_add_css(libraries_get_path('circleplayer') . '/circle.skin/circle.player.css');

?>
<script type="text/javascript">
jQuery(document).ready(function(){
  var circlePlayerFaldoFooter = new CirclePlayer("#faldo-sidebar-cplayer-wrapper",
  {
    mp3: "<?php print file_create_url($row->field_field_butlleti_sonor[0]['raw']['uri']); ?>",
  }, {
    cssSelectorAncestor: "#cp_container_faldo_sidebar",
    swfPath: "js",
    supplied: "mp3",
    wmode: "window"
  });
});
</script>
