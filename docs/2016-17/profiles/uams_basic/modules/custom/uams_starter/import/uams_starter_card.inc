<?php

/**
 * @file
 * Add content to demonstrate a UAQS Card block.
 */

/**
 * Makes demonstration UA Sites Card bean content from pre-defined data.
 *
 * The UAQS Block Types feature for fieldable blocks based on the Bean module
 * provides the entity used for this.
 *
 * The field contents come from a JSON file.
 */
class UamsStarterCardMigration extends UaqsBeanMigration {

  /**
   * Constructor.
   *
   * @param array $arguments
   *   Arguments for the parent constructor (Migration standard behavior).
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments, 'uaqs_card',
      t('Make demonstration UA Sites Card content from pre-defined data.'));

    // Documented lists of source data fields.
    // See uaqs_block_types.features.field_instance.inc.
    $data_fields = array(
      'label' => t('Descriptive title that the administrative interface uses'),
      'uaqs_text_area' => t('Blurb text'),
      'uaqs_link' => t('Link'),
    );

    // Image fields...
    $image_src_field = 'uaqs_photo';
    $image_fields = array(
      $image_src_field => t('Image or Graphic'),
    );

    // Titles for links...
    $link_title_fields = array(
      'uaqs_link_title' => t('Link title'),
    );

    // Attributes for links...
    $link_attributes_fields = array(
      'uaqs_link_attributes' => t('Link attributes'),
    );

    // All the fields to migrate.
    $fields = $this->getSourceKeyField() + $data_fields + $link_title_fields + $image_fields + $link_attributes_fields;

    // Source definition.
    $this->source = new MigrateSourceJSON($this->jsonFilePath(), $this->getSourceKeyFieldName(), $fields);

    // JSON names to fields mappings.
    $this->addSimpleMappings(array('label'));

    // The title has no prefix.
    $this->addSimpleMappings(array('title'));

    $this->addFieldMapping('field_uaqs_link', 'uaqs_link');
    $this->addFieldMapping('field_uaqs_link:attributes','uaqs_link_attributes');

    $this->addFieldMapping('field_uaqs_text_area', 'uaqs_text_area');
    // Allow limited HTML markup in the blurb text field.
    $this->addFieldMapping('field_uaqs_text_area:format')
         ->defaultValue('uaqs_textual_content');

    $this->addFieldMapping('field_uaqs_link:title', 'uaqs_link_title');


    // Images.
    $image_dst_field = 'field_' . $image_src_field;
    $this->addFieldMapping($image_dst_field, $image_src_field);
    $this->addFieldMapping($image_dst_field . ':file_replace')
         ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping($image_dst_field . ':file_class')
         ->defaultValue('MigrateFileUri');
    $this->addFieldMapping($image_dst_field . ':source_dir')
         ->defaultValue($this->imagePath());
  }

  public function prepareRow($row) {

    $row->uaqs_link_attributes = (array) $row->uaqs_link_attributes;

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