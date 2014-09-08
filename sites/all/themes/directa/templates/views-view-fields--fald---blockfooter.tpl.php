<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<div id=faldo-general>

  <div id=faldo_esquerra>

    <div id=faldo_esquerra_portada>
    <?php print $fields['field_portada_numero']->content; ?>
    </div>
    <div id=faldo_esquerra_dreta>
    <?php print $fields['easy_social']->content; ?>
      <div id="faldo-footer-cplayer-wrapper" class="cp-jplayer"></div>
        <?php /** view-source:http://happyworm.com/jPlayerLab/circleplayer/v13/ **/ ?>
        <div class="prototype-wrapper">
          <div id="cp_container_faldo_footer" class="cp-container">
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
    <?php print $fields['nothing']->content; ?>
    </div>
  </div>
  <div id=faldo_dreta>
    <div id=faldo_dreta_destacat>
      <div id=faldo_dreta_destacat_fotografai>
      <?php print $fields['field_fotografia_portada']->content; ?>
      </div>
      <div id=faldo_dreta_destacat_noticia>
        <div id=seccio_autor> 
        <?php print $fields['field_seccio']->content; ?>
        <?php print $fields['field_autor']->content; ?>
        <?php print $fields['field_data']->content; ?>
      </div>
        <div id=titol_destacada>      
        <?php print $fields['title_1']->content; ?>
        <?php print $fields['body']->content; ?>
        </div>
      </div>
    </div>
    <div id=faldo_dreta_noticies>
    <?php print $fields['field_contingut_relacionat_ref']->content; ?>
    </div>
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
  var circlePlayerFaldoFooter = new CirclePlayer("#faldo-footer-cplayer-wrapper",
  {
    mp3: "<?php print $fields['field_butlleti_sonor']->content; ?>",
  }, {
    cssSelectorAncestor: "#cp_container_faldo_footer",
    swfPath: "js",
    supplied: "mp3",
    wmode: "window"
  });
});
</script>
