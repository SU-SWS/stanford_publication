<?php

namespace Drupal\stanford_publication\Services;

use Drupal\eck\EckEntityInterface;
use Seboettg\CiteProc\StyleSheet;
use Seboettg\CiteProc\CiteProc;

/**
 * Class Citation.
 *
 * @package Drupal\stanford_publication\Services
 */
class Citation implements CitationInterface {

  /**
   * @var \Drupal\eck\EckEntityInterface
   */
  protected $entity;

  /**
   * {@inheritDoc}
   */
  public function setEntity(EckEntityInterface $eckEntity): void {
    $this->entity = $eckEntity;
  }

  /**
   * {@inheritDoc}
   */
  public function getBibliography($style = 'apa'): string {
    $data = [
      'id' => $this->entity->id(),
      'title' => $this->entity->label(),
      'type' => $this->getType(),
      'author' => $this->getAuthor(),
      'issued' => $this->getDate(),
      'publisher' => $this->getPublisher(),
      'volume' => $this->getVolume(),
      'pages' => $this->getPages(),
    ];
    // Convert the arrays into objects.
    $data = json_decode(json_encode([array_filter($data)]));

    try {
      $style = StyleSheet::loadStyleSheet($style);
      $citeProc = new CiteProc($style);
      return $citeProc->render($data);
    } catch (\Exception $e) {
      return '';
    }
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
  public function __call($name, $args): ?string {
    $data_name = strtolower(preg_replace('/^get/', '', $name));
    if ($field = $this->getEntityField($data_name)) {
      return $this->entity->get($field)->getString();
    }
  }

  /**
   * Get the list of authors from the entity field.
   *
   * @return array|null
   *   Keyed array of author data.
   */
  protected function getAuthor(): ?array {
    if ($field = $this->getEntityField('author')) {
      return $this->entity->get($field)->getValue();
    }
  }

  /**
   * Get the type of citation being used.
   *
   * @return string
   *   Citation type.
   */
  protected function getType(): ?string {
    return str_replace('pub_', '', $this->entity->bundle());
  }

  /**
   * Get the structured date array from the enitty.
   *
   * @return array|null
   *   Keyed array of date parts.
   */
  protected function getDate(): ?array {
    if ($year = $this->getYear()) {
      return [
        'date-parts' => [
          [
            $year,
            $this->getMonth(),
            $this->getDay(),
          ],
        ],
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
  protected function getEntityField($attribute): ?string {
    $field_name = "su_$attribute";
    if ($field_name && $this->entity->hasField($field_name)) {
      return $field_name;
    }
  }

}
