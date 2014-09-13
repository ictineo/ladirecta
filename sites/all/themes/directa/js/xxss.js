(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_xxss_hacking = {
  attach: function(context, settings) {
    jQuery(document).ready(function () {
    console.log('in xxssddd');
      console.log(jQuery('#col-meta .easy_social-widget-twitter iframe').contents().find('#widget').html());
    });
  }
};


})(jQuery, Drupal, this, this.document);
