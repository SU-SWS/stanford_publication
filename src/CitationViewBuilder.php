<?php

namespace Drupal\stanford_publication;

use Drupal\Core\Entity\EntityViewBuilder;
use Drupal\Core\Render\Element;
use Drupal\stanford_publication\Entity\CitationInterface;

/**
 * Class CitationViewBuilder.
 *
 * @package Drupal\stanford_publication
 */
class CitationViewBuilder extends EntityViewBuilder {

  /**
   * {@inheritDoc}
   */
  public function build(array $build) {
    $build = parent::build($build);

    switch ($build['#view_mode']) {
      case 'apa':
        foreach(Element::children($build) as $child){
          unset($build[$child]);
        }
        $build['citation']['#markup'] = $build['#citation']->getBibliography(CitationInterface::APA);

      case 'chicago':
        foreach(Element::children($build) as $child){
          unset($build[$child]);
        }
        $build['citation']['#markup'] = $build['#citation']->getBibliography(CitationInterface::CHICAGO);
    }
    return $build;
  }

}
