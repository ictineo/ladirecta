;
; Makefile per portal web de La Directa
; Copyleft Projecte Ictineo SCCL 2013-2014
; 
api = 2
core = 7.x

projects[drupal][version] = "7.24"
; Moduls de desenvolupament
projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib/dev"
projects[features][version] = "2.0"
projects[features][subdir] = "contrib/dev"
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib/dev"
; Moduls de funcionalitat
projects[views][version] = "3.7"
projects[views][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[date][version] = "2.6"
projects[date][subdir] = "contrib"

projects[webform][version] = "3.19"
projects[webform][subdir] = "contrib"

projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = "contrib"


projects[google_analytics][version] = "1.4"
projects[google_analytics][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir] = "contrib"

projects[rules][version] = "2.6"
projects[rules][subdir] = "contrib"

projects[xmlsitemap][version] = "2.0-rc2"
projects[xmlsitemap][subdir] = "contrib"

projects[colorbox][version] = "2.4"
projects[colorbox][subdir] = "contrib"

projects[transliteration][version] = "3.1"
projects[transliteration][subdir] = "contrib"

projects[l10n_update][version] = "1.0-beta3"
projects[l10n_update][subdir] = "contrib"

projects[imce][version] = "1.7"
projects[imce][subdir] = "contrib"

;projects[][version] = ""
;projects[][subdir] = "contrib"

;themes

projects[zen][version] = "5.4"
projects[zen][type] = "theme"
projects[zen][directory_name] = "zen"

; Llibraries

libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3/ckeditor_4.3_full.zip"
libraries[ckeditor][destination] = "sites/all/libraries"
libraries[ckeditor][directory_name] = "ckeditor"
