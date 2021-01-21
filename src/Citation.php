<?php

namespace Drupal\stanford_publication;

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
   * ECK entity Object with the fields for the citation.
   *
   * @var \Drupal\eck\EckEntityInterface
   */
  protected $entity;

  /**
   * Citation constructor.
   *
   * @param \Drupal\eck\EckEntityInterface $eckEntity
   */
  public function __construct(EckEntityInterface $eckEntity) {
    $this->entity = $eckEntity;
  }

  /**
   * {@inheritDoc}
   */
  public function getBibliography($style = self::APA): string {
    $data = [
      'id' => $this->entity->id(),
      'title' => $this->entity->label(),
      'type' => $this->getType(),
      'author' => $this->getAuthor(),
      'issued' => $this->getDate(),
      'publisher' => $this->getPublisher(),
      'volume' => $this->getVolume(),
      'pages' => $this->getPages(),
      'doi' => $this->getIsbn(),
      'issue' => $this->getIssue(),
      'url' => 'http://google.com',
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
      return $this->entity->get($field)->getString();
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
      return $this->entity->get($field)->getValue();
    }
  }

  /**
   * Get the type of citation being used.
   *
   * @return string
   *   Citation type.
   */
  protected function getType(): string {
    $bundle = str_replace('pub_', '', $this->entity->bundle());
    switch ($bundle) {
      case 'journal':
        return 'article-journal';

      case 'article':
        return 'article-newspaper';
    }
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
    if ($field_name && $this->entity->hasField($field_name)) {
      return $field_name;
    }
  }

}
