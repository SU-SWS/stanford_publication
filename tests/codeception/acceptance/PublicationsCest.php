<?php

use Faker\Factory;

/**
 * Class PublicationsCest.
 *
 * @group stanford_publications
 */
class PublicationsCest {

  /**
   * Create a publication piece of content.
   */
  public function testPublicationContentType(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage('/node/add/stanford_publication');
    $I->fillField('Title', 'Foo Bar Publication');
    $I->click('Save');
    $I->canSee('Foo Bar Publication', 'h1');
  }

  /**
   * The "All" topic term should be created with a redirect.
   */
  public function testDefaultContent(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage('/admin/structure/menu/manage/stanford-publication-topics');
    $I->click('All', '#menu-overview');
    $I->assertEquals('/publications', $I->grabFromCurrentUrl());
  }

  /**
   * Changing the node title will change the citation label.
   */
  public function testCitationLabels(AcceptanceTester $I) {
    $faker = Factory::create();
    $label = $faker->text(15);
    $new_label = $faker->text(15);

    $citation = $I->createEntity([
      'title' => $label,
      'type' => 'su_book',
    ], 'citation');
    $node = $I->createEntity([
      'type' => 'stanford_publication',
      'title' => $label,
      'su_publication_citation' => $citation->id(),
    ]);
    $I->logInWithRole('administrator');
    $I->amOnPage("/node/{$node->id()}/edit");
    $I->fillField('Title', $new_label);
    $I->click('Save');

    $citation_storage = \Drupal::entityTypeManager()->getStorage('citation');
    $citation_storage->resetCache();
    $I->assertEquals($new_label, $citation_storage->load($citation->id())->label());
  }

}
