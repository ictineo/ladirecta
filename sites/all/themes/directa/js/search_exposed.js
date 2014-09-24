(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.themedirecta_search_exposed= {
  attach: function(context, settings) {
    jQuery('.form-item-search-api-views-fulltext input').each(function () {
      jQuery(this).attr('placeholder', 'Escriu la teva cerca');
    });

  }
};


})(jQuery, Drupal, this, this.document);
