<?php

/**
 * @file
 * Add content to demonstrate a UAMS Quick Links block.
 */

/**
 * Makes demonstration UA Sites Quick Links bean content from pre-defined data.
 *
 * The UAMS Block Types feature for fieldable blocks based on the Bean module
 * provides the entity used for this.
 *
 * The field contents come from a JSON file.
 */
class UamsStarterQuickLinksMigration extends UaqsBeanMigration {

  /**
   * Constructor.
   *
   * @param array $arguments
   *   Arguments for the parent constructor (Migration standard behavior).
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments, 'uams_quick_links',
      t('Make demonstration UA Sites Quick Links content from pre-defined data.'));

    // Documented lists of source data fields.
    // See uaqs_block_types.features.field_instance.inc.
    $data_fields = array(
      'label' => t('Descriptive title that the administrative interface uses'),
      'uaqs_links' => t('Links'),
      'title' => t('Title'),
    );
    // All the fields to migrate.
    $fields = $this->getSourceKeyField() + $data_fields;
    // Source definition.
    $this->source = new MigrateSourceJSON($this->jsonFilePath(), $this->getSourceKeyFieldName(), $fields);
    $this->addSimpleMappings(array('label'));
    $this->addSimpleMappings(array('title'));
    $this->addFieldMapping('field_uaqs_links', 'uaqs_links');
    $this->addFieldMapping('field_uaqs_links:title', 'uaqs_links_titles');
    $this->addFieldMapping('field_uaqs_links:attributes', 'uaqs_links_attributes');
         //->separator('|');
  }

  public function prepareRow($row) {
    $links = (array) $row->uaqs_links;
    $link_attributes = array();
    $link_titles = array();
    $link_urls = array();
    foreach($links as $link){
        $link_urls[] = $link->url;
        $link_titles[] = $link->title;
        $link_attributes[] = (array) $link->attributes;
    }
    $row->uaqs_links = (array) $link_urls;
    $row->uaqs_links_titles = (array) $link_titles;
    $row->uaqs_links_attributes = (array) $link_attributes;
    return TRUE;
  }

  public function complete($entity, stdClass $row) {

   $bean_block_delta = db_query("SELECT delta FROM {bean} WHERE label = :label AND type = :type", array(':label' => $entity->label, ':type' => $entity->type))->fetchObject();
   $bean_block_delta = $bean_block_delta->delta;
   $module = 'bean';
   $theme_key = 'uams_ua_zen';
   $query = db_merge('block')
      ->key(array(
          'module' => $module,
          'delta'  => $bean_block_delta,
          'theme'  => $theme_key,
        ))
      ->insertFields(array(
          'module' => $module,
          'delta'  => $bean_block_delta,
          'cache'  => -1,
          'theme'  => $theme_key,
          'region' => $row->region,
          'status' => 1,
          'visibility' => $row->visibility,
          'pages' => $row->pages,
          'weight' => $row->weight,
        ))
      ->updateFields(array(
          'module' => $module,
          'delta'  => $bean_block_delta,
          'cache'  => -1,
          'theme'  => $theme_key,
          'region' => $row->region,
          'status' => 1,
          'visibility' => $row->visibility,
          'pages' => $row->pages,
          'weight' => $row->weight,
        ))
        ->execute();
  }
}

