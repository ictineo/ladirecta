(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_faldo = {
  attach: function(context, settings) {
    /** slide de amagar i mostrar el element del menu **/
    //Drupal.behaviors.directa_faldo_height = jQuery('#faldo-wrapper').height() + 'px';
    var cookie_name = 'faldo_vist-' + jQuery('#faldo-wrapper').attr('data-day');
    jQuery('#faldo-switcher').click(function() {
      jQuery.cookie(cookie_name, '1');
      /* fem servir una clase pel toggle i saber lestat actual del menu */
      if (jQuery(this).parent().hasClass('active')) {
        jQuery(this).parent().removeClass('active').animate({ 
          'bottom': '-100%'
        }, 600, function (){
          jQuery(this).addClass('disabled');
        });
      } else {
        /* emagantzemem el valor de left per recuperarlo per amegar */
        jQuery(this).parent().addClass('active').removeClass('disabled').animate({ 
          'bottom': '0'
        },600);
      }
    });
    if(jQuery.cookie(cookie_name) != 1) {
      jQuery('#faldo-wrapper').removeClass('disabled').addClass('active');
    } else {
      jQuery('#faldo-wrapper').addClass('disabled').css('bottom', '-100%');
    }
  }
};
})(jQuery, Drupal, this, this.document);

jQuery(document).ready(function() {
});
