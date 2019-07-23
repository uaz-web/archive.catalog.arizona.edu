; ------------------------------------------------------------------------------
; UAQS Core Makefile
;
; This makefile should stay as bare-bones as possilbe.  In general, individual
; modules/features should include their own makefiles to package their own
; dependencies.  Ideally, only dependencies that are common to most sites using
; the UAQS Drupal distribution (regardless of how many individual features have
; been enabled) should be included here.
; ------------------------------------------------------------------------------

core = 7.x
api = 2

; Set default contrib destination
defaults[projects][subdir] = contrib

; ------------------------------------------------------------------------------
; Contrib dependencies common to many UAQS features/sites
; ------------------------------------------------------------------------------

projects[ctools][version] = 1.9

projects[draggableviews][version] = 2.1

projects[elements][version] = 1.4

projects[entity][version] = 1.6

projects[html5_tools][version] = 1.3

projects[jquery_update][version] = 2.7

projects[libraries][version] = 2.2

projects[pathauto][version] = 1.2

projects[token][version] = 1.6

projects[views][version] = 3.13

projects[views_bootstrap][version] = 3.x-dev
projects[views_bootstrap][download][type] = git
projects[views_bootstrap][download][revision] = 9c9a049
projects[views_bootstrap][download][branch] = 7.x-3.x
projects[views_bootstrap][patch][2203111] = http://drupal.org/files/issues/views_bootstrap-breakpoint-control-2203111-92-7.x.patch


; ------------------------------------------------------------------------------
; Commonly used field modules
; ------------------------------------------------------------------------------

projects[auto_entitylabel][version] = 1.3

projects[date][version] = 2.9

projects[email][version] = 1.3

projects[entityreference][version] = 1.1

projects[field_collection][version] = 1.0-beta11

projects[field_formatter_settings][version] = 1.1

projects[field_group][version] = 1.5

projects[field_group_link][version] = 1.5

projects[field_multiple_limit][version] = 1.0-alpha4

projects[image_class][version] = 1.x-dev
projects[image_class][download][type] = git
projects[image_class][download][revision] = a4baf33
projects[image_class][download][branch] = 7.x-1.x

projects[link][version] = 1.4

projects[title][version] = 1.x-dev
projects[title][download][type] = git
projects[title][download][revision] = d6f2000
projects[title][download][branch] = 7.x-1.x


; ------------------------------------------------------------------------------
; Features module and related
; ------------------------------------------------------------------------------

projects[defaultconfig][version] = 1.0-alpha11

projects[features][version] = 2.7

projects[migrate][version] = 2.8

projects[strongarm][version] = 2.0


; ------------------------------------------------------------------------------
; UA Zen theme dependencies
; ------------------------------------------------------------------------------

projects[zen][version] = 5.6
projects[zen][type] = theme
projects[zen][subdir] = ''

; ------------------------------------------------------------------------------
; Libraries
; ------------------------------------------------------------------------------
