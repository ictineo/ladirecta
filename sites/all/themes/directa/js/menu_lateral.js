(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_menu_lateral = {
  attach: function(context, settings) {
    /** slide de amagar i mostrar el element del menu **/
    jQuery('#menu-tigger').click(function() {
      /* fem servir una clase pel toggle i saber lestat actual del menu */
      if (jQuery('#interior').hasClass('active')) {
        jQuery('#interior').removeClass('active').animate({ 
          'left': Drupal.behaviors.directa_menu_lateral_hidden_left
        });
        jQuery('#interior #menu-tigger').animate({
          'width': Drupal.behaviors.directa_menu_lateral_tigger_width
        });
      } else {
        /* emagantzemem el valor de left per recuperarlo per amegar */
        Drupal.behaviors.directa_menu_lateral_hidden_left = jQuery('#interior').css('left');
        Drupal.behaviors.directa_menu_lateral_tigger_width = jQuery('#interior #menu-tigger').css('width');
        jQuery('#interior #menu-tigger').animate({
          'width': '0px'
        });
        jQuery('#interior').addClass('active').animate({ 
          'left': '0px'
        });
      }
    });
    jQuery('#interior .menu-close').click(function() {
      jQuery('#interior').removeClass('active').animate({ 
        'left': Drupal.behaviors.directa_menu_lateral_hidden_left
      });
      jQuery('#interior #menu-tigger').animate({
        'width': Drupal.behaviors.directa_menu_lateral_tigger_width
      });
    });


    /** clicar al calendari petit del megamenu
     * al clicar a un dia es mostra el contingut corresponent */
    jQuery('#interior .daysup').click(function() {
      /** amaguem tots els que puguin estar mostrats **/
      jQuery('#interior .dia-block').each(function() {
        jQuery(this).hide();
      });
      /** guardem el valor del dia que s'ha clicat **/
      var data_date = jQuery(this).attr('data-date');
      /** busquem a sota menu el que tingui el atribut de data al 
       * valor del dia que s'ha clicat a la part superior */
      jQuery('#interior .sotamenu').find("[data-date=" + data_date + "]").show();
    });
    /** mostrem el dia actual per defecte**/
    jQuery('#interior .sotamenu .today').show();
    
    /** ajust dalcada de les caixes **/
    jQuery(document).ready(function () {
      /* agafem el valor maxim */
      var mh = 0;
      jQuery('#interior > .region > .block-views').each(function() {
        if(jQuery(this).height() > mh) {
          mh = jQuery(this).height();
        }
      });
      mh += 20;
      /** posem el valor màxim a totes */
      jQuery('#interior > .region > .block-views').each(function() {
        jQuery(this).height(mh);
      });
    });


  }
};


})(jQuery, Drupal, this, this.document);
