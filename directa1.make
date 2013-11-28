;
; Makefile per portal web de La Directa
; Copyleft Projecte Ictineo SCCL 2013-2014
; 
api = 2
core = 7.x

projects[drupal][version] = "7.24"
; Moduls de desenvolupament
projects[devel][version] = "7.x-1.3"
projects[devel][subdir] = "contrib/dev"
projects[features][version] = "7.x-2.0"
projects[features][subdir] = "contrib/dev"
projects[strongarm][version] = "7.x-2.0"
projects[strongarm][subdir] = "contrib/dev"
; Moduls de funcionalitat
projects[views][version] = "7.x-3.7"
projects[views][subdir] = "contrib"

projects[ctools][version] = "7.x-1.3"
projects[ctools][subdir] = "contrib"

projects[token][version] = "7.x-1.5"
projects[token][subdir] = "contrib"

projects[pathauto][version] = "7.x-1.2"
projects[pathauto][subdir] = "contrib"

projects[libraries][version] = "7.x-2.1"
projects[libraries][subdir] = "contrib"

projects[date][version] = "7.x-2.6"
projects[date][subdir] = "contrib"

projects[webform][version] = "7.x-3.19"
projects[webform][subdir] = "contrib"

projects[wysiwyg][version] = "7.x-2.2"
projects[wysiwyg][subdir] = "contrib"

projects[google_analytics][version] = "7.x-1.4"
projects[google_analytics][subdir] = "contrib"

projects[jquery_update][version] = "7.x-2.3"
projects[jquery_update][subdir] = "contrib"

projects[rules][version] = "7.x-2.6"
projects[rules][subdir] = "contrib"

projects[xmlsitemap][version] = "7.x-2.0-rc2"
projects[xmlsitemap][subdir] = "contrib"

projects[colorbox][version] = "7.x-2.4"
projects[colorbox][subdir] = "contrib"

projects[transliteration][version] = "7.x-3.1"
projects[transliteration][subdir] = "contrib"

projects[l10n_update][version] = "7.x-1.0-beta3"
projects[l10n_update][subdir] = "contrib"

projects[imce][version] = "7.x-1.7"
projects[imce][subdir] = "contrib"

;projects[ckeditor][version] = "7.x-1.13"
;projects[ckeditor][subdir] = "contrib"


;projects[][version] = "7.x-"
;projects[][subdir] = "contrib"

;themes

projects[zen][version] = "7.x-5.4"
projects[zen][themes] = "theme"



; Llibraries
libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.6.1/ckeditor_3.6.6.1.zip"
