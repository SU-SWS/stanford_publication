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
    $I->logInWithRole('adminstrator');
    $I->amOnPage('/node/add/stanford_publication');
    $I->fillField('Title', 'Foo Bar Publication');
    $I->click('Save');
    $I->canSee('Foo Bar Publication', 'h1');
  }

}
