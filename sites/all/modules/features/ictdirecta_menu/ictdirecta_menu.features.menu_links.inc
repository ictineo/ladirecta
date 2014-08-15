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
  // Exported menu link: menu-menu-footer_contacte:node/217
  $menu_links['menu-menu-footer_contacte:node/217'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/217',
    'router_path' => 'node/%',
    'link_title' => 'contacte',
    'options' => array(
      'identifier' => 'menu-menu-footer_contacte:node/217',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-footer_qui-som:node/216
  $menu_links['menu-menu-footer_qui-som:node/216'] = array(
    'menu_name' => 'menu-menu-footer',
    'link_path' => 'node/216',
    'router_path' => 'node/%',
    'link_title' => 'Qui som',
    'options' => array(
      'identifier' => 'menu-menu-footer_qui-som:node/216',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
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
  // Exported menu link: menu-menu-territorial_alt-cardener-llobregat-i-ter:taxonomy/term/25
  $menu_links['menu-menu-territorial_alt-cardener-llobregat-i-ter:taxonomy/term/25'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/25',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Alt Cardener, Llobregat i Ter',
    'options' => array(
      'attributes' => array(
        'title' => 'Alt Cardener, Llobregat i Ter',
      ),
      'identifier' => 'menu-menu-territorial_alt-cardener-llobregat-i-ter:taxonomy/term/25',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-territorial_baix-llobregat-i-barcelons:taxonomy/term/15
  $menu_links['menu-menu-territorial_baix-llobregat-i-barcelons:taxonomy/term/15'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/15',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Baix Llobregat i Barcelonés',
    'options' => array(
      'attributes' => array(
        'title' => 'Baix Llobregat i Barcelonés',
      ),
      'identifier' => 'menu-menu-territorial_baix-llobregat-i-barcelons:taxonomy/term/15',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-territorial_baix-montseny-maresme-i-valls:taxonomy/term/30
  $menu_links['menu-menu-territorial_baix-montseny-maresme-i-valls:taxonomy/term/30'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/30',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Baix Montseny, Maresme i Vallès',
    'options' => array(
      'attributes' => array(
        'title' => 'Baix Montseny, Maresme i Vallès',
      ),
      'identifier' => 'menu-menu-territorial_baix-montseny-maresme-i-valls:taxonomy/term/30',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'menu-menu-territorial_taxonomy-term:taxonomy/term/26 25 15 30 20 18 24 11 5 9',
  );
  // Exported menu link: menu-menu-territorial_catalunya-nord-i-comarques-gironines:taxonomy/term/20
  $menu_links['menu-menu-territorial_catalunya-nord-i-comarques-gironines:taxonomy/term/20'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/20',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Catalunya Nord i Comarques gironines',
    'options' => array(
      'attributes' => array(
        'title' => 'Catalunya Nord i Comarques gironines',
      ),
      'identifier' => 'menu-menu-territorial_catalunya-nord-i-comarques-gironines:taxonomy/term/20',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-territorial_el-camp-i-el-peneds:taxonomy/term/18
  $menu_links['menu-menu-territorial_el-camp-i-el-peneds:taxonomy/term/18'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/18',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'El Camp i el Penedès',
    'options' => array(
      'attributes' => array(
        'title' => 'El Camp i el Penedès',
      ),
      'identifier' => 'menu-menu-territorial_el-camp-i-el-peneds:taxonomy/term/18',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 0,
  );
  // Exported menu link: menu-menu-territorial_illes-balears:taxonomy/term/24
  $menu_links['menu-menu-territorial_illes-balears:taxonomy/term/24'] = array(
    'menu_name' => 'menu-menu-territorial',
    'link_path' => 'taxonomy/term/24',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Illes Balears',
    'options' => array(
      'attributes' => array(
        'title' => 'Illes Balears',
      ),
      'identifier' => 'menu-menu-territorial_illes-balears:taxonomy/term/24',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 5,
    'customized' => 0,
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
  // Exported menu link: menu-menu-xxss_facebook:<front>
  $menu_links['menu-menu-xxss_facebook:<front>'] = array(
    'menu_name' => 'menu-menu-xxss',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'facebook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-xxss_facebook:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-xxss_twitter:<front>
  $menu_links['menu-menu-xxss_twitter:<front>'] = array(
    'menu_name' => 'menu-menu-xxss',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'twitter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-xxss_twitter:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-xxss_vimeo:<front>
  $menu_links['menu-menu-xxss_vimeo:<front>'] = array(
    'menu_name' => 'menu-menu-xxss',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'vimeo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-xxss_vimeo:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-xxss_youtube:<front>
  $menu_links['menu-menu-xxss_youtube:<front>'] = array(
    'menu_name' => 'menu-menu-xxss',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'youtube',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-menu-xxss_youtube:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-seccions-web_drets:taxonomy/term/4
  $menu_links['menu-seccions-web_drets:taxonomy/term/4'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Drets',
    'options' => array(
      'attributes' => array(
        'title' => 'Drets',
      ),
      'identifier' => 'menu-seccions-web_drets:taxonomy/term/4',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 7,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_economia:taxonomy/term/6
  $menu_links['menu-seccions-web_economia:taxonomy/term/6'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Economia',
    'options' => array(
      'attributes' => array(
        'title' => 'Economia',
      ),
      'identifier' => 'menu-seccions-web_economia:taxonomy/term/6',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_expressions:taxonomy/term/22
  $menu_links['menu-seccions-web_expressions:taxonomy/term/22'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/22',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Expressions',
    'options' => array(
      'attributes' => array(
        'title' => 'Expressions',
      ),
      'identifier' => 'menu-seccions-web_expressions:taxonomy/term/22',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_impressions:taxonomy/term/13
  $menu_links['menu-seccions-web_impressions:taxonomy/term/13'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/13',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Impressions',
    'options' => array(
      'attributes' => array(
        'title' => 'Impressions',
      ),
      'identifier' => 'menu-seccions-web_impressions:taxonomy/term/13',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_internacional:taxonomy/term/1
  $menu_links['menu-seccions-web_internacional:taxonomy/term/1'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Internacional',
    'options' => array(
      'attributes' => array(
        'title' => 'Internacional',
      ),
      'identifier' => 'menu-seccions-web_internacional:taxonomy/term/1',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 5,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_llibertats:taxonomy/term/17
  $menu_links['menu-seccions-web_llibertats:taxonomy/term/17'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/17',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Llibertats',
    'options' => array(
      'attributes' => array(
        'title' => 'Llibertats',
      ),
      'identifier' => 'menu-seccions-web_llibertats:taxonomy/term/17',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 6,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_politica:taxonomy/term/16
  $menu_links['menu-seccions-web_politica:taxonomy/term/16'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/16',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politica',
    'options' => array(
      'attributes' => array(
        'title' => 'Politica',
      ),
      'identifier' => 'menu-seccions-web_politica:taxonomy/term/16',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
  );
  // Exported menu link: menu-seccions-web_seccions-web:taxonomy/term/12
  $menu_links['menu-seccions-web_seccions-web:taxonomy/term/12'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/12',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Seccions web',
    'options' => array(
      'attributes' => array(
        'title' => 'Seccions web',
      ),
      'identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 5,
    'customized' => 0,
  );
  // Exported menu link: menu-seccions-web_territori:taxonomy/term/3
  $menu_links['menu-seccions-web_territori:taxonomy/term/3'] = array(
    'menu_name' => 'menu-seccions-web',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Territori',
    'options' => array(
      'attributes' => array(
        'title' => 'Territori',
      ),
      'identifier' => 'menu-seccions-web_territori:taxonomy/term/3',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'menu-seccions-web_seccions-web:taxonomy/term/12',
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
  t('Qui som');
  t('Roda del Món');
  t('Seccions web');
  t('Terres de Ponent i Alt Pirineu');
  t('Terres de l\'Èbre i del Sènia');
  t('Territori');
  t('Transformacions');
  t('contacte');
  t('facebook');
  t('twitter');
  t('vimeo');
  t('youtube');


  return $menu_links;
}
