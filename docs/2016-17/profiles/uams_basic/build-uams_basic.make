; Use this file to build a full distribution including Drupal core and the
; UA Sites Basic dependencies using the following command:
;
; drush make build-uams_basic.make <target directory>

api = 2
core = 7.x

includes[] = drupal-org-core.make

; Download install profile and recursively build all its dependencies.
projects[uams_basic][type] = profile
projects[uams_basic][download][type] = git
projects[uams_basic][download][branch] = 7.x-1.x
projects[uams_basic][download][url] = git@bitbucket.org:ua-cws/uams_basic.git
