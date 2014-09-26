<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */

?>
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
  <?php if($view_mode == 'full'): ?>
    <?php
      // We hide the comments and links now so that we can render them later.
      //print render($content);
      print(render($content['field_subtitol']));
      print(render($content['field_fotografia']));
      ?>
    <?php
      print(render($content['body']));
      print(render($content['easy_social_1'])); 
    ?>
      <div id="tags-wrapper">
        <div id="tags-etiquetes-wrapper">
          <?php print render($content['field_etiquetes']); ?>
        </div>
      </div>
    <?php else: ?>
      <?php
        hide($content['links']);
        hide($content['comments']);
        print(render($content));
      endif;
?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
