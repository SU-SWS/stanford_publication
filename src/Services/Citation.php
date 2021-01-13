<?php

namespace Drupal\stanford_publication\Services;

use Drupal\eck\EckEntityInterface;
use Seboettg\CiteProc\StyleSheet;
use Seboettg\CiteProc\CiteProc;

class Citation implements CitationInterface {

  /**
   * @var \Drupal\eck\EckEntityInterface
   */
  protected $entity;

  public function getBibliography($style = 'apa') {
    $data = [
      'id' => $this->entity->id(),
      'title' => $this->entity->label(),
      'type' => $this->getType(),
      'author' => $this->getAuthors(),
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

  public function __call($name, $args) {
    $data_name = strtolower(preg_replace('/^get/', '', $name));
    if ($field = $this->getEntityField($data_name)) {
      return $this->entity->get($field)->getString();
    }
  }

  public function setEntity(EckEntityInterface $eckEntity) {
    $this->entity = $eckEntity;
  }

  protected function getAuthors() {
    if ($author_field = $this->getEntityField('authors')) {
      $authors = $this->entity->get($author_field)->getValue();
      foreach ($authors as &$author) {
        $author = array_filter($author);
      }
      return $authors;
    }
  }

  protected function getType() {
    switch ($this->entity->bundle()) {
      case 'pub_book':
        return 'book';

      case 'pub_article':
        return 'article';

      case 'pub_journal':
        return 'journal';

      case 'pub_thesis':
        return 'thesis';
    }
  }

  protected function getDate() {
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

  protected function getEntityField($attribute) {
    $fields = [
      'book' => [
        'authors' => 'su_book_authors',
        'date' => 'su_book_year',
        'issue' => 'su_book_issue',
        'pages' => 'su_book_pages',
        'publisher' => 'su_book_publisher',
        'volume' => 'su_book_volume',
      ],
      'article' => [
        'authors' => 'su_article_author',
        'date' => 'su_article_date',
        'journal' => 'su_article_journal',
        'pages' => 'su_article_pages',
      ],
      'journal' => [
        'authors' => 'su_journal_authors',
        'date' => 'su_journal_date',
        'issue' => 'su_journal_issue',
        'journal' => 'su_journal_journal',
        'pages' => 'su_journal_pages',
        'volume' => 'su_journal_volume',
      ],
      'thesis' => [
        'authors' => 'su_thesis_authors',
        'date' => 'su_thesis_date',
        'journal' => 'su_thesis_journal',
      ],
    ];

    $field_name = $fields[$this->getType()][$attribute] ?? NULL;
    if ($field_name && $this->entity->hasField($field_name)) {
      return $field_name;
    }
  }

}
