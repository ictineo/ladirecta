(function ($) {

var imce_filefield = window.imce_filefield = {queues: {}};

/**
 * Drupal behavior that process file fields.
 */
Drupal.behaviors.imce_filefield = {attach: function(context, settings) {
  var set = settings.imce_filefield;
  if (!set || !set.fields) return;
  $.each(set.fields, function(fieldID, conf) {
    // Check imce submit button. Not checking file input because it's ID changes on error.
    var $button = $('#' + fieldID + '-imce-filefield-submit', context);
    if (!$button.length) {
      // Prevent queue processing after file removal.
      var $remove = $('#' + fieldID + '-remove-button', context);
      if ($remove.length) $remove.mousedown(function(){
        imce_filefield.unsetQueue(fieldID);
      });
      return;
    }
    if ($button.is('.imce-filefield-processed')) return;
    $button.addClass('imce-filefield-processed');
    // Check and run queue.
    if (imce_filefield.runQueue(fieldID)) return;
    // Widget wrapper
    var $wrapper = $(document.createElement('div')).addClass('imce-filefield-wrapper');
    // IMCE opener link.
    var $opener = $(document.createElement('a')).addClass('imce-filefield-opener').attr({href: '#'});
    $opener.text(imce_filefield.openerText()).click(function() {
      window.open(set.url + '/' + conf.path + (set.url.indexOf('?') < 0 ? '?' : '&') + 'app=imce_filefield|imceload@imce_filefield.imceload&fieldID=' + fieldID, '', 'width=760,height=560,resizable=1');
      return false;
    });
    // Add elements to document.
    $wrapper.insertBefore($button.parent()).append($opener).append($button);
  });
}};

/**
 * Load callback for IMCE.
 */
imce_filefield.imceload = function(win) {
  var imce = win.imce,
  fieldID = win.location.search.match(/&fieldID=([^&#]+)/)[1],
  F = Drupal.settings.file,
  exts = F && F.elements && F.elements['#' + fieldID + '-upload'];

  // Add sendto operation
  imce.opAdd({name: 'sendto', title: Drupal.t('Select'), func: function() {
    var i, file, ext, winclose = false, names = [], ids = [];

    // Validate selection
    if (!imce.validateSelCount(1)) return;

    // Validate file extensions
    for (i in imce.selected) {
      file = imce.fileGet(i), ext = file.name.substr(file.name.lastIndexOf('.') + 1).toLowerCase();
      if (!exts || (',' + exts + ',').indexOf(',' + ext + ',') != -1) {
        // Newly uploaded files have file id.
        if (file.id) ids.push(file.id);
        else names.push(i);
      }
    }

    // No names to query.
    if (!names.length) {
      // Process the files whose ids are known
      if (ids.length) {
        imce_filefield.setQueue(fieldID, ids, true);
        win.close();
      }
      // None of the selected files passed the validation
      else {
        imce.setMessage(Drupal.t('Only files with the following extensions are allowed: %files-allowed.', {'%files-allowed': exts}), 'error');
      }
      return;
    }

    // Get the ids of the selected files
    imce.fopLoading('sendto', true);
    $.ajax({
      url: imce.ajaxURL('imce_filefield'),
      data: {'filenames[]': names, token: Drupal.settings.imce_filefield.token},
      dataType: 'json',
      success: function(response) {
        var i, newIds;
        if (response.messages) {
          imce.resMsgs(response.messages);
        }
        if (response.data && (newIds = response.data.ids)) {
          for (i in newIds) ids.push(newIds[i]);
          imce_filefield.setQueue(fieldID, ids, true);
          winclose = true;
        }
      },
      complete: function () {
        imce.fopLoading('sendto', false);
        winclose && win.close();
      }
    });
  }});

  // Change default sendto handler that fires on doubleclick / on enter
  imce.send = function(fid) {
    imce.highlight(fid);
    imce.opClick('sendto');
  };
};

/**
 * Run file queue.
 */
imce_filefield.runQueue = function(fieldID) {
  var queues = imce_filefield.queues, key = imce_filefield.fieldKey(fieldID), queue = queues[key], fid;
  if (queue) {
    fid = queue.shift();
    if (!queue.length) delete queues[key];
    if (fid) {
      imce_filefield.submit(fieldID, fid);
      return true;
    }
  }
};

/**
 * Set queue for a field
 */
imce_filefield.setQueue = function(fieldID, queue, run) {
  imce_filefield.queues[imce_filefield.fieldKey(fieldID)] = queue;
  if (run) imce_filefield.runQueue(fieldID);
};

/**
 * Unset a field's queue
 */
imce_filefield.unsetQueue = function(fieldID) {
  delete imce_filefield.queues[imce_filefield.fieldKey(fieldID)];
};

/**
 * Returns a field key without the delta.
 */
imce_filefield.fieldKey = function(fieldID) {
  var parts = fieldID.split('-');
  parts.pop();
  return parts.join('-');
};

/**
 * Submits a field widget with a file id.
 */
imce_filefield.submit = function(fieldID, fid) {
  $('#' + fieldID + '-imce-filefield-fid').val(fid);
  $('#' + fieldID + '-imce-filefield-submit').mousedown();
};

/**
 * Returns text for the opener link.
 */
imce_filefield.openerText = function() {
  return Drupal.t('Open File Browser');
};

})(jQuery);