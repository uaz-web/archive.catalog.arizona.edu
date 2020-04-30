; ------------------------------------------------------------------------------
; UA Sites Admin Makefile
;
; Downloads contrib module and library dependencies for UA Sites Admin
; component.
; ------------------------------------------------------------------------------

core = 7.x
api = 2

; Set default contrib destination
defaults[projects][subdir] = contrib

; ------------------------------------------------------------------------------
; Contrib modules
; ------------------------------------------------------------------------------

;projects[admin_menu][version] = 3.0-rc5
;projects[admin_select][version] = 1.5
projects[admin_views][version] = 1.5
projects[coffee][version] = 2.2
projects[fpa][version] = 2.6
projects[libraries][version] = 2.2
projects[masquerade][version] = 1.0-rc7
projects[module_filter][version] = 2.0
projects[navbar][version] = 1.7
projects[simplified_menu_admin] = 1.0
projects[views_bulk_operations][version] = 3.3


; ------------------------------------------------------------------------------
; Contrib theme
; ------------------------------------------------------------------------------

projects[ember][version] = 2.0-alpha4
projects[ember][type] = theme
projects[ember][subdir] = ''

; ------------------------------------------------------------------------------
; Libraries for Navbar module (copied from navbar.make.example)
; ------------------------------------------------------------------------------

; Library: Modernizr
libraries[modernizr][download][type] = git
libraries[modernizr][download][url] = https://github.com/BrianGilbert/modernizer-navbar.git
libraries[modernizr][download][revision] = 5b89d9225320e88588f1cdc43b8b1e373fa4c60f

; Library: Backbone
libraries[backbone][download][type] = git
libraries[backbone][download][url] = https://github.com/jashkenas/backbone.git
libraries[backbone][download][tag] = 1.0.0

; Library: Underscore
libraries[underscore][download][type] = git
libraries[underscore][download][url] = https://github.com/jashkenas/underscore.git
libraries[underscore][download][tag] = 1.5.0
