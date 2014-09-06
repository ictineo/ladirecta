(function ($, Drupal, window, document, undefined) {
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {
    /** sincronitzacio de camps de tipus de subscripcio**/
    jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-subscripcions-markup .opcio').click(function () {
      /** classes del markup per fer el efecte d'actiu **/
      jQuery(this).siblings().removeClass('active');
      jQuery(this).addClass('active');
      /* en f(x) de lelement clicat marquem el input:radio que toqui */
      if(jQuery(this).attr('id') == 'ordinaria') {
        jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-subscripcions input').filter('[value=75]').prop('checked', true);
      } else if(jQuery(this).attr('id') == 'semestral') {
        jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-subscripcions input').filter('[value=40]').prop('checked', true);
      } else if(jQuery(this).attr('id') == 'solidaria') {
        jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-subscripcions input').filter('[value=140]').prop('checked', true);
      } else if(jQuery(this).attr('id') == 'altres') {
        jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-subscripcions input').filter('[value=0]').prop('checked', true);
      } else if(jQuery(this).attr('id') == 'regala') {
        jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-subscripcions input').filter('[value=1]').prop('checked', true);
      }
    });

    /** sincronitzacio de camps de tipus de pagament **/
    jQuery('body.page-admin-people-create #edit-profile-main .group-pagament .field-type-markup').click(function () {
      /** classes del markup per fer el efecte d'actiu **/
      jQuery(this).siblings().removeClass('active');
      jQuery(this).addClass('active');
      /* en f(x) de lelement clicat marquem el input:radio que toqui */
      if(jQuery(this).attr('id') == 'edit-profile-main-field-transferencia') {
        jQuery('body.page-admin-people-create #edit-profile-main .group-pagament #edit-profile-main-field-forma-pagament input').filter('[value=1]').prop('checked', true);
      } else if(jQuery(this).attr('id') == 'edit-profile-main-field-domicialiacio') {
        jQuery('body.page-admin-people-create #edit-profile-main .group-pagament #edit-profile-main-field-forma-pagament input').filter('[value=2]').prop('checked', true);
      } else if(jQuery(this).attr('id') == 'edit-profile-main-field-altres') {
        jQuery('body.page-admin-people-create #edit-profile-main .group-pagament #edit-profile-main-field-forma-pagament input').filter('[value=3]').prop('checked', true);
      }
    });


    /** tiguerajem el canvi en els camps de text per omplir nom usuari, contrasenya i mail **/
    var update_usrnamepwd = function () {
      var name = jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-nom-usuari-und-0-value').val();
      var surname = jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-cognom-und-0-value').val();
      jQuery('body.page-admin-people-create #edit-account #edit-name').val(name + surname);
      jQuery('body.page-admin-people-create #edit-account #edit-pass-pass1').val(name + surname);
      jQuery('body.page-admin-people-create #edit-account #edit-pass-pass2').val(name + surname);
    }

    jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-nom-usuari-und-0-value').focusout(update_usrnamepwd);
    jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-cognom-und-0-value').focusout(update_usrnamepwd);
    jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-e-mail-und-0-email').focusout(function () {
      jQuery('body.page-admin-people-create #edit-account #edit-mail').val(jQuery('body.page-admin-people-create #edit-profile-main #edit-profile-main-field-e-mail-und-0-email').val());
    });

  }
};


})(jQuery, Drupal, this, this.document);
