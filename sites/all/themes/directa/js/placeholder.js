(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.directa_theme_placeholders_agenda= {
  attach: function(context, settings) {

    jQuery('form :input').each(function(index, elem) {
      var eId = $(elem).attr('id');
      var label = null;
      if (eId && (label = $(elem).parents('form').find('label[for='+eId+']')).length === 1) {
        jQuery(elem).attr('placeholder', $(label).text());
        //jQuery(label).addClass('hide-label');
        jQuery(label).hide();
      }
    });

  }
};


})(jQuery, Drupal, this, this.document);
