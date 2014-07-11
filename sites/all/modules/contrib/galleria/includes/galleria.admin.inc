<?php
/**
 * @file
 * Administrative page callbacks for the galleria module.
 */


/**
 * Menu callback; Listing of all current option sets.
 */
function galleria_page_optionset_list() {
  $optionsets = galleria_optionsets();

  $header = array(t('Option Set Name'), array('data' => t('Operations'), 'colspan' => 2));
  $rows = array();
  foreach ($optionsets as $name => $optionset) {
    $rows[] = array(
      l($optionset['title'], 'admin/config/media/galleria/edit/' . $name),
      l(t('edit'), 'admin/config/media/galleria/edit/' . $name),
      // Hide the delete link for the 'default' set
      ($name == 'default') ? '' : l(t('delete'), 'admin/config/media/galleria/delete/' . $name),
    );
  }

  return theme('table', array(
      'header' => $header,
      'rows' => $rows,
      'empty' => t('There are currently no option sets. <a href="!url">Add a new one</a>.', array('!url' => url('admin/config/media/galleria/add'))),
  ));
}


/**
 * Form builder; Form for adding a new option set.
 */
function galleria_form_optionset_add($form, &$form_state) {
  $form['title'] = array(
    '#type' => 'textfield',
    '#maxlength' => '255',
    '#title' => t('Title'),
    '#description' => t('A human-readable title for this option set.'),
    '#required' => TRUE,
  );
  $form['name'] = array(
    '#type' => 'machine_name',
    '#maxlength' => '255',
    '#machine_name' => array(
      'source' => array('title'),
      'exists' => 'galleria_optionset_exists',
    ),
    '#required' => TRUE,
  );

  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Create new option set'),
    ),
    'cancel' => array(
      '#type' => 'link',
      '#title' => t('Cancel'),
      '#href' => 'admin/config/media/galleria',
    )
  );

  return $form;
}

/**
 * Submit handler for adding a new option set.
 */
function galleria_form_optionset_add_submit($form, &$form_state) {
  $optionset = array(
    'name' => $form_state['values']['name'],
    'title' => $form_state['values']['title'],
    'options' => array(
      'height' => 300,
      'width' => 450,
    ),
  );
  $optionset = galleria_optionset_save($optionset, TRUE);
  drupal_set_message(t('Option set %name was created.', array('%name' => $optionset['name'])));
  $form_state['redirect'] = 'admin/config/media/galleria/edit/' . $optionset['name'];
}


/**
 * Theme to embed tables into forms.
 */
function theme_galleria_form_table($variables) {
  $form = $variables['form'];

  $rows = array();
  foreach (element_children($form) as $row_key) {
    $row = array();
    foreach (element_get_visible_children($form[$row_key]) as $cell_key) {
      $cell = array('data' => drupal_render($form[$row_key][$cell_key]));
      if (!empty($form[$row_key][$cell_key]['#table_attributes']))
        $cell += $form[$row_key][$cell_key]['#table_attributes'];
      $row[] = $cell;
    }
    $rows[] = $row;
  }

  $variables = array();
  foreach ($form as $key => $value) {
    if (element_property($key)) {
      $variables[substr($key, 1)] = $value;
    }
  }
  $variables['rows'] = $rows;

  return theme('table', $variables);
}

/**
 * This function returns an array defining the form elements used to edit the different options.
 */
