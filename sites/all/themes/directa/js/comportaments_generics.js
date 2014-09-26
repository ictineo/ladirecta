(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_generics = {
  attach: function(context, settings) {
    /** veure mes fotogaleries **/
    jQuery('.view-id-videogaleria.view-display-id-block, .view-id-fotogaleria.view-display-id-block').each(function() {
      jQuery(this).find('.view-content li:nth-child(2), .view-content li:nth-child(3), .view-content li:nth-child(4)').each(function () {
        jQuery(this).css('min-height', '325px');
      });

      jQuery(this).find('.view-content').css({
        'height': '325px',
        'overflow': 'hidden',
        'display': 'block'
      });
      jQuery(this).find('.view-footer').css('cursor','pointer').click(function () {
        jQuery(this).siblings('.view-content').animate({
          'height': '100%'
        }, 2200);
        jQuery(this).hide();
      });
    });

  }
};


})(jQuery, Drupal, this, this.document);
