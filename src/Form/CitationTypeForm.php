<?php

namespace Drupal\stanford_publication\Form;

use Drupal\Core\Entity\EntityForm;
use Drupal\Core\Form\FormStateInterface;

/**
 * Class CitationTypeForm.
 */
class CitationTypeForm extends EntityForm {

  /**
   * {@inheritdoc}
   */
  public function form(array $form, FormStateInterface $form_state) {
    $form = parent::form($form, $form_state);

    $citation_type = $this->entity;
    $form['label'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Label'),
      '#maxlength' => 255,
      '#default_value' => $citation_type->label(),
      '#description' => $this->t("Label for the Citation type."),
      '#required' => TRUE,
    ];

    $form['id'] = [
      '#type' => 'machine_name',
      '#default_value' => $citation_type->id(),
      '#machine_name' => [
        'exists' => '\Drupal\stanford_publication\Entity\CitationType::load',
      ],
      '#disabled' => !$citation_type->isNew(),
    ];

    /* You will need additional form elements for your custom properties. */

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function save(array $form, FormStateInterface $form_state) {
    $citation_type = $this->entity;
    $status = $citation_type->save();

    switch ($status) {
      case SAVED_NEW:
        $this->messenger()->addMessage($this->t('Created the %label Citation type.', [
          '%label' => $citation_type->label(),
        ]));
        break;

      default:
        $this->messenger()->addMessage($this->t('Saved the %label Citation type.', [
          '%label' => $citation_type->label(),
        ]));
    }
    $form_state->setRedirectUrl($citation_type->toUrl('collection'));
  }

}
