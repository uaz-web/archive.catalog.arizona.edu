# UAQS Fields Module

Modules in different parts of the UA QuickStart Drupal distribution share some common fields; for example, `field_uaqs_lname` will turn up in most places where the last name of a person is required. Drupal allows copies of fields to appear in many different places (field instances), but all the copies must share a common definition (the field base). If the shared field bases turn up in arbitrary modules there will be subtle problems (disabling a module may break seemingly unrelated parts of a web site), so the UAQS Fields module provides a single well-defined place where the field base definitions can find a home. Modules may still provide their own field base definitions for fields that nothing else is using, but the set of common field bases should be here. Other definitions that should also be common to several different modules also reside here.

Provides core dependencies and features for the [UA Quickstart](https://bitbucket.org/ua_drupal/ua_quickstart) Drupal Distribution (or any other distributions wishing to make use of it).

## Packaged Dependencies

When this module is used as part of a Drupal distribution (such as [UA Quickstart](https://bitbucket.org/ua_drupal/ua_quickstart)), the following dependencies will be automatically packaged with the distribution.

### Drupal Contrib Modules

#### Common Contrib Module Dependencies
- [Fences](https://www.drupal.org/project/fences)
