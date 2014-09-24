<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<!--Bola gris-->
<div class="bola"><?php print "&nbsp"; ?></div>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['easy_social_1']);
    print render($content);

    $search_block = block_load('views', '-exp-hemeroteca-page_1');
    $output =  drupal_render(_block_get_renderable_array(_block_render_blocks(array($search_block)))); 
    print $output; 
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
  <?php drupal_add_js(drupal_get_path('theme', 'directa') . '/js/placeholder.js'); ?>
