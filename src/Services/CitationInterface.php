<?php

namespace Drupal\stanford_publication\Services;

use Drupal\eck\EckEntityInterface;

interface CitationInterface {

  /**
   * Set the entity to build the citation/bibliography.
   *
   * @param \Drupal\eck\EckEntityInterface $eckEntity
   *   The ECK entity object.
   */
  public function setEntity(EckEntityInterface $eckEntity): void;

  /**
   * Get the bibliography html for the entity.
   *
   * @param string $style
   *   Bibliography style.
   *
   * @return string
   *   Generated HTML CSL string.
   */
  public function getBibliography($style = 'apa'): string;

}
