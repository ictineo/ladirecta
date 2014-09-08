(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_menu_superior = {
  attach: function(context, settings) {
    /** slide de amagar i mostrar el element del menu **/
    Drupal.behaviors.directa_menu_superior_height = '220px';
    jQuery('#sections-switcher').click(function() {
      /* fem servir una clase pel toggle i saber lestat actual del menu */
      if (!jQuery('#navigation').hasClass('active')) {
        jQuery('#navigation').addClass('active');
        jQuery('#navigation .block-nice-menus').animate({ 
          'height': Drupal.behaviors.directa_menu_superior_height
        });
      } else {
        /* emagantzemem el valor de left per recuperarlo per amegar */
        jQuery('#navigation').removeClass('active');
        jQuery('#navigation .block-nice-menus').animate({ 
          'height': '0px'
        })
      }
    });
    /* si no hi ha actiu cap terme de taxonomia posem el h2 com a selector **/
    if(jQuery('#block-nice-menus-1 ul li.active-trail > *').length < 1) {
      jQuery('#block-nice-menus-1 > h2').show();
      jQuery('#block-nice-menus-1 > h2').insertBefore('#block-nice-menus-1 ul li:first-child');
      jQuery('#block-nice-menus-1 > ul > h2').wrap('<li class="switcher-label"></li>');
    }
    /** posem els dos selectors per que aquest tigger sexecuta abans que la restructuracio
     * de codi i no queda el esdeveniment tiggerejat */
    jQuery('#block-nice-menus-1 ul .switcher-label, #block-nice-menus-1 ul li.active-trail').click(function(e) {
      e.preventDefault;
      if(jQuery(this).parent().hasClass('active')) {
        jQuery(this).siblings().hide();
      } else {
        jQuery(this).siblings().show();
      }
      jQuery(this).parent().toggleClass('active');

    });
  }
};


})(jQuery, Drupal, this, this.document);

/** init configurations **/
jQuery(document).ready(function() {
  /** si hi ha actiu algun terme el posem el primer i li treiem la a per posar un span **/
  jQuery('#block-nice-menus-1 ul li.active-trail').html('<span class="switcher-label">' + jQuery('#block-nice-menus-1 ul li.active-trail').text() + '</span>').insertBefore('#block-nice-menus-1 ul li:first-child');
});