function galleria_option_elements() {
  $cropOptions = array(
    'true'      => t('Crop the image.'),
    'false'     => t('Scale down so the entire image fits.'),
    'height'    => t('Scale the image to fill the height of the stage.'),
    'width'     => t('Scale the image to fill the width of the stage.'),
    'landscape' => t('Fill up images with landscape proportions; scale portrait images to fit.'),
    'portrait'  => t('Fill up images with portrait proportions; scale landscape images to fit.'),
  );
  $transitionOptions = array(
    'fade'      => t('fade: crossfade betweens images'),
    'flash'     => t('flash: fades into background color between images'),
    'pulse'     => t('pulse: quickly removes the image into background color, then fades the next image'),
    'slide'     => t('slide: slides the images depending on image position'),
    'fadeslide' => t('fadeslide: fade between images and slide slightly at the same time'),
  );

  return array(
    'autoplay' => array(
      '#type' => 'textfield',
      '#title' => t('Autoplay'),
      '#description' => t('Sets Galleria to play slidehow when initialized. Value in milliseconds, for example 5000 will move forward every 5 seconds. 0 will disable autoplay'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 0,
    ),
    'carousel' => array(
      '#type' => 'checkbox',
      '#title' => t('Thumbnail carousel'),
      '#description' => t('Galleria comes with a built-in horizontal carousel. Activating this, the carousel will be automatically applied if the total sum of thumbnails width exceeds the thumbnail container. This will be re-calculated on resize.'),
      '#default_value' => TRUE,
    ),
    'carouselFollow' => array(
      '#type' => 'checkbox',
      '#title' => t('Carousel follows active image'),
      '#description' => t('This option defines if the the carousel should follow the active image. You can control the speed of the animation with the carouselSpeed option. Please note that animating heavy thumbnails can affect your main image animation, so if you are seeing big lags in the main animation you can try to disable this option.'),
      '#default_value' => TRUE,
    ),
    'carouselSpeed' => array(
      '#type' => 'textfield',
      '#title' => t('Carousel speed'),
      '#description' => t('This option controls the slide speed of the carousel in milliseconds. It globally affects the carousel animation, both when following and sliding.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 200,
    ),
    'carouselSteps' => array(
      '#type' => 'textfield',
      '#title' => t('Carousel steps'),
      '#description' => t('The number of "steps" the carousel will advance when navigating between available thumbnails. "auto" will move the carousel as many steps as there are visible thumbnails.'),
      '#element_validate' => array('_galleria_validate_integer_auto'),
      '#default_value' => 'auto',
    ),
    'clicknext' => array(
      '#type' => 'checkbox',
      '#title' => t('Click for next image'),
      '#description' => t('This options adds a click event over the stage that navigates to the next image in the gallery. Useful for mobile browsers and other simpler applications.'),
      '#default_value' => FALSE,
    ),
    // 'dailymotion' => array(),
    // 'dataConfig' => array(),
    // 'dataSelector' => array(),
    // 'dataSource' => array(),
    'debug' => array(
      '#type' => 'checkbox',
      '#title' => t('Debug'),
      '#description' => t('This option is for turning debug on/off. By default, Galleria displays errors by printing them out in the gallery container and sometimes throw exceptions. For deployment you can turn debug off to generate a more generic error message if a fatal error is raised.'),
      '#default_value' => TRUE,
    ),
    'dummy' => array(
      '#type' => 'textfield',
      '#title' => t('Dummy image'),
      '#description' => t('This option allows you to define an image that should be shown if Galleria can\'t find the original image. Think of it as a 404 for Galleria.'),
      '#default_value' => '',
    ),
    // 'easing' => array(),
    // 'extend' => array(),
    'fullscreenCrop' => array(
      '#type' => 'select',
      '#title' => t('Fullscreen cropping'),
      '#description' => t('Sets how Galleria should crop when in fullscreen mode.'),
      '#options' => $cropOptions,
      '#default_value' => 'false',
    ),
    'fullscreenDoubleTap' => array(
      '#type' => 'checkbox',
      '#title' => t('Fullscreen on double-tap'),
      '#description' => t('This options listens for the double-tap event on touch devices and toggles fullscreen mode if it happens.'),
      '#default_value' => TRUE,
    ),
    'fullscreenTransition' => array(
      '#type' => 'select',
      '#title' => t('Fullscreen transition'),
      '#description' => t('Defines a different transition for fullscreen mode. Some transitions are less smooth in fullscreen mode, this option allows you to set a different transition when in fullscreen mode. See the transition option for info about the different transitions.'),
      '#options' => $transitionOptions,
      '#default_value' => 'fade',
    ),
    'height' => array(
      '#type' => 'textfield',
      '#title' => t('Height'),
      '#description' => t('Galleria needs a height to work properly. You should set the height using this option. By default, Galleria will try to find the height of the parent container which requires Drupal theme support.'),
      '#element_validate' => array('_galleria_validate_number_auto'),
      '#default_value' => 'auto',
    ),
    'idleMode' => array(
      '#type' => 'checkbox',
      '#title' => t('Idle mode'),
      '#description' => t('Global option for turning on/off idle mode. Each gallery enters idle mode after certain amount of time and themes behave differently when this happens, for example clears the stage from distractions. If you want to prevent idle mode from ever occuring, disable this.'),
      '#default_value' => TRUE,
    ),
    'idleTime' => array(
      '#type' => 'textfield',
      '#title' => t('Idle time'),
      '#description' => t('The time in milliseconds before Galleria falls into Idle mode.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 3000,
    ),
    'idleSpeed' => array(
      '#type' => 'textfield',
      '#title' => t('Idle speed'),
      '#description' => t('The animation speed when falling into and returning from Idle mode in milliseconds.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 200,
    ),
    'imageCrop' => array(
      '#type' => 'select',
      '#title' => t('Image cropping'),
      '#description' => t('Defines how the main image will be cropped inside it’s container.'),
      '#options' => $cropOptions,
      '#default_value' => 'false',
    ),
    'imageMargin' => array(
      '#type' => 'textfield',
      '#title' => t('Image margin'),
      '#description' => t('Since images are scaled to fit the stage container, there might be occasions when you need to apply a margin between the image and stage border. This is what this option is for. The margin is set in pixels.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 0,
    ),
    'imagePan' => array(
      '#type' => 'checkbox',
      '#title' => t('Image pan effect'),
      '#description' => t('Galleria comes with a built-in panning effect. The effect is sometimes useful if you have cropped images and want to let the users pan across the stage to see the entire image.<br />'
                        . 'Enable this to apply a mouse-controlled movement of the image to reveal the cropped parts. This effect is useful if you want to avoid dark areas around the image but still be able to view the entire image.'),
      '#default_value' => FALSE,
    ),
    'imagePanSmoothness' => array(
      '#type' => 'textfield',
      '#title' => t('Image pan smoothness'),
      '#description' => t('This value sets how “smooth” the image pan movement should be when setting image_pan to true. The higher value, the smoother effect but also CPU consuming.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 12,
    ),
    'imagePosition' => array(
      '#type' => 'textfield',
      '#title' => t('Image position'),
      '#description' => t('Positions the main image inside the stage container. Works like the CSS background-position property, for example ‘top right’ or ‘20% 100%’. You can use keywords, percents or pixels. The first value is the horizontal position and the second is the vertical.<br />Read more about positioning at <a href="http://www.w3.org/TR/REC-CSS1/#background-position">http://www.w3.org/TR/REC-CSS1/#background-position'),
      '#default_value' => 'center',
    ),
    'imageTimeout' => array(
      '#type' => 'textfield',
      '#title' => t('Image timeout'),
      '#description' => t('This option defines how long Galleria will try to fetch the images (unless it returns 404) before an exception is thrown. It uses milliseconds, so 30000 is 30 sec.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 30000,
    ),
    'initialTransition' => array(
      '#type' => 'select',
      '#title' => t('Initial transition'),
      '#description' => t('Defines a different transition to show on the first image. For example, if you are using a slide transition, you might want the first image to fade. You can then set this option to ‘fade’.'),
      '#options' => $transitionOptions,
      '#default_value' => 'fade',
    ),
    // 'keepSource' => array(),
    'layerFollow' => array(
      '#type' => 'checkbox',
      '#title' => t('Layer follow'),
      '#description' => t('By default, the layer follows the image size on the stage, even if crop is set. This means that the HTML layer will stretch according to the active image. If you want the layer to fill the stage regardless of cropping settings, set this to false.'),
      '#default_value' => TRUE,
    ),
    'lightbox' => array(
      '#type' => 'checkbox',
      '#title' => t('Lightbox'),
      '#description' => t('When set, a lightbox will open when the user clicks on an image.'),
      '#default_value' => FALSE,
    ),
    'lightboxFadeSpeed' => array(
      '#type' => 'textfield',
      '#title' => t('Lightbox fade speed'),
      '#description' => t('When the lightbox opens, it will animate and fade the images and captions. This value controls how fast they should fade in milliseconds.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 200,
    ),
    'lightboxTransitionSpeed' => array(
      '#type' => 'textfield',
      '#title' => t('Lightbox transition speed'),
      '#description' => t('When the lightbox opens, it will animate the white square before displaying the image. This value controls how fast it should animate in milliseconds.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 300,
    ),
    'maxScaleRatio' => array(
      '#type' => 'textfield',
      '#title' => t('Maximum scale ratio'),
      '#description' => t('Sets the maximum scale ratio for images. For example, if you don’t want Galleria to upscale any images, set this to 1. Removing this option will allow any scaling of the images.'),
      '#element_validate' => array('_galleria_validate_number'),
      '#default_value' => 1,
    ),
    'minScaleRatio' => array(
      '#type' => 'textfield',
      '#title' => t('Minimum scale ratio'),
      '#description' => t('Sets the minimum scale ratio for images. For example, if you don’t want Galleria to downscale any images, set this to 1. Removing this option will allow any scaling of the images.'),
      '#element_validate' => array('_galleria_validate_number'),
      '#default_value' => 1,
    ),
    'overlayBackground' => array(
      '#type' => 'textfield',
      '#title' => t('Lightbox overlay background'),
      '#description' => t('This defines the overlay background color when the lightbox opens.'),
      '#default_value' => '#0b0b0b',
    ),
    'overlayOpacity' => array(
      '#type' => 'textfield',
      '#title' => t('Lightbox overlay opacity'),
      '#description' => t('This sets how much opacity the overlay should have when the lightbox opens.'),
      '#element_validate' => array('_galleria_validate_opacity'),
      '#default_value' => 0.85,
    ),
    'pauseOnInteraction' => array(
      '#type' => 'checkbox',
      '#title' => t('Pause playback on interaction'),
      '#description' => t('During playback, Galleria will stop the playback if the user presses thumbnails or any other navigational links. If you dont want this behaviour, disable this option.'),
      '#default_value' => TRUE,
    ),
    // 'popupLinks' => array(),
    'preload' => array(
      '#type' => 'textfield',
      '#title' => t('Preload images'),
      '#description' => t('Defines how many images Galleria should preload in advance. Please note that this only applies when you are using separate thumbnail files. Galleria always cache all preloaded images.<br />'
                        . '\'2\' preloads the next 2 images in line, \'all\' forces Galleria to start preloading all images. This may slow down client. \'0\' will not preload any images.'),
      '#element_validate' => array('_galleria_validate_preload'),
      '#default_value' => 2,
    ),
    'queue' => array(
      '#type' => 'checkbox',
      '#title' => t('Queue the slideshow'),
      '#description' => t('Galleria queues all activation clicks (next/prev & thumbnails). You can see this effect when f.ex clicking “next” fast many times. If you don’t want Galleria to queue, disable this. This will make Galleria stall during animations.'),
      '#default_value' => TRUE,
    ),
    'responsive' => array(
      '#type' => 'checkbox',
      '#title' => t('Responsive layout'),
      '#description' => t('This option sets the gallery in responsive mode. That means that it will resize the entire container if your CSS is dynamic. In other words, you can add media queries or dynamic proportions in your CSS and the gallery will follow these proportions as the window resizes.'),
      '#default_value' => FALSE,
    ),
    'show' => array(
      '#type' => 'textfield',
      '#title' => t('Show image'),
      '#description' => t('This defines what image index to show at first. If you use the history plugin, a permalink will override this number.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 0,
    ),
    'showCounter' => array(
      '#type' => 'checkbox',
      '#title' => t('Show counter'),
      '#description' => t('Disable this if you do not wish to display the counter.'),
      '#default_value' => TRUE,
    ),
    'showInfo' => array(
      '#type' => 'checkbox',
      '#title' => t('Show info'),
      '#description' => t('Disable this if you do not wish to display the image caption and description.'),
      '#default_value' => TRUE,
    ),
    'showImagenav' => array(
      '#type' => 'checkbox',
      '#title' => t('Show image navigation'),
      '#description' => t('Disable this option if you do not wish to display the image navigation (next/prev arrows).'),
      '#default_value' => TRUE,
    ),
    'swipe' => array(
      '#type' => 'checkbox',
      '#description' => t('Enables a swipe movement for flicking through images on touch devices.'),
      '#default_value' => TRUE,
    ),
    'thumbCrop' => array(
      '#type' => 'select',
      '#title' => t('Thumbnail cropping'),
      '#description' => t('Defines how the thumbnails will be cropped inside their container.'),
      '#options' => $cropOptions,
      '#default_value' => 'true',
    ),
    'thumbFit' => array(
      '#type' => 'checkbox',
      '#title' => t('Fit thumbnails'),
      '#description' => t('If this is enabled, all thumbnail containers will be shrinked to fit the actual thumbnail size. This is useful if you have thumbnails of various sizes and will them float nicely side-by-side.<br />'
                        . 'This is only relevant if thumbCrop is set to anything else but "crop". If you want all thumbnails to fit inside a container with predefined width & height, disable this.'),
      '#default_value' => TRUE,
    ),
    'thumbMargin' => array(
      '#type' => 'textfield',
      '#title' => t('Thumbnail margin'),
      '#description' => t('Specifies the margin between the thumbnails and their container. The margin is set in pixels.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 0,
    ),
    'thumbnails' => array(
      '#type' => 'select',
      '#title' => t('Show Thumbnails'),
      '#description' => t('Sets the creation of thumbnails.'),
      '#options' => array(
        'true'    => t('Show thumbnails'),
        'false'   => t('No thumbnails'),
        'numbers' => t('Show empty spans with numbers instead of thumbnails'),
        'empty'   => t('Show empty spans with the className img instead of thumbnails'),
      ),
      '#default_value' => 'true',
    ),
    'thumbQuality' => array(
      '#type' => 'select',
      '#title' => t('Thumbnail quality in IE'),
      '#description' => t('Defines if and how IE should use bicubic image rendering for thumbnails'),
      '#options' => array(
        'auto'  => t('Use high quality if image scaling is moderate'),
        'false' => t('Don´t use high quality (better performance)'),
        'true'  => t('Force high quality rendering (can slow down performance)'),
      ),
      '#default_value' => 'true',
    ),
    'touchTransition' => array(
      '#type' => 'select',
      '#title' => t('Touch Transition'),
      '#description' => t('Defines a different transition when a touch device is detected. See the transition option for info about the different transitions.'),
      '#options' => $transitionOptions,
      '#default_value' => 'fade',
    ),
    'transition' => array(
      '#type' => 'select',
      '#title' => t('Transition'),
      '#description' => t('The transition that is used when displaying the images.'),
      '#options' => $transitionOptions,
      '#default_value' => 'fade',
    ),
    'transitionSpeed' => array(
      '#type' => 'textfield',
      '#title' => t('Transition speed'),
      '#description' => t('The milliseconds used in the animation when applying the transition. The higher number, the slower transition.'),
      '#element_validate' => array('_galleria_validate_integer'),
      '#default_value' => 400,
    ),
    'trueFullscreen' => array(
      '#type' => 'checkbox',
      '#description' => t('Galleria supports true fullscreen mode if it is supported by the browser (currently FF10+, Safari 5.1+ and Chrome 15+). That means that it will enter a native OS fullscreen if the fullscreen method is triggered.'),
      '#default_value' => TRUE,
    ),
    // 'vimeo' => array(),
    'wait' => array(
      '#type' => 'textfield',
      '#title' => t('Measurement timeout'),
      '#description' => t('Sets how long Galleria should wait when trying to extract measurements, before throwing an error. Set this to \'true\' for infinity. See <a href="http://galleria.io/docs/options/wait/">the documentation</a> for more details.'),
      '#element_validate' => array('_galleria_validate_integer_boolean'),
      '#default_value' => 5000,
    ),
    'width' => array(
      '#type' => 'textfield',
      '#title' => t('Width'),
      '#description' => t('You should use this option to set a gallery width manually. By default, Galleria fetches the width from the containing element which requires special Drupal theme support.'),
      '#element_validate' => array('_galleria_validate_integer_auto'),
      '#default_value' => 'auto',
    ),
    // 'youtube' => array(),
  );
}

/**
 * Returns the form element to use to edit the given option.
 */
function galleria_option_element($option, $value) {
  $elements = galleria_option_elements();

  if (isset($elements[$option])) {
    $element = $elements[$option];
  }
  else {
    $element = array(
      '#type' => 'textfield',
      '#description' => t('Automatic type conversion: Use the special strings "TRUE" or "FALSE" to specify boolean values. Numeric values are passed to Galleria as float, everything else as string.'),
    );
  }

  if ($value !== NULL) {
    if ($element['#type'] == 'select') {
      if ($value === TRUE)
        $value = 'true';
      elseif ($value === FALSE)
        $value = 'false';
    }
    $element['#default_value'] = $value;
  }

  return $element;
}

/**
 * Form  builder; Form to edit a given option set.
 */
function galleria_form_optionset_edit($form, &$form_state, $optionset) {
  if (empty($form_state['optionset'])) {
    $form_state['optionset'] = $optionset;
  }
  else {
    $optionset = $form_state['optionset'];
  }

  // Print a warning if there's no height and/or width option in the set.
  foreach (array('height', 'width') as $dimension) {
    if (!array_key_exists($dimension, $optionset['options'])) {
      drupal_set_message(t('You should add a %dimension option if you don\'t plan to set it manually via CSS.', array('%dimension' => $dimension)), 'warning');
    }
  }

  // Title
  $form['title'] = array(
    '#type' => 'textfield',
    '#maxlength' => '255',
    '#title' => t('Title'),
    '#default_value' => $optionset['title'],
    '#description' => t('A human-readable title for this option set.'),
    '#required' => TRUE,
  );

  // Show the theme select box if there is more than one theme
  $themes = array_keys(galleria_get_themes(TRUE));
  if (count($themes) == 1) {
    $form['theme'] = array(
      '#type' => 'hidden',
      '#value' => $themes[0],
    );
  }
  elseif (count($themes) > 1) {
    asort($themes);

    $form['theme'] = array(
      '#type' => 'select',
      '#title' => t('Theme'),
      '#description' => t('As you have more than one Galleria theme installed, please select the one to use.'),
      '#options' => array_combine($themes, $themes),
      '#default_value' => $optionset['theme'],
    );
  }

  // Show multi-select field for plugins
  $plugins = array_keys(galleria_get_plugins(TRUE));
  asort($plugins);
  $form['plugins'] = array(
    '#type' => 'select',
    '#multiple' => TRUE,
    '#title' => t('Plugins'),
    '#description' => t('Please select a subset of plugins to enable for this specific optionset. You may select multiple by holding down the Cmd/Ctrl or Shift key while clicking.'),
    '#options' => array_combine($plugins, $plugins),
    '#default_value' => $optionset['plugins'],
  );

  // Show select boxes for the various image styles (thumbnail, normal, big)
  $image_styles = image_style_options(FALSE);
  $form['image_styles'] = array(
    '#type' => 'fieldset',
    '#title' => 'Image styles',
    '#tree' => TRUE,
  );
  $form['image_styles']['thumb'] = array(
    '#type' => 'select',
    '#title' => t('Thumbnail image style'),
    '#description' => t('Image style for the thumbnail bar.'),
    '#empty_option' => t('None (original image)'),
    '#options' => $image_styles,
    '#default_value' => $optionset['imagestyle_thumb'],
  );
  $form['image_styles']['normal'] = array(
    '#type' => 'select',
    '#title' => t('Normal image style'),
    '#description' => t('Image style for the main stage images.'),
    '#empty_option' => t('None (original image)'),
    '#options' => $image_styles,
    '#default_value' => $optionset['imagestyle_normal'],
  );
  $form['image_styles']['big'] = array(
    '#type' => 'select',
    '#title' => t('Big image style'),
    '#description' => t('Image style for lightbox or fullscreen theme.'),
    '#empty_option' => t('None (original image)'),
    '#options' => $image_styles,
    '#default_value' => $optionset['imagestyle_big'],
  );

  // Option table
  $form['options'] = array(
    '#theme' => 'galleria_form_table',
    '#tree' => TRUE,
    '#header' => array(t('Name'), t('Value'), t('Operations')),
  );

  $i = 0;
  foreach ($optionset['options'] as $key => $value) {
    $option_element = galleria_option_element($key, $value);

    $form['options'][] = array(
      'name' => array(
        '#type' => 'item',
        '#title' => check_plain($key),
        '#description' => isset($option_element['#title']) ? $option_element['#title'] : '',
      ),
      'value' => $option_element + array(
        '#option_name' => $key,
        '#title_display' => 'none',
      ),
      'delete' => array(
        '#type' => 'submit',
        '#name' => 'button_del_' . $i++,
        '#value' => t('Delete'),
        '#submit' => array('galleria_form_optionset_edit_submit_delete'),
        '#limit_validation_errors' => array(),
      ),
    );
  }

  // 'Add option' row at the end of the table
  $options = array_diff(array_keys(galleria_option_elements()), array_keys($optionset['options']));
  $options = empty($options) ? array() : array_combine($options, $options);
  $form['options'][] = array(
    'add_option_row' => array(
      '#table_attributes' => array('colspan' => '3', 'class' => array('container-inline')),
      '#tree' => FALSE,
      'new_option' => array(
        '#type' => 'select',
        '#options' => $options,
        '#empty_option' => t('Select or enter:'),
      ),
      'new_option_custom' => array(
        '#type' => 'textfield',
        '#states' => array(
          'visible' => array(
            ':input[name="new_option"]' => array('value' => ''),
          ),
        ),
      ),
      'button_add' => array(
        '#type' => 'submit',
        '#name' => 'add_option',
        '#value' => t('Add option'),
        '#submit' => array('galleria_form_optionset_edit_submit_add'),
        '#limit_validation_errors' => array(
          array('new_option'),
          array('new_option_custom'),
        ),
      ),
    ),
  );

  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#name' => 'submit',
      '#value' => t('Save option set')
    ),
    'cancel' => array(
      '#type' => 'link',
      '#title' => t('Cancel'),
      '#href' => 'admin/config/media/galleria',
    )
  );

  return $form;
}

/**
 * Validate a form element that should have an integer value.
 */
function _galleria_validate_integer($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && (!is_numeric($value) || intval($value) != $value || $value < 0)) {
    form_error($element, t('%name must be a positive integer.', array('%name' => $element['#title'])));
  }
}

/**
 * Validate a form element that should have an integer value or the special value 'auto'.
 */
function _galleria_validate_integer_auto($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && $value !== 'auto' && (!is_numeric($value) || intval($value) != $value || $value < 0)) {
    form_error($element, t('%name must be a positive integer or the special value \'auto\'.', array('%name' => $element['#title'])));
  }
}

/**
 * Validate a form element that should have an integer or boolean value.
 */
function _galleria_validate_integer_boolean($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && strtolower($value) !== 'true' && strtolower($value) !== 'false' && (!is_numeric($value) || intval($value) != $value || $value < 0)) {
    form_error($element, t('%name must be a positive integer or one of the boolean strings \'true\' or \'false\'.', array('%name' => $element['#title'])));
  }
}

/**
 * Validate a form element that should have a number as value.
 */
function _galleria_validate_number($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && !is_numeric($value)) {
    form_error($element, t('%name must be a number.', array('%name' => $element['#option_name'])));
  }
}

/**
 * Validate a form element that should have a number as value or the special value 'auto'.
 */
function _galleria_validate_number_auto($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && $value !== 'auto' && (!is_numeric($value) || $value < 0)) {
    form_error($element, t('%name must be a positive number or the special value \'auto\'.', array('%name' => $element['#option_name'])));
  }
}

/**
 * Validate a form element that should have a value between 0 and 1.
 */
function _galleria_validate_opacity($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && (!is_numeric($value) || $value < 0 || $value > 1)) {
    form_error($element, t('%name must be a value between 0 and 1.', array('%name' => $element['#option_name'])));
  }
}

/**
 * Validate a form element that should have an integer value or the special value 'all'.
 */
function _galleria_validate_preload($element, &$form_state) {
  $value = $element['#value'];
  if ($value !== '' && $value !== 'all' && (!is_numeric($value) || intval($value) != $value || $value < 0)) {
    form_error($element, t('%name must be a positive integer or the special value \'all\'.', array('%name' => $element['#option_name'])));
  }
}

/**
 * Submit handler for 'Add option' button; Add a new option to the set.
 */
function galleria_form_optionset_edit_submit_add($form, &$form_state) {
  $optionset = &$form_state['optionset'];

//  $optionset['options'] = array_fill_keys(array_keys(galleria_option_elements()), NULL);

  if (!empty($form_state['values']['new_option'])) {
    $new_option_element = 'new_option';
  }
  elseif (!empty($form_state['values']['new_option_custom'])) {
    $new_option_element = 'new_option_custom';
  }

  if (isset($new_option_element)) {
    $new_option = $form_state['values'][$new_option_element];
    if (!array_key_exists($new_option, $optionset['options'])) {
      // Add the new option with a NULL value. The input element cares for a default value.
      $optionset['options'][$new_option] = NULL;
      // Reset the input field
      $form_state['input'][$new_option_element] = '';
      drupal_set_message(t('Option %name added.', array('%name' => $new_option)));
    }
    else {
      form_set_error($new_option_element, t('This set already includes the %name option.', array('%name' => $new_option)));
    }
  }

  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for 'Delete' buttons; Delete an option from the set.
 */
function galleria_form_optionset_edit_submit_delete($form, &$form_state) {
  $optionset = &$form_state['optionset'];

  $rowindex = $form_state['triggering_element']['#parents'][1];
  $option = $form['options'][$rowindex]['value']['#option_name'];

  unset($optionset['options'][$option]);
  drupal_set_message(t('Option %name removed.', array('%name' => $option)));

  $form_state['rebuild'] = TRUE;
}

/**
 * Submit handler for 'Save option set' button; Save the changed option set.
 */
function galleria_form_optionset_edit_submit($form, &$form_state) {
  $optionset = &$form_state['optionset'];

  $optionset['title']   = $form_state['values']['title'];
  $optionset['theme']   = $form_state['values']['theme'];
  $optionset['plugins'] = $form_state['values']['plugins'];
  $optionset['imagestyle_thumb']  = $form_state['values']['image_styles']['thumb'];
  $optionset['imagestyle_normal'] = $form_state['values']['image_styles']['normal'];
  $optionset['imagestyle_big']    = $form_state['values']['image_styles']['big'];

  foreach ($form_state['values']['options'] as $index => $values) {
    $element = $form['options'][$index]['value'];
    $value  = $values['value'];

    if ($value !== '') {
      // Do some typeguessing here...
      if ($element['#type'] == 'checkbox') {
        $value = (bool) $value;
      }
      elseif (is_numeric($value)) { // || intval($value) != $value || $value < 0)
        $value = (float) $value;
      }
      elseif (strcasecmp($value, 'true') == 0) {
        $value = TRUE;
      }
      elseif (strcasecmp($value, 'false') == 0) {
        $value = FALSE;
      }
    }

    $option = $element['#option_name'];
    $optionset['options'][$option] = $value;
  }

  galleria_optionset_save($optionset);
  drupal_set_message(t('Option set %name changed.', array('%name' => $optionset['name'])));
  $form_state['redirect'] = 'admin/config/media/galleria';
}


/**
 * Form builder; Form to delete a given option set.
 */
function galleria_optionset_form_delete($form, &$form_state, $optionset) {
  $form_state['optionset'] = &$optionset;

  return confirm_form(
    $form,
    t('Are you sure you want to delete the option set %name?', array('%name' => $optionset['name'])),
    'admin/config/media/galleria',
    NULL,
    t('Delete'),  t('Cancel')
  );
}

/**
 * Submit handler for deleting an option set.
 */
function galleria_optionset_form_delete_submit($form, &$form_state) {
  $optionset = &$form_state['optionset'];

  if ($optionset['name'] == 'default') {
    // Prevent deletion of the default set so we can fall back to it.
    drupal_set_message(t('The default option set may not be deleted!', 'error'));
  }
  else {
    galleria_optionset_delete($optionset);
    drupal_set_message(t('Option set %name was deleted.', array('%name' => $optionset['name'])));
  }

  $form_state['redirect'] = 'admin/config/media/galleria';
}


/**
 * Form builder; Form for advanced module settings.
 */
function galleria_form_settings() {
  $form = array();

  $form['library'] = array(
    '#type' => 'fieldset',
    '#title' => 'Library',
  );

  $file = libraries_get_path('galleria');
  if (!is_dir($file)) {
    drupal_set_message(t('Library directory not found: <code>@file</code>', array('@file' => $file)), 'error', FALSE);
  }
  $form['library']['lib_path'] = array(
    '#type' => 'item',
    '#title' => t('Library path'),
    '#markup' => t('<code>@file</code>', array('@file' => $file)),
  );

  $file = galleria_get_library_file();
  $form['library']['lib_file'] = array(
    '#type' => 'item',
    '#title' => t('Library file'),
    '#markup' => $file ? t('<code>@file</code>', array('@file' => $file)) : t('Unknown'),
    '#description' => t('This filename is cached until the file is deleted.'),
  );

  $form['library']['themes_title'] = array(
    '#type' => 'item',
    '#title' => t('Themes'),
    '#description' => t('The following themes are currently known to the module. Clear the cache to search for new ones.'),
  );
  $form['library']['themes'] = array(
    '#theme' => 'galleria_form_table',
    '#header' => array(t('Name'), t('JavaScript file')),
    '#empty' => t('No themes found!'),
  );
  foreach (galleria_get_themes() as $theme => $file) {
    $form['library']['themes'][] = array(
      array(
        '#markup' => check_plain($theme),
      ),
      array(
        '#markup' => t('<code>@file</code>', array('@file' => $file)),
      ),
    );
  }

  $form['library']['plugins_title'] = array(
    '#type' => 'item',
    '#title' => t('Plugins'),
    '#description' => t('The following plugins are currently known to the module. Clear the cache to search for new ones.'),
  );
  $form['library']['plugins'] = array(
    '#theme' => 'galleria_form_table',
    '#header' => array(t('Name'), t('JavaScript file')),
    '#empty' => t('No plugins found!'),
  );
  foreach (galleria_get_plugins() as $plugin => $file) {
    $form['library']['plugins'][] = array(
      array(
        '#markup' => check_plain($plugin),
      ),
      array(
        '#markup' => t('<code>@file</code>', array('@file' => $file)),
      ),
    );
  }


  $form['library']['button_clearcache'] = array(
    '#type' => 'submit',
    '#name' => 'button_clearcache',
    '#value' => t('Clear cache'),
    '#submit' => array('galleria_form_settings_submit_clearcache'),
  );

  return $form;
}

/**
 * Submit handler for the advanced module settings form button 'Clear cache'.
 */
function galleria_form_settings_submit_clearcache($form, &$form_state) {
  cache_clear_all('galleria_', 'cache', TRUE);
  drupal_set_message(t('Cache cleared.'));
}

/**
 * Submit handler for the advanced module settings.
 */
function galleria_form_settings_submit($form, &$form_state) {
  drupal_set_message(t('NYI: Nothing done.'));
}
