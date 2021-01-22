<?php

namespace Drupal\stanford_publication\Entity;

use Drupal\Core\Field\BaseFieldDefinition;
use Drupal\Core\Entity\ContentEntityBase;
use Drupal\Core\Entity\EntityChangedTrait;
use Drupal\Core\Entity\EntityTypeInterface;
use Seboettg\CiteProc\CiteProc;
use Seboettg\CiteProc\StyleSheet;

/**
 * Defines the Citation entity.
 *
 * @ingroup stanford_publication
 *
 * @ContentEntityType(
 *   id = "citation",
 *   label = @Translation("Citation"),
 *   bundle_label = @Translation("Citation type"),
 *   handlers = {
 *     "view_builder" = "Drupal\stanford_publication\CitationViewBuilder",
 *     "list_builder" = "Drupal\stanford_publication\CitationListBuilder",
 *     "access" = "Drupal\stanford_publication\CitationAccessControlHandler",
 *   },
 *   base_table = "citation",
 *   data_table = "citation_field_data",
 *   translatable = TRUE,
 *   permission_granularity = "bundle",
 *   admin_permission = "administer citation entities",
 *   entity_keys = {
 *     "id" = "id",
 *     "bundle" = "type",
 *     "label" = "title",
 *     "uuid" = "uuid",
 *     "langcode" = "langcode",
 *     "published" = "status",
 *   },
 *   bundle_entity_type = "citation_type",
 *   field_ui_base_route = "entity.citation_type.edit_form"
 * )
 */
class Citation extends ContentEntityBase implements CitationInterface {

  use EntityChangedTrait;

  /**
   * {@inheritdoc}
   */
  public function setLabel($name): CitationInterface {
    $this->set('title', $name);
    return $this;
  }

  /**
   * {@inheritdoc}
   */
  public static function baseFieldDefinitions(EntityTypeInterface $entity_type) {
    $fields = parent::baseFieldDefinitions($entity_type);

    $fields['title'] = BaseFieldDefinition::create('string')
      ->setLabel(t('Title'))
      ->setDescription(t('The title of the Citation.'))
      ->setSettings([
        'max_length' => 50,
        'text_processing' => 0,
      ])
      ->setDefaultValue('')
      ->setDisplayOptions('view', [
        'label' => 'above',
        'type' => 'string',
        'weight' => -4,
      ])
      ->setDisplayOptions('form', [
        'type' => 'string_textfield',
        'weight' => -4,
      ])
      ->setDisplayConfigurable('form', TRUE)
      ->setDisplayConfigurable('view', TRUE);

    $fields['created'] = BaseFieldDefinition::create('created')
      ->setLabel(t('Created'))
      ->setDescription(t('The time that the entity was created.'));

    $fields['changed'] = BaseFieldDefinition::create('changed')
      ->setLabel(t('Changed'))
      ->setDescription(t('The time that the entity was last edited.'));

    return $fields;
  }

  /**
   * {@inheritDoc}
   */
  public function getBibliography($style = self::APA): string {
    $data = [
      'id' => $this->id(),
      'title' => $this->label(),
      'type' => $this->getType(),
      'author' => $this->getAuthor(),
      'issued' => $this->getDate(),
      'publisher' => $this->getPublisher(),
      'volume' => $this->getVolume(),
      'pages' => $this->getPages(),
      'doi' => $this->getIsbn(),
      'issue' => $this->getType() != 'book' ? $this->getIssue() : NULL,
    ];
    // Convert the arrays into objects.
    $data = json_decode(json_encode([array_filter($data)]));
    $style = StyleSheet::loadStyleSheet($style);
    $citeProc = new CiteProc($style);
    return $citeProc->render($data);
  }

  /**
   * Fallback function to get the entity field's string value.
   *
   * @param string $name
   *   Function name.
   * @param $args
   *   Args.
   *
   * @return string
   *   Entity field value as a string.
   */
  public function __call($name, $args) {
    $data_name = strtolower(preg_replace('/^get/', '', $name));
    if ($field = $this->getEntityField($data_name)) {
      return $this->get($field)->getString();
    }
  }

  /**
   * Get the list of authors from the entity field.
   *
   * @return array|null
   *   Keyed array of author data.
   */
  protected function getAuthor() {
    if ($field = $this->getEntityField('author')) {
      return $this->get($field)->getValue();
    }
  }

  /**
   * Get the type of citation being used.
   *
   * @return string
   *   Citation type.
   */
  protected function getType(): string {
    $bundle = str_replace('_', '-', str_replace('su_', '', $this->bundle()));
    return $bundle;
  }

  /**
   * Get the structured date array from the enitty.
   *
   * @return array|null
   *   Keyed array of date parts.
   */
  protected function getDate() {
    $year = (int) $this->getYear();
    $month = (int) $this->getMonth();
    $day = (int) $this->getDay();

    if ($year) {
      $date_parts = [$year, $month];

      // The 2nd value has to be the month. If the user populates the year,
      // month and day, then we'll structure it correctly. Otherwise we leave
      // the day off and if the month is also empty, it'll be stripped in the
      // array filter below.
      if ($month && $day) {
        $date_parts = [$year, $month, $day];
      }
      return [
        'date-parts' => [array_filter($date_parts)],
      ];
    }
  }

  /**
   * Get the name of the field that is associated to the the attribute value.
   *
   * @param string $attribute
   *   Citation attribute key.
   *
   * @return string|null
   *   Field name if a field exists.
   */
  protected function getEntityField($attribute) {
    $field_name = "su_$attribute";
    if ($field_name && $this->hasField($field_name)) {
      return $field_name;
    }
  }

}
