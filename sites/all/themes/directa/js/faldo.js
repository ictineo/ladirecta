(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_faldo = {
  attach: function(context, settings) {
    /** slide de amagar i mostrar el element del menu **/
    Drupal.behaviors.directa_faldo_height = jQuery('#faldo-wrapper').height() + 'px';
    jQuery('#faldo-switcher').click(function() {
      /* fem servir una clase pel toggle i saber lestat actual del menu */
      if (jQuery(this).parent().hasClass('active')) {
        jQuery(this).parent().removeClass('active').animate({ 
          'height': '0px'
        });
      } else {
        /* emagantzemem el valor de left per recuperarlo per amegar */
        jQuery(this).parent().addClass('active').animate({ 
          'height': Drupal.behaviors.directa_faldo_height
        })
      }
    });

  }
};


})(jQuery, Drupal, this, this.document);
