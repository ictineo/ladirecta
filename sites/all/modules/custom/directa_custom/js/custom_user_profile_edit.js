(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.custom_directa_edit_profile = {
  attach: function(context, settings) {
    jQuery('.field-name-field-email-subject, .field-name-field-email-body').hide();
    jQuery('.field-name-field-email #edit-profile-main-field-email-und input').change(function() {
      if(jQuery(this).attr('checked') == 'checked') {
        jQuery('.field-name-field-email-subject, .field-name-field-email-body').show();
      } else {
        jQuery('.field-name-field-email-subject, .field-name-field-email-body').hide();
      }
    });
    jQuery('#plantilles-wrapper .plantilla-cont').hide();
    jQuery('#plantilles-wrapper .plantilla-title').click(function () {
      jQuery('#edit-profile-main-field-email-subject-und-0-value').val(jQuery(this).text());
      Drupal.wysiwyg.instances['edit-profile-main-field-email-body-und-0-value'].setContent(jQuery(this).siblings('.plantilla-cont').html());
    });


  }
};
})(jQuery, Drupal, this, this.document);
