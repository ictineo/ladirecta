<?php
/**
 * @file
 * ictdirecta_taxonomies.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ictdirecta_taxonomies_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Internacional',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '0adcce5a-b12c-4cc5-b28a-34d51aca84a0',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Miralls',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '0b7ecad9-d1e2-470f-8952-faccfca7d1bd',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Territori',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '0ba7da05-2d1b-481d-a244-97d7746eb6f9',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Drets',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '0bdfdd9a-3b26-444b-8216-038d178d8725',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Terres de l\'Èbre i del Sènia',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '1899efbb-9657-4d5f-8e51-8c3e18e0395e',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Economia',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '193e5f25-f80e-4200-8839-b39b1d41e9be',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Més que mil',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '24abbd70-d316-426a-ad88-85cf5e965951',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Indirecta',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '2e619ec1-5bf3-436d-a91a-4a70d1f0ef77',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Terres de Ponent i Alt Pirineu',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '3ef1af6e-473b-4de4-80f3-989b3a5aeb58',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Així està el pati',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '441896d6-fdf0-489f-8c0b-b78682aeacde',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'País Valencià',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '5529cabf-b71f-4034-8aaa-0c7e64cc6614',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Seccions web',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5909ed0d-2197-4596-b968-e4e6e4e27235',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Impressions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '71c82a8e-7f62-4732-9b38-83c8ddb2239c',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Estirant del Fil',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '73c0b594-3d4b-48e6-b6bf-f27b5e4725ea',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Baix Llobregat i Barcelonés',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '83c0946b-32d5-4b7c-83f2-726965986cc5',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Politica',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '903a998f-5bdc-427e-bf44-c7acdbdf774e',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Llibertats',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '933d6e5b-fa53-4c8f-b79f-13e644abab16',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'El Camp i el Penedès',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '98d57656-523c-4ca5-8a7d-fa7638d0ce22',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'A Fons',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '9933a2e9-475a-4cc6-870f-6fb220f2d6da',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Catalunya Nord i Comarques gironines',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '9ca38813-151a-4200-a48b-7384a0c19a68',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Impressions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'b96c3567-03cd-4f53-bf04-8b8ec74440e1',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Expressions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'c0003d30-41ca-4055-9963-7cbcf84dab0f',
    'vocabulary_machine_name' => 'seccions_web',
  );
  $terms[] = array(
    'name' => 'Poca Broma',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'c584102a-f0b0-4d41-b1ce-e8839d9b549f',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Illes Balears',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'd70b2f09-dda8-44ca-9da7-9b157072586a',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Alt Cardener, Llobregat i Ter',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'df9f4a11-5422-4522-a6e6-2b70ed627215',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Territori',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    'vocabulary_machine_name' => 'territorial',
  );
  $terms[] = array(
    'name' => 'Expressions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'e8bb6efe-4ce1-414e-8acd-022d6dadb08e',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Roda del Món',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f02cf09d-58ee-4441-8f89-e1f8e94b3228',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Barri  Internet',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => 'f2636d10-dd3a-4ab9-8e95-668b89d8bf3c',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  $terms[] = array(
    'name' => 'Baix Montseny, Maresme i Vallès',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'fc5fe0ba-9a7a-4eb5-b600-9de780f4a6d4',
    'vocabulary_machine_name' => 'territorial',
    'parent' => array(
      0 => 'e3d31cbf-1d8f-4096-8f41-5df4d3d99de6',
    ),
  );
  $terms[] = array(
    'name' => 'Transformacions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ff86d3e2-623a-4f5c-a94e-05cd834108b2',
    'vocabulary_machine_name' => 'seccions_paper',
  );
  return $terms;
}
