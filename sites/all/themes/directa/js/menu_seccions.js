(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_menu_superior = {
  attach: function(context, settings) {
    /** slide de amagar i mostrar el element del menu **/
    jQuery('#sections-switcher').click(function() {
      /* fem servir una clase pel toggle i saber lestat actual del menu */
      if (jQuery('#navigation').hasClass('active')) {
        jQuery('#navigation').removeClass('active').animate({ 
          'height': Drupal.behaviors.directa_menu_superior_height
        });
      } else {
        /* emagantzemem el valor de left per recuperarlo per amegar */
        Drupal.behaviors.directa_menu_superior_height = jQuery('#interior').height() + 'px';
        jQuery('#navigation').addClass('active').animate({ 
          'height': '0px'
        })
      }
    });


  }
};


})(jQuery, Drupal, this, this.document);

jQuery(document).ready(function() {
    jQuery('#sections-switcher').click();
});
