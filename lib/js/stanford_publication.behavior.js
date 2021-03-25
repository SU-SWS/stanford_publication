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

      function handleMobileSize(e) {
        // Check if the media query is true
        if (e.matches) {
          const button = $('.publication-topics__collapsable-menu').click(() => button.toggleClass('show'));
          console.log(button);

          $('#system-menu-blockstanford-publication-topics-menu').contents().unwrap().wrap('<button class="publication-topics__collapsable-menu"/>');
          // Remove the h2 if opening and closing window sizes
          $("h2.publication-topics__collapsable-menu").contents().unwrap().wrap('<button class="publication-topics__collapsable-menu"/>');
        }

        // Setting for the window changing sizes back and forth
        else if (!e.matches) {
          $('button.publication-topics__collapsable-menu').contents().unwrap().wrap('<h2 class="publication-topics__collapsable-menu"/>');
        }

        else {
          $('button.publication-topics__collapsable-menu').contents().unwrap().wrap('<h2 class="publication-topics__collapsable-menu"/>');
          $('.menu').closest('.show').removeClass('show');
        }
      }

      // Listen and change when window does.
      mediaQuery.addListener(handleMobileSize);
      handleMobileSize(mediaQuery);
    })(jQuery);
  }
};
