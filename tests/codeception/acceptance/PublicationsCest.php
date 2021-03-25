<?php

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
  public function testDefaultContent(AcceptanceTester $I){
    $I->logInWithRole('administrator');
    $I->amOnPage('/admin/structure/taxonomy/manage/stanford_publication_topics/overview');
    $I->canSeeLink('All');
    $I->click('All');
    $I->assertEquals('/publications', $I->grabFromCurrentUrl());
  }

}
