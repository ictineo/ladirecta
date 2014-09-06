(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {
    jQuery(document).ready(function () {
      jQuery('.cycle-slideshow').cycle('goto',jQuery('body.page-node-add-esdeveniment-agenda  .view-id-agenda_llista.view-display-id-page .data-avui').attr('data-item-count') - 3);
    });
  }
};


})(jQuery, Drupal, this, this.document);
