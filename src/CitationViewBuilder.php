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
    // This assumes the view mode name matches the constant name in the
    // interface.
    $constant = CitationInterface::class . '::' . strtoupper($build['#view_mode']);

    if (defined($constant) && $style = constant($constant)) {
      foreach (Element::children($build) as $child) {
        unset($build[$child]);
      }
      $build['citation']['#markup'] = $build['#citation']->getBibliography($style);
      return $build;
    }

    $build = parent::build($build);
    return $build;
  }

}
