;                                                                                                                                   
; Makefile per portal web de La Directa
; Copyleft Projecte Ictineo SCCL 2013-2014
;
api = 2
core = 7.x

projects[drupal][version] = "7.26"
; Moduls de desenvolupament
projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib/dev"
projects[features][version] = "2.0"
projects[features][subdir] = "contrib/dev"
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib/dev"

;
; Moduls de funcionalitat
;
;;; Generics funcionalitats i dependencies
  projects[ctools][version] = "1.3"
  projects[ctools][subdir] = "contrib"

  projects[token][version] = "1.5"
  projects[token][subdir] = "contrib"

  projects[pathauto][version] = "1.2"
  projects[pathauto][subdir] = "contrib"

  projects[page_title][version] = "2.7"
  projects[page_title][subdir] = "contrib"

  projects[libraries][version] = "2.1"
  projects[libraries][subdir] = "contrib"

  projects[libraries][version] = "2.2"
  projects[libraries][subdir] = "contrib"

  projects[entity][subdir] = "contrib"

  projects[variable][version] = "2.4"
  projects[variable][subdir] = "contrib"

  projects[fences][version] = "1.0"
  projects[fences][subdir] = "contrib"

;;; Generics posicionament i funcionalitats
  projects[google_analytics][version] = "1.4"
  projects[google_analytics][subdir] = "contrib"

  projects[xmlsitemap][version] = "2.0-rc2"
  projects[xmlsitemap][subdir] = "contrib"

  projects[globalredirect][version] = "1.5"
  projects[globalredirect][subdir] = "contrib"

  projects[auto_nodetitle][version] = "1.0"
  projects[auto_nodetitle][subdir] = "contrib"

  projects[mollom][version] = "2.8"
  projects[mollom][subdir] = "contrib"

  projects[print][version] = "1.2"
  projects[print][subdir] = "contrib"
   
  projects[node_clone][version] = "1.0-rc2"
  projects[node_clone][subdir] = "contrib"

  projects[taxonomy_manager][version] = "1.0"
  projects[taxonomy_manager][subdir] = "contrib"

  projects[login_destination][version] = "1.1"
  projects[login_destination][subdir] = "contrib"

  projects[search404][version] = "1.3"
  projects[search404][subdir] = "contrib"

;;; fields
  projects[webform][version] = "3.19"
  projects[webform][subdir] = "contrib"

  projects[date][version] = "2.6"
  projects[date][subdir] = "contrib"

  projects[imce][version] = "1.7"
  projects[imce][subdir] = "contrib"
  projects[imce_wysiwyg][version] = "1.0"
  projects[imce_wysiwyg][subdir] = "contrib"
  projects[imce_mkdir][version] = "1.0"
  projects[imce_mkdir][subdir] = "contrib"

  projects[webform][version] = "3.20"
  projects[webform][subdir] = "contrib"

  projects[link][version] = "1.2"
  projects[link][subdir] = "contrib"

  projects[entityreference][version] = "1.1"
  projects[entityreference][subdir] = "contrib"
  projects[entityreference_view_widget][version] = "2.0-alpha2"
  projects[entityreference_view_widget][subdir] = "contrib"
  projects[inline_entity_form][version] = "1.5"
  projects[inline_entity_form][subdir] = "contrib"
  projects[entityconnect][version] = "1.0-rc1"
  projects[entityconnect][subdir] = "contrib"

  projects[field_collection][version] = "1.0-beta5"
  projects[field_collection][subdir] = "contrib"
  projects[field_collection_views][version] = "1.0-beta3"
  projects[field_collection_views][subdir] = "contrib"
  projects[field_collection_table][version] = "1.0-beta1"
  projects[field_collection_table][subdir] = "contrib"

  projects[email][version] = "1.2"
  projects[email][subdir] = "contrib"

  projects[computed_field][version] = "1.0"
  projects[computed_field][subdir] = "contrib"

  projects[conditional_fields][version] = "3.0-alpha1"
  projects[conditional_fields][subdir] = "contrib"

  projects[select_or_other][version] = "2.20"
  projects[select_or_other][subdir] = "contrib"

;;; views
  projects[views][version] = "3.7"
  projects[views][subdir] = "contrib"

  projects[views_bulk_operations][version] = "3.2"
  projects[views_bulk_operations][subdir] = "contrib"

  projects[calendar][version] = "3.4"
  projects[calendar][subdir] = "contrib"

  projects[better_exposed_filters][version] = "3.0-beta4"
  projects[better_exposed_filters][subdir] = "contrib"

  projects[eva][version] = "1.2"
  projects[eva][subdir] = "contrib"

  projects[views_field][version] = "1.2"
  projects[views_field][subdir] = "contrib"

;;; usabilitat
  projects[wysiwyg][version] = "2.2"
  projects[wysiwyg][patch][] = "http://drupal.org/files/wysiwyg-ckeditor4-1853550-4.patch"
  projects[wysiwyg][subdir] = "contrib"

  projects[jquery_update][version] = "2.3"
  projects[jquery_update][subdir] = "contrib"

  projects[colorbox][version] = "2.4"
  projects[colorbox][subdir] = "contrib"

  projects[imce_wysiwyg][version] = "1.0"
  projects[imce_wysiwyg][subdir] = "contrib"
  projects[imce_mkdir][version] = "1.0"
  projects[imce_mkdir][subdir] = "contrib"

  projects[chosen][version] = "2.0-alpha4"
  projects[chosen][subdir] = "contrib"

  projects[multiupload_filefield_widget][version] = "1.13"
  projects[multiupload_filefield_widget][subdir] = "contrib"
  projects[multiupload_imagefield_widget][version] = "1.3"
  projects[multiupload_imagefield_widget][subdir] = "contrib"
  projects[filefield_sources][version] = "1.9"
  projects[filefield_sources][subdir] = "contrib"
  projects[plupload][version] = "1.6"
  projects[plupload][subdir] = "contrib"

;;; comportaments programats
  projects[rules][version] = "2.6"
  projects[rules][subdir] = "contrib"

;;; Multilingue i localitzacio [aka visca la terra]
  projects[transliteration][version] = "3.1"
  projects[transliteration][subdir] = "contrib"

  projects[i18n][version] = "1.10"
  projects[i18n][subdir] = "contrib"
  projects[i18nviews][version] = "3.x-dev"
  projects[i18nviews][subdir] = "contrib"
  projects[l10n_update][version] = "1.0-beta3"
  projects[l10n_update][subdir] = "contrib"

;;; Control daccess
  projects[content_access][version] = "1.2-beta2"
  projects[content_access][subdir] = "contrib"
  projects[field_permissions][version] = "1.0-beta2"
  projects[field_permissions][subdir] = "contrib"

;;; Usuaris
  projects[profile2][version] = "1.3"
  projects[profile2][subdir] = "contrib"
  projects[user_readonly][version] = "1.4"
  projects[user_readonly][subdir] = "contrib"

  projects[message][version] = "1.9"
  projects[message][subdir] = "contrib"
  projects[better_messages][version] = "1.x-dev"
  projects[better_messages][subdir] = "contrib"
  projects[message_notify][version] = "2.5"
  projects[message_notify][subdir] = "contrib"


;projects[][version] = ""
;projects[][subdir] = "contrib"

;
;themes
;

projects[zen][version] = "5.4"
projects[zen][type] = "theme"
projects[zen][directory_name] = "zen"

;
; Llibraries
;
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3/ckeditor_4.3_full.zip"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][directory_name] = "ckeditor"


