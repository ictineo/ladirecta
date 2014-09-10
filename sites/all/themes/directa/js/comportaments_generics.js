(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_generics = {
  attach: function(context, settings) {
    jQuery('#block-views-videogaleria-block .view-footer, #block-views-fotogaleria-block .view-footer').click(function () {
      jQuery(this).siblings('.view-content').css('height','100%');
    });

  }
};


})(jQuery, Drupal, this, this.document);
