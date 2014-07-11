(function ($) {

// Load the theme once on page load
$(function () {
  Galleria.loadTheme(Drupal.settings.galleria.themepath);
});

// Behavior to load Galleria
Drupal.behaviors.galleria = {
  attach: function(context, settings) {
    $('.galleria-content', context).once('galleria', function() {
      $(this).each(function() {
        var $this = $(this);
        var id = $this.attr('id');
        var optionset = settings.galleria.instances[id];
        if (optionset) {
          $this.galleria(settings.galleria.optionsets[optionset]);
        }
        else {
          $this.galleria();
        }
      });
    });
  }
};

}(jQuery));
