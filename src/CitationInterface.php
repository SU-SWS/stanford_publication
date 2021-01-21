<?php

namespace Drupal\stanford_publication;

/**
 * Interface CitationInterface.
 *
 * @package Drupal\stanford_publication\Services
 */
interface CitationInterface {

  /**
   * APA Bibliography style.
   */
  const APA = 'apa';

  /**
   * Chicago bibliography style.
   */
  const CHICAGO = 'chicago-note-bibliography';

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

}
