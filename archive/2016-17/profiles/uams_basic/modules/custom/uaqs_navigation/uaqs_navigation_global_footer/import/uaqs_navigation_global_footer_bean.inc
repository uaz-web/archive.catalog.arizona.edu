<?php

/**
 * @file
 * Add content to demonstrate a UAQS Navigation Global Footer Menu Bean.
 */

/**
 *
 *
 * The field contents come from a JSON file.
 */
class UaqsNavigationGlobalFooterBeanMigration extends UaqsBeanMigration {

  /**
   * Constructor.
   *
   * @param array $arguments
   *   Arguments for the parent constructor (Migration standard behavior).
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments, 'menu_bean',
      t('Make demonstration UAQS Navigation Global Footer content from pre-defined data.'));

    // Documented lists of source data fields.
    // See uaqs_block_types.features.field_instance.inc.
    $data_fields = array(
      'label' => t('Descriptive title that the administrative interface uses'),
      'data' => t('Data'),
      'menu_name' => t('Set which menu to use in this menu bean'),
    );

    // All the fields to migrate.
    $fields = $this->getSourceKeyField() + $data_fields;

    // Source definition.
    $this->source = new MigrateSourceJSON($this->jsonFilePath(), $this->getSourceKeyFieldName(), $fields);

    // JSON names to fields mappings.
    $this->addSimpleMappings(array('label'));

    // The title has no prefix.
    $this->addSimpleMappings(array('title'));

    //// JSON names to fields mappings.
    $this->addSimpleMappings(array('data'));

  }

  public function prepareRow($row) {
    $row->data = (array) $row->data;
    return TRUE;
  }

  public function complete($entity, stdClass $row) {

   $bean_block_delta = db_query("SELECT delta FROM {bean} WHERE label = :label AND type = :type", array(':label' => $entity->label, ':type' => $entity->type))->fetchObject();
   db_update('block')
     ->fields(array('region' => $row->region, 'status' => 1, 'visibility' => $row->visibility, 'pages' => $row->pages, 'weight' => $row->weight))
     ->condition('module', 'bean')
     ->condition('delta', $bean_block_delta, 'IN')
     ->condition('theme', 'ua_zen')
     ->execute();
  }


}

