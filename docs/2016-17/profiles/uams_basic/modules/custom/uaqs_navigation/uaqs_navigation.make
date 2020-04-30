; ------------------------------------------------------------------------------
; UAQS Navigation Makefile
;
; Downloads module and library dependencies for UAQS Navigation components.
; ------------------------------------------------------------------------------

core = 7.x
api = 2

; Set default contrib destination
defaults[projects][subdir] = contrib

; ------------------------------------------------------------------------------
; Contrib modules
; ------------------------------------------------------------------------------

projects[bean][version] = 1.9
projects[menu_bean][version] = 1.0-beta2
projects[menu_block][version] = 2.7
projects[xautoload][version] = 5.6

; TODO: remove this after third release.
projects[superfish][version] = 1.x-dev
projects[superfish][download][type] = git
projects[superfish][download][revision] = fa3d7c6
projects[superfish][download][branch] = 7.x-1.x
