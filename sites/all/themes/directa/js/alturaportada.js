(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_alturaportada = {
  attach: function(context, settings) {
    var content_h = jQuery('#content').css('height');
    jQuery('.sidebars .region-sidebar-first #block-views-portada-columnadreta-block-1').css('min-height', content_h);
  }
};


})(jQuery, Drupal, this, this.document);
