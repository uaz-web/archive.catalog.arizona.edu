; ------------------------------------------------------------------------------
; UAQS Content Chunks Makefile
;
; Downloads the Paragraph module dependencies for UAQS Content Chunks components.
; ------------------------------------------------------------------------------

core = 7.x
api = 2

; Set default contrib destination
defaults[projects][subdir] = contrib

; ------------------------------------------------------------------------------
; Contrib modules
; ------------------------------------------------------------------------------

projects[paragraphs][version] = 1.0-rc4
