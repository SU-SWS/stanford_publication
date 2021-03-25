/**
 * Behavior Example that works with Webpack.
 *
 * @see: https://www.npmjs.com/package/drupal-behaviors-loader
 *
 * Webpack wraps everything in enclosures and hides the global variables from
 * scripts so special handling is needed.
 */

export default {

  // Attach Drupal Behavior.
  attach: function (context, settings) {
    (function ($) {

      // Desktop class added
      $('#system-menu-blockstanford-publication-topics-menu').addClass('publication-topics__collapsable-menu');

      // Only open and close filter menu when on responsive sizes.
      const mediaQuery = window.matchMedia('(max-width: 991px)');

      // Replace the h2 with button for responsive views.
      const buttonLabel = $("#system-menu-blockstanford-publication-topics-menu").text();

      function handleMobileSize(e) {
        // Check if the media query is true
        if (e.matches) {
          // Add the button
          $("#system-menu-blockstanford-publication-topics-menu")
            .replaceWith('<button class="publication-topics__collapsable-menu">' + buttonLabel + '</button>');

          // Remove the h2 if opening and closing window sizes
          $("h2.publication-topics__collapsable-menu")
            .replaceWith('<button class="publication-topics__collapsable-menu">' + buttonLabel + '</button>');

          // Add the mobile button functionality
          $('button.publication-topics__collapsable-menu', context).click(function () {
            $(this).toggleClass('show');
            if ($(this).siblings('.menu').css('display') !== 'none') {
              $(this).attr('aria-expanded', 'true');
            }
            else {
              $(this).attr('aria-expanded', 'false');
            }
          });

        }

        else if (!e.matches) {
            $("button.publication-topics__collapsable-menu")
              .replaceWith('<h2 class="publication-topics__collapsable-menu">' + buttonLabel + '</h2>');
        }
      }

      // Listen and change when window does.
      mediaQuery.addListener(handleMobileSize);
      handleMobileSize(mediaQuery);
    })(jQuery);
  }
};
