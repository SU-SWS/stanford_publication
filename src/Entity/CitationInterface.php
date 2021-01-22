<?php

namespace Drupal\stanford_publication\Entity;

use Drupal\Core\Entity\ContentEntityInterface;
use Drupal\Core\Entity\EntityChangedInterface;
use Drupal\Core\Entity\EntityPublishedInterface;

/**
 * Provides an interface for defining Citation entities.
 *
 * @ingroup stanford_publication
 */
interface CitationInterface extends ContentEntityInterface, EntityChangedInterface {

  /**
   * APA Bibliography style.
   */
  const APA = 'apa';

  /**
   * Chicago bibliography style.
   */
  const CHICAGO = 'chicago-fullnote-bibliography';

  /**
   * Sets the Citation name.
   *
   * @param string $title
   *   The Citation title.
   *
   * @return \Drupal\stanford_publication\Entity\CitationInterface
   *   The called Citation entity.
   */
  public function setLabel($title): CitationInterface;

  /**
   * Get the bibliography html for the entity.
   *
   * @param string $style
   *   Bibliography style.
   *
   * @return string
   *   Generated HTML string.
   */
  public function getBibliography($style = self::APA): string;

  /**
   * Gets the parent entity of the paragraph.
   *
   * Preserves language context with translated entities.
   *
   * @return ContentEntityInterface
   *   The parent entity.
   */
//  public function getParentEntity();

}
