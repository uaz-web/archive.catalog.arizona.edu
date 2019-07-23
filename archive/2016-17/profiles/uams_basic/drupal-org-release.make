; Makefile for UA Sites Basic distribution
core = 7.x
api = 2


; =====================================
; UA Sites Modules & Features
; =====================================

projects[uams_admin][type] = module
projects[uams_admin][subdir] = custom
projects[uams_admin][download][type] = git
projects[uams_admin][download][branch] = 7.x-1.x
projects[uams_admin][download][url] = git@bitbucket.org:ua-cws/uams_admin.git

projects[uams_block_types][type] = module
projects[uams_block_types][subdir] = custom
projects[uams_block_types][download][type] = git
projects[uams_block_types][download][branch] = 7.x-1.x
projects[uams_block_types][download][url] = git@bitbucket.org:ua-cws/uams_block_types.git

projects[uams_common][type] = module
projects[uams_common][subdir] = custom
projects[uams_common][download][type] = git
projects[uams_common][download][branch] = 7.x-1.x
projects[uams_common][download][url] = git@bitbucket.org:ua-cws/uams_common.git

projects[uams_news_feeds][type] = module
projects[uams_news_feeds][subdir] = custom
projects[uams_news_feeds][download][type] = git
projects[uams_news_feeds][download][branch] = 7.x-1.x
projects[uams_news_feeds][download][url] = git@bitbucket.org:ua-cws/uams_news_feeds.git

projects[uams_media][type] = module
projects[uams_media][subdir] = custom
projects[uams_media][download][type] = git
projects[uams_media][download][branch] = 7.x-1.x
projects[uams_media][download][url] = git@bitbucket.org:ua-cws/uams_media.git

projects[uams_roles][type] = module
projects[uams_roles][subdir] = custom
projects[uams_roles][download][type] = git
projects[uams_roles][download][branch] = 7.x-1.x
projects[uams_roles][download][url] = git@bitbucket.org:ua-cws/uams_roles.git

projects[uams_starter][type] = module
projects[uams_starter][subdir] = custom
projects[uams_starter][download][type] = git
projects[uams_starter][download][branch] = 7.x-1.x
projects[uams_starter][download][url] = git@bitbucket.org:ua-cws/uams_starter.git

projects[uams_wysiwyg][type] = module
projects[uams_wysiwyg][subdir] = custom
projects[uams_wysiwyg][download][type] = git
projects[uams_wysiwyg][download][branch] = 7.x-1.x
projects[uams_wysiwyg][download][url] = git@bitbucket.org:ua-cws/uams_wysiwyg.git

; =====================================
; UA Quickstart Modules
; =====================================

projects[ua_block_types][type] = module
projects[ua_block_types][subdir] = custom
projects[ua_block_types][download][type] = git
projects[ua_block_types][download][tag] = 7.x-1.0-alpha3
projects[ua_block_types][download][url] = https://bitbucket.org/ua_drupal/ua_block_types.git

projects[ua_cas][type] = module
projects[ua_cas][subdir] = custom
projects[ua_cas][download][type] = git
projects[ua_cas][download][tag] = 7.x-1.0-alpha3
projects[ua_cas][download][url] = https://bitbucket.org/ua_drupal/ua_cas.git

projects[ua_core][type] = module
projects[ua_core][subdir] = custom
projects[ua_core][download][type] = git
projects[ua_core][download][tag] = 7.x-1.0-alpha3
projects[ua_core][download][url] = https://bitbucket.org/ua_drupal/ua_core.git

projects[ua_demo][type] = module
projects[ua_demo][subdir] = custom
projects[ua_demo][download][type] = git
projects[ua_demo][download][tag] = 7.x-1.0-alpha3
projects[ua_demo][download][url] = https://bitbucket.org/ua_drupal/ua_demo.git

projects[ua_event][type] = module
projects[ua_event][subdir] = custom
projects[ua_event][download][type] = git
projects[ua_event][download][tag] = 7.x-1.0-alpha3
projects[ua_event][download][url] = https://bitbucket.org/ua_drupal/ua_event.git

projects[ua_featured_content][type] = module
projects[ua_featured_content][subdir] = custom
projects[ua_featured_content][download][type] = git
projects[ua_featured_content][download][tag] = 7.x-1.0-alpha3
projects[ua_featured_content][download][url] = https://bitbucket.org/ua_drupal/ua_featured_content.git

projects[ua_google_tag][type] = module
projects[ua_google_tag][subdir] = custom
projects[ua_google_tag][download][type] = git
projects[ua_google_tag][download][tag] = 7.x-1.0-alpha3
projects[ua_google_tag][download][url] = https://bitbucket.org/ua_drupal/ua_google_tag.git

projects[ua_navigation][type] = module
projects[ua_navigation][subdir] = custom
projects[ua_navigation][download][type] = git
projects[ua_navigation][download][tag] = 7.x-1.0-alpha3
projects[ua_navigation][download][url] = https://bitbucket.org/ua_drupal/ua_navigation.git

projects[ua_news][type] = module
projects[ua_news][subdir] = custom
projects[ua_news][download][type] = git
projects[ua_news][download][tag] = 7.x-1.0-alpha3
projects[ua_news][download][url] = https://bitbucket.org/ua_drupal/ua_news.git

projects[ua_page][type] = module
projects[ua_page][subdir] = custom
projects[ua_page][download][type] = git
projects[ua_page][download][tag] = 7.x-1.0-alpha3
projects[ua_page][download][url] = https://bitbucket.org/ua_drupal/ua_page.git

projects[ua_person][type] = module
projects[ua_person][subdir] = custom
projects[ua_person][download][type] = git
projects[ua_person][download][tag] = 7.x-1.0-alpha3
projects[ua_person][download][url] = https://bitbucket.org/ua_drupal/ua_person.git

projects[ua_program][type] = module
projects[ua_program][subdir] = custom
projects[ua_program][download][type] = git
projects[ua_program][download][tag] = 7.x-1.0-alpha3
projects[ua_program][download][url] = https://bitbucket.org/ua_drupal/ua_program.git

projects[ua_publication][type] = module
projects[ua_publication][subdir] = custom
projects[ua_publication][download][type] = git
projects[ua_publication][download][tag] = 7.x-1.0-alpha3
projects[ua_publication][download][url] = https://bitbucket.org/ua_drupal/ua_publication.git

projects[ua_unit][type] = module
projects[ua_unit][subdir] = custom
projects[ua_unit][download][type] = git
projects[ua_unit][download][tag] = 7.x-1.0-alpha3
projects[ua_unit][download][url] = https://bitbucket.org/ua_drupal/ua_unit.git


; =====================================
; Themes
; =====================================

projects[ua_zen][type] = theme
projects[ua_zen][directory_name] = ua_zen
projects[ua_zen][download][type] = git
projects[ua_zen][download][tag] = 7.x-1.0-alpha3
projects[ua_zen][download][url] = https://bitbucket.org/ua_drupal/ua_zen.git

projects[uams_ua_zen][type] = theme
projects[uams_ua_zen][directory_name] = uams_ua_zen
projects[uams_ua_zen][download][type] = git
projects[uams_ua_zen][download][branch] = 7.x-1.x
projects[uams_ua_zen][download][url] = git@bitbucket.org:ua-cws/uams_ua_zen.git