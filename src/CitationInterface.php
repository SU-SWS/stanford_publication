<?php

namespace Drupal\stanford_publication;

/**
 * Interface CitationInterface.
 *
 * @package Drupal\stanford_publication\Services
 */
interface CitationInterface {

  const APA = 'apa';
  /**
  begell-house-chicago-author-date
  chicago-annotated-bibliography
  chicago-author-date-16th-edition
  chicago-author-date-basque
  chicago-author-date
  chicago-author-date-de
  chicago-author-date-fr
  chicago-figures
  chicago-fullnote-bibliography-16th-edition
  chicago-fullnote-bibliography
  chicago-fullnote-bibliography-fr
  chicago-fullnote-bibliography-short-title-subsequent
  chicago-fullnote-bibliography-with-ibid
  chicago-library-list
  chicago-note-bibliography-16th-edition
  chicago-note-bibliography
  chicago-note-bibliography-with-ibid
  petit-chicago-author-date
  taylor-and-francis-chicago-author-date
  taylor-and-francis-chicago-f
  universidade-do-porto-faculdade-de-engenharia-chicago
  university-of-york-chicago
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
