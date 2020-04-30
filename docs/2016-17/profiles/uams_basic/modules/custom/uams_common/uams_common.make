; ------------------------------------------------------------------------------
; UA Sites Common Makefile
;
; This makefile should stay as bare-bones as possilbe.  In general, individual
; modules/features should include their own makefiles to package their own
; dependencies.  Ideally, only dependencies that are common to most sites using
; the UA Sites Drupal distribution (regardless of how many individual features
; have been enabled) should be included here.
; ------------------------------------------------------------------------------

core = 7.x
api = 2

; Set default contrib destination
defaults[projects][subdir] = contrib

; ------------------------------------------------------------------------------
; Contrib modules required to be available to all UA Sites websites
; ------------------------------------------------------------------------------

projects[content_access][version] = 1.2-beta2
projects[css_injector][version] = 1.10
projects[fences][version] = 1.2
projects[js_injector][version] = 2.1
projects[menu_position][version] = 1.2
projects[mollom][version] = 2.15
projects[quicktabs][version] = 3.6
projects[regionclass][version] = 1.0-rc2
projects[role_delegation][version] = 1.1
projects[special_menu_items][version] = 2.0
projects[webform][version] = 4.12
