(function($) {
Drupal.behaviors.entityreferenceViewWidget = {
  attach: function(context, settings) {
    $('.ervw-add-items').bind('click',
      function() {
        if (typeof Drupal.settings['views'] != 'undefined') {
          Drupal.settings['views']['ajaxViews'] = null;
        }
      }
    );
    var checkboxes = '#modal-content input[name="entity_ids[]"]';
    $('#entityreference-view-widget-select-all').unbind('click').text('Select all').data('unselect', 0).click(function(){
      if ($(this).data('unselect')) {
        $(checkboxes).removeAttr('checked');
        $(this).data('unselect', 0).text('Select all');
      }
      else {
        $(checkboxes).attr('checked', 'checked');
        $(this).data('unselect', 1).text('Unselect all');
      }
      return false;
    });
    $('#entityreference-view-widget-modal-submit .button').click(function(){
      $('#modal-content .error').remove();
      var button = $(this);
      var selected_amount = $(checkboxes + ':checked').length;
      var settings_selector = '#' + $('#entityreference-view-widget-settings-selector').val();
      var widget_settings = JSON.parse($(settings_selector).val());
      var offset = $('#' + widget_settings.table_id + ' tbody tr').length;
      var entity_ids = $(checkboxes).serialize();
      var query_string = entity_ids + '&element=' + widget_settings.element + '&langcode=' + widget_settings.langcode + '&target_type=' + widget_settings.target_type + '&cardinality=' + widget_settings.cardinality;

      $('#' + widget_settings.table_id + ' input[type=checkbox]:checked').each(function(){
        query_string += '&default_entity_ids[' + $(this).data('delta') + ']=' + $(this).val();
        selected_amount++;
      });

      if (widget_settings.cardinality > 0 && widget_settings.cardinality < selected_amount) {
        $('#modal-content').prepend('<div class="messages error">Please select no more than ' + widget_settings.cardinality + ' values.</div>')
      }
      else {
        $.ajax({
          url: Drupal.settings.basePath + '?q=entityreference_view_widget/ajax',
          type: 'POST',
          dataType: 'html',
          data: query_string,
          success: function(data) {
            data && $('#' + widget_settings.table_id + ' tbody').html(data);
            $('#' + widget_settings.table_id + ' tbody tr').each(function(){
              var el = $(this);
              if (!el.find('.tabledrag-handle').length) {
                Drupal.tableDrag[widget_settings.table_id].makeDraggable(el.get(0));
                el.find('td:last').addClass('tabledrag-hide');
                if ($.cookie('Drupal.tableDrag.showWeight') == 1) {
                  el.find('.tabledrag-handle').hide();
                }
                else {
                  el.find('td:last').hide();
                }
              }
            });
            button.hasClass('modal-close') && Drupal.CTools.Modal.dismiss();
          }
        });
      }
    });
  }
}
})(jQuery);
