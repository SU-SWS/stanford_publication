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

      // only open and close filter menu when on responsive size.
      const mediaQuery = window.matchMedia('(max-width: 991px)')

      function handleTabletChange(e) {
        // Check if the media query is true
        if (e.matches) {

          // Remove the h2 and replace with button.
          $("#system-menu-blockstanford-publication-topics-menu")
            .contents()
            .unwrap()
            .wrap('<button class="publication-topics__collapsable-menu"></button>');

          $('.publication-topics__collapsable-menu', context).click(function () {
            $(this).toggleClass('show');
            if ($(this).siblings('.menu').css('display') !== 'none') {
              $(this).attr('aria-expanded', 'true');
            }
            else {
              $(this).attr('aria-expanded', 'false');
            }
          });

        }
        else {
          // Add the class we need for the desktop view.
          $('#system-menu-blockstanford-publication-topics-menu').addClass('publication-topics__collapsable-menu');
        }
      }

// Register event listener
      window.addEventListener('resize', mediaQuery);

// Initial check
      handleTabletChange(mediaQuery);







    })(jQuery);
  }
};
