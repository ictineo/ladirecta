<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
if($view_mode == 'full') {
  global $base_url;
  $query_next = new EntityFieldQuery();
  $query_next->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'noticia')
      ->propertyCondition('status', 1)
      ->fieldCondition('field_data', 'value', $node->field_data[LANGUAGE_NONE][0]['value'], '>')
      ->fieldOrderBy('field_data', 'value', 'ASC')
      ->range(0, 1);
  $result = $query_next->execute();
  $next_url   = $base_url . '/' . drupal_get_path_alias('node/' . array_keys($result['node'])[0]);
  $next_title = node_load(array_values($result['node'])[0]->nid)->title;

  $query_prev = new EntityFieldQuery();
  $query_prev->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'noticia')
      ->propertyCondition('status', 1)
      ->fieldCondition('field_data', 'value', $node->field_data[LANGUAGE_NONE][0]['value'], '<')
      ->fieldOrderBy('field_data', 'value', 'DESC')
      ->range(0, 1);
  $result = $query_prev->execute();
  $prev_url   = $base_url . '/' . drupal_get_path_alias('node/' . array_keys($result['node'])[0]);
  $prev_title = node_load(array_values($result['node'])[0]->nid)->title;
}

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
    <div class='node-nav-links node-nav-links-prev'><a href="<?php print $prev_url; ?>"><?php print $prev_title; ?></a></div>
    <div class='node-nav-links node-nav-links-next'><a href="<?php print $next_url; ?>"><?php print $next_title; ?></a></div>
  <?php endif; ?>
  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
