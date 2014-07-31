<?php
/**
 * @file
 * ictdirecta_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ictdirecta_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_a-fons:taxonomy/term/241
  $menu_links['menu-menu-paper_a-fons:taxonomy/term/241'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/241',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'A Fons',
    'options' => array(
      'attributes' => array(
        'title' => 'A Fons',
      ),
      'identifier' => 'menu-menu-paper_a-fons:taxonomy/term/241',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_aix-est-el-pati:taxonomy/term/230
  $menu_links['menu-menu-paper_aix-est-el-pati:taxonomy/term/230'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/230',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Així està el pati',
    'options' => array(
      'attributes' => array(
        'title' => 'Així està el pati',
      ),
      'identifier' => 'menu-menu-paper_aix-est-el-pati:taxonomy/term/230',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_barri--internet:taxonomy/term/248
  $menu_links['menu-menu-paper_barri--internet:taxonomy/term/248'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/248',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Barri  Internet',
    'options' => array(
      'attributes' => array(
        'title' => 'Barri  Internet',
      ),
      'identifier' => 'menu-menu-paper_barri--internet:taxonomy/term/248',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_estirant-del-fil:taxonomy/term/229
  $menu_links['menu-menu-paper_estirant-del-fil:taxonomy/term/229'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/229',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Estirant del Fil',
    'options' => array(
      'attributes' => array(
        'title' => 'Estirant del Fil',
      ),
      'identifier' => 'menu-menu-paper_estirant-del-fil:taxonomy/term/229',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_expressions:taxonomy/term/242
  $menu_links['menu-menu-paper_expressions:taxonomy/term/242'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/242',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Expressions',
    'options' => array(
      'attributes' => array(
        'title' => 'Expressions',
      ),
      'identifier' => 'menu-menu-paper_expressions:taxonomy/term/242',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_impressions:taxonomy/term/231
  $menu_links['menu-menu-paper_impressions:taxonomy/term/231'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/231',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Impressions',
    'options' => array(
      'attributes' => array(
        'title' => 'Impressions',
      ),
      'identifier' => 'menu-menu-paper_impressions:taxonomy/term/231',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_indirecta:taxonomy/term/249
  $menu_links['menu-menu-paper_indirecta:taxonomy/term/249'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/249',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Indirecta',
    'options' => array(
      'attributes' => array(
        'title' => 'Indirecta',
      ),
      'identifier' => 'menu-menu-paper_indirecta:taxonomy/term/249',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_miralls:taxonomy/term/244
  $menu_links['menu-menu-paper_miralls:taxonomy/term/244'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/244',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Miralls',
    'options' => array(
      'attributes' => array(
        'title' => 'Miralls',
      ),
      'identifier' => 'menu-menu-paper_miralls:taxonomy/term/244',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_ms-que-mil:taxonomy/term/246
  $menu_links['menu-menu-paper_ms-que-mil:taxonomy/term/246'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/246',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Més que mil',
    'options' => array(
      'attributes' => array(
        'title' => 'Més que mil',
      ),
      'identifier' => 'menu-menu-paper_ms-que-mil:taxonomy/term/246',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_poca-broma:taxonomy/term/243
  $menu_links['menu-menu-paper_poca-broma:taxonomy/term/243'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/243',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Poca Broma',
    'options' => array(
      'attributes' => array(
        'title' => 'Poca Broma',
      ),
      'identifier' => 'menu-menu-paper_poca-broma:taxonomy/term/243',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_roda-del-mn:taxonomy/term/247
  $menu_links['menu-menu-paper_roda-del-mn:taxonomy/term/247'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/247',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Roda del Món',
    'options' => array(
      'attributes' => array(
        'title' => 'Roda del Món',
      ),
      'identifier' => 'menu-menu-paper_roda-del-mn:taxonomy/term/247',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-paper_transformacions:taxonomy/term/245
  $menu_links['menu-menu-paper_transformacions:taxonomy/term/245'] = array(
    'menu_name' => 'menu-menu-paper',
    'link_path' => 'taxonomy/term/245',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Transformacions',
    'options' => array(
      'attributes' => array(
        'title' => 'Transformacions',
      ),
      'identifier' => 'menu-menu-paper_transformacions:taxonomy/term/245',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-territorial_alt-cardener-llobregat-i-ter:taxonomy/term/24
  $menu_links['menu-menu-territorial_alt-cardener-llobregat-i-ter:taxonomy/term/24'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/24',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Alt Cardener, Llobregat i Ter',
    'options' => array(
      'attributes' => array(
        'title' => 'Alt Cardener, Llobregat i Ter',
      ),
      'identifier' => 'menu-menu-territorial_alt-cardener-llobregat-i-ter:taxonomy/term/24',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_baix-llobregat-i-barcelons:taxonomy/term/14
  $menu_links['menu-menu-territorial_baix-llobregat-i-barcelons:taxonomy/term/14'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Baix Llobregat i Barcelonés',
    'options' => array(
      'attributes' => array(
        'title' => 'Baix Llobregat i Barcelonés',
      ),
      'identifier' => 'menu-menu-territorial_baix-llobregat-i-barcelons:taxonomy/term/14',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_baix-montseny-maresme-i-valls:taxonomy/term/29
  $menu_links['menu-menu-territorial_baix-montseny-maresme-i-valls:taxonomy/term/29'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/29',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Baix Montseny, Maresme i Vallès',
    'options' => array(
      'attributes' => array(
        'title' => 'Baix Montseny, Maresme i Vallès',
      ),
      'identifier' => 'menu-menu-territorial_baix-montseny-maresme-i-valls:taxonomy/term/29',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_catalunya-nord-i-comarques-gironines:taxonomy/term/19
  $menu_links['menu-menu-territorial_catalunya-nord-i-comarques-gironines:taxonomy/term/19'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/19',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Catalunya Nord i Comarques gironines',
    'options' => array(
      'attributes' => array(
        'title' => 'Catalunya Nord i Comarques gironines',
      ),
      'identifier' => 'menu-menu-territorial_catalunya-nord-i-comarques-gironines:taxonomy/term/19',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_el-camp-i-el-peneds:taxonomy/term/17
  $menu_links['menu-menu-territorial_el-camp-i-el-peneds:taxonomy/term/17'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/17',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'El Camp i el Penedès',
    'options' => array(
      'attributes' => array(
        'title' => 'El Camp i el Penedès',
      ),
      'identifier' => 'menu-menu-territorial_el-camp-i-el-peneds:taxonomy/term/17',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_illes-balears:taxonomy/term/23
  $menu_links['menu-menu-territorial_illes-balears:taxonomy/term/23'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/23',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Illes Balears',
    'options' => array(
      'attributes' => array(
        'title' => 'Illes Balears',
      ),
      'identifier' => 'menu-menu-territorial_illes-balears:taxonomy/term/23',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_pas-valenci:taxonomy/term/11
  $menu_links['menu-menu-territorial_pas-valenci:taxonomy/term/11'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/11',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'País Valencià',
    'options' => array(
      'attributes' => array(
        'title' => 'País Valencià',
      ),
      'identifier' => 'menu-menu-territorial_pas-valenci:taxonomy/term/11',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 6,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_terres-de-lbre-i-del-snia:taxonomy/term/5
  $menu_links['menu-menu-territorial_terres-de-lbre-i-del-snia:taxonomy/term/5'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Terres de l\'Èbre i del Sènia',
    'options' => array(
      'attributes' => array(
        'title' => 'Terres de l\'Èbre i del Sènia',
      ),
      'identifier' => 'menu-menu-territorial_terres-de-lbre-i-del-snia:taxonomy/term/5',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 7,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_terres-de-ponent-i-alt-pirineu:taxonomy/term/9
  $menu_links['menu-menu-territorial_terres-de-ponent-i-alt-pirineu:taxonomy/term/9'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Terres de Ponent i Alt Pirineu',
    'options' => array(
      'attributes' => array(
        'title' => 'Terres de Ponent i Alt Pirineu',
      ),
      'identifier' => 'menu-menu-territorial_terres-de-ponent-i-alt-pirineu:taxonomy/term/9',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 8,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_territori:taxonomy/term/25',
  );
  // Exported menu link: menu-menu-territorial_territori:taxonomy/term/212
  $menu_links['menu-menu-territorial_territori:taxonomy/term/212'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/212',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Territori',
    'options' => array(
      'attributes' => array(
        'title' => 'Territori',
      ),
      'identifier' => 'menu-menu-territorial_territori:taxonomy/term/212',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_drets:taxonomy/term/211
  $menu_links['menu-seccions-web_drets:taxonomy/term/211'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/211',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Drets',
    'options' => array(
      'attributes' => array(
        'title' => 'Drets',
      ),
      'identifier' => 'menu-seccions-web_drets:taxonomy/term/211',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_economia:taxonomy/term/224
  $menu_links['menu-seccions-web_economia:taxonomy/term/224'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/224',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Economia',
    'options' => array(
      'attributes' => array(
        'title' => 'Economia',
      ),
      'identifier' => 'menu-seccions-web_economia:taxonomy/term/224',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_expressions:taxonomy/term/233
  $menu_links['menu-seccions-web_expressions:taxonomy/term/233'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/233',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Expressions',
    'options' => array(
      'attributes' => array(
        'title' => 'Expressions',
      ),
      'identifier' => 'menu-seccions-web_expressions:taxonomy/term/233',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_impressions:taxonomy/term/228
  $menu_links['menu-seccions-web_impressions:taxonomy/term/228'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/228',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Impressions',
    'options' => array(
      'attributes' => array(
        'title' => 'Impressions',
      ),
      'identifier' => 'menu-seccions-web_impressions:taxonomy/term/228',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_internacional:taxonomy/term/226
  $menu_links['menu-seccions-web_internacional:taxonomy/term/226'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/226',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Internacional',
    'options' => array(
      'attributes' => array(
        'title' => 'Internacional',
      ),
      'identifier' => 'menu-seccions-web_internacional:taxonomy/term/226',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_llibertats:taxonomy/term/222
  $menu_links['menu-seccions-web_llibertats:taxonomy/term/222'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/222',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Llibertats',
    'options' => array(
      'attributes' => array(
        'title' => 'Llibertats',
      ),
      'identifier' => 'menu-seccions-web_llibertats:taxonomy/term/222',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_politica:taxonomy/term/223
  $menu_links['menu-seccions-web_politica:taxonomy/term/223'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/223',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politica',
    'options' => array(
      'attributes' => array(
        'title' => 'Politica',
      ),
      'identifier' => 'menu-seccions-web_politica:taxonomy/term/223',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_territori:taxonomy/term/225
  $menu_links['menu-seccions-web_territori:taxonomy/term/225'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/225',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Territori',
    'options' => array(
      'attributes' => array(
        'title' => 'Territori',
      ),
      'identifier' => 'menu-seccions-web_territori:taxonomy/term/225',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A Fons');
  t('Així està el pati');
  t('Alt Cardener, Llobregat i Ter');
  t('Baix Llobregat i Barcelonés');
  t('Baix Montseny, Maresme i Vallès');
  t('Barri  Internet');
  t('Catalunya Nord i Comarques gironines');
  t('Drets');
  t('Economia');
  t('El Camp i el Penedès');
  t('Estirant del Fil');
  t('Expressions');
  t('Home');
  t('Illes Balears');
  t('Impressions');
  t('Indirecta');
  t('Internacional');
  t('Llibertats');
  t('Miralls');
  t('Més que mil');
  t('País Valencià');
  t('Poca Broma');
  t('Politica');
  t('Roda del Món');
  t('Terres de Ponent i Alt Pirineu');
  t('Terres de l\'Èbre i del Sènia');
  t('Territori');
  t('Transformacions');


  return $menu_links;
}
