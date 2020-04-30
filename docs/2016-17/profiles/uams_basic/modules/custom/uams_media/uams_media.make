api = 2
core = 7.x

; File entity contrib module.
; projects[entityreference][version] = 1.1+11-dev
; projects[entityreference][subdir] = contrib

; File entity contrib module.
projects[file_entity][version] = 2.0-beta2
projects[file_entity][subdir] = contrib

; Plupload contrib module.
projects[plupload][version] = 1.7
projects[plupload][subdir] = contrib

; Media contrib module.
projects[media][version] = 2.0-beta1
projects[media][subdir] = contrib

; Media oEmbed contrib module.
projects[media_oembed][version] = 2.5
projects[media_oembed][subdir] = contrib

; Multiform contrib module.
projects[multiform][version] = 1.1
projects[multiform][subdir] = contrib

; Libraries
libraries[plupload][directory_name] = plupload
libraries[plupload][download][type] = file
libraries[plupload][download][url] = https://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][patch][1903850] = https://drupal.org/files/issues/plupload-1_5_8-rm_examples-1903850-16.patch
libraries[plupload][type] = library