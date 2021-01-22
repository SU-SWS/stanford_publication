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
      $build['citation']['#markup'] = htmlspecialchars_decode($build['#citation']->getBibliography($style));
      if($build['#citation']->id()== 5){
        dpm($build['#citation']->getBibliography($style));
        dpm($build['citation']['#markup']);
      }
      return $build;
    }

    $build = parent::build($build);
    return $this->buildDateDisplay($build);
  }

  /**
   * Consolidate the year, month and day fields into a single string.
   *
   * @param array $build
   *   Render array.
   *
   * @return array
   *   Modified render array
   */
  protected function buildDateDisplay(array $build): array {
    if (!isset($build['su_year'])) {
      unset($build['month'], $build['day']);
      return $build;
    }

    // Copy the year over so that it has its own unique keys.
    $build['su_year']['#title'] = $this->t('Publication Date');

    if (isset($build['su_month'])) {
      $build['su_month']['#label_display'] = 'hidden';
      $month = (int) trim(strip_tags(render($build['su_month'])));
      $month = date('F', strtotime("1-$month-2000"));

      if (isset($build['su_day'])) {
        $build['su_day']['#label_display'] = 'hidden';
        $month .= ' ' . (int) trim(strip_tags(render($build['su_day'])));
      }

      $build['su_year'][0]['#markup'] = "$month, " . $build['su_year'][0]['#markup'];
    }
    return $build;
  }

}
