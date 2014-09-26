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
<div id="faldo-general">
  <?php print $fields['title']->content; ?>
  <div id="faldo_esquerra">
    <div id="faldo_esquerra_portada">
    <?php print $fields['field_portada_numero']->content; ?>
    </div>
    <div id="faldo_esquerra_dreta">
      <?php print $fields['easy_social']->content; ?>
      <?php print $fields['nothing']->content; ?>
    </div>
  </div>
  <div id="faldo_dreta">
    <div id="faldo_dreta_destacat">
      <div id="faldo_dreta_destacat_fotografia">
      <?php print $fields['field_portada_fotogaleria']->content; ?>
      </div>
      <div id="faldo_dreta_destacat_noticia">
        <div id="seccio_autor"> 
          <div class="meta-info-top">
            <?php print $fields['field_seccio']->content; ?>
            <span class="autories">
              <?php print $fields['field_autor']->content; ?>
              <?php print $fields['field_data']->content; ?>
            </span>
          </div>
        </div>
        <div id="titol_destacada">      
        <?php print $fields['title_1']->content; ?>
        <?php print $fields['body']->content; ?>
        </div>
      </div>
    </div>
    <div id="faldo_dreta_noticies">
    <?php print $fields['field_not_paper_rel']->content; ?>
    </div>
  </div>
</div>

