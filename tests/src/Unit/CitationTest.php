<?php

namespace Drupal\Tests\stanford_publication\Unit;

use Drupal\Core\Field\FieldItemListInterface;
use Drupal\eck\EckEntityInterface;
use Drupal\stanford_publication\Citation;
use Drupal\stanford_publication\CitationInterface;
use Drupal\Tests\UnitTestCase;

/**
 * Class CitationTest.
 *
 * @group stanford_publication
 */
class CitationTest extends UnitTestCase {

  /**
   * Keyed array of field name to field values.
   *
   * @var array
   */
  protected $entityValues = [];

  /**
   * The type of citation.
   *
   * @var string
   */
  protected $sourceType = 'book';

  /**
   * Test the biography markup for a book in APA is formatted.
   */
  public function testApaBiographyBook() {
    $this->setDefaultFieldValues();
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography();
    $this->assertStringContainsString('>Doe, J., &#38; Doe, J. (1950). <i>Foo Bar Baz</i>. Bar Publisher.<', $biblio);
  }

  /**
   * Test the biography markup for a Journal Article in APA is formatted.
   */
  public function testApaBiographyJournal() {
    $this->sourceType = 'pub_journal';
    $this->setDefaultFieldValues();
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography();
    $this->assertStringContainsString('Doe, J., &#38; Doe, J. (1950). <i>Foo Bar Baz</i>. <i>Issue Number</i>.', $biblio);
  }

  /**
   * Test the biography markup for a News Article in APA is formatted.
   */
  public function testApaBiographyArticle() {
    $this->sourceType = 'pub_article';
    $this->setDefaultFieldValues();
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography();
    $this->assertStringContainsString('Doe, J., &#38; Doe, J. (1950, June). <i>Foo Bar Baz</i>. <i>Issue Number</i>.', $biblio);
  }

  /**
   * Test the biography markup for a book in Chicago is formatted.
   */
  public function testChicagoBiographyBook() {
    $this->setDefaultFieldValues();
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography(CitationInterface::CHICAGO);

    $this->assertStringContainsString('>Doe, John, and Jane Doe. <i>Foo Bar Baz</i>. Bar Publisher, 1950.<', $biblio);
    $message = sprintf('Publisher and year occur in the bibliography twice. %s', $biblio);
    $this->assertEquals(1, substr_count($biblio, 'Bar Publisher, 1950'), $message);
  }

  /**
   * Test the biography markup for a Journal Article in Chicago is formatted.
   */
  public function testChicagoBiograrphyJournal() {
    $this->sourceType = 'pub_journal';
    $this->setDefaultFieldValues();
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography(CitationInterface::CHICAGO);

    $this->assertStringContainsString('Doe, John, and Jane Doe. “Foo Bar Baz”, no. Issue Number (June 1950).', $biblio);
  }

  /**
   * Test the biography markup for a News Article in Chicago is formatted.
   */
  public function testChicagoBiograrphyArticle() {
    $this->sourceType = 'pub_article';
    $this->setDefaultFieldValues();
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography(CitationInterface::CHICAGO);

    $this->assertStringContainsString('Doe, John, and Jane Doe. “Foo Bar Baz”. June 1950', $biblio);
    $message = sprintf('The date occurs in the bibliography twice. %s', $biblio);
    $this->assertEquals(1, substr_count($biblio, 'June 1950'), $message);
  }

  /**
   * The citation without any fields shouldn't break.
   */
  public function testBiographyWithoutFields() {
    $this->entityValues = [];
    $entity = $this->getEckEntity();

    $citation = new Citation($entity);
    $biblio = $citation->getBibliography();
    $this->assertStringContainsString('<i>Foo Bar Baz</i>.', $biblio);
  }

  /**
   * Get a mock eck entity.
   *
   * @return \Drupal\eck\EckEntityInterface
   *   Mock object.
   */
  protected function getEckEntity() {
    $entity = $this->createMock(EckEntityInterface::class);
    $entity->method('get')
      ->will($this->returnCallback([$this, 'entityGetCallback']));
    $entity->method('hasField')
      ->will($this->returnCallback([$this, 'entityHasField']));
    $entity->method('label')->willReturn('Foo Bar Baz');
    $entity->method('id')->willReturn(31);
    $entity->method('bundle')->willReturnReference($this->sourceType);
    return $entity;
  }

  /**
   * The field item list callback.
   *
   * @param string $field_name
   *   Field name.
   *
   * @return \Drupal\Core\Field\FieldItemListInterface
   *   Field list object.
   */
  public function entityGetCallback($field_name) {
    if (!array_key_exists($field_name, $this->entityValues)) {
      throw new \Exception('No field exists');
    }

    $field_list = $this->createMock(FieldItemListInterface::class);

    $field_list->method('getString')
      ->willReturn($this->entityValues[$field_name]);
    $field_list->method('getValue')
      ->willReturn($this->entityValues[$field_name]);
    return $field_list;
  }

  /**
   * Callback on the mock entity if it has a field.
   *
   * @param string $field_name
   *   Field machine name.
   *
   * @return bool
   *   If the entity has the field.
   */
  public function entityHasField($field_name) {
    return array_key_exists($field_name, $this->entityValues);
  }

  /**
   * Set the default entity field values for the mock entity.
   */
  protected function setDefaultFieldValues(): void {
    $this->entityValues = [
      'su_author' => [
        ['given' => 'John', 'family' => 'Doe'],
        ['given' => 'Jane', 'family' => 'Doe'],
      ],
      'su_year' => 1950,
      'su_day' => NULL,
      'su_month' => 6,
      'su_publisher' => 'Bar Publisher',
      'su_pages' => 'Pages',
      'su_issue' => 'Issue Number',
      'doi' => 'DOI ISBN',
    ];
  }

}
