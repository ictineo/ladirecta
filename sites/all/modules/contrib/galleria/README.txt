Galleria Drupal Module
======================

1. How to install Galleria
2. How to use Galleria
3. Configure Galleria
4. Customizing and adding themes
5. Frequently Asked Questions (FAQ)
6. Missing Features from Drupal 6


1. How to install Galleria
--------------------------

1. Make sure the Libraries module is installed.
   You can download it from it's project page at
   http://drupal.org/project/libraries

2. Download the Galleria Javascript library from
   http://galleria.aino.se/download/
   and extract the galleria folder into your /sites/all/libraries/ directory.

3. Extract the Galleria Drupal module into your /sites/all/modules/ directory and
   enable it (module "Galleria" in category "Other").


2. How to use Galleria
----------------------

There are several approaches of building a Galleria image gallery:

a) Using Galleria with an image/media field in a node:
   This is the classic and easiest way of creating a Galleria gallery.
   You create an image field and upload multiple images to it.

    1. Create a new content type for your gallery pages or alter an existing one.

    2. Add a new or existing field of type "Image" or "Multimedia asset" on the "Manage Fields" tab of the content type.
       When you save the content type, you will be redirected to the settings form of the field instance where you
       can change the allowed file extensions, image resolutions etc.
       Check "Enable Title field" for image titles and "Enable Alt field" for descriptions which will both show up in
       Galleria if your Galleria theme supports it.
       You should also set the "Number of values" select box in the field settings to something higher than 1 (e.g. "Unlimited").

    3. Go to the "Manage Display" page of your content type. Set the "Format" of your image field to "Galleria".
       To the right of the select box you can now choose the option set to use for this Galleria instance.
       For details on option sets, see "Configure Galleria" below.

    4. Create a new page of your content type, upload some images and view the node.
       The images should now be rendered in a nice Galleria gallery.

b) Using Galleria with an imagenode and a nodereference gallery:
   In this mode you'll create one single node per image. An additional gallery content type will hold a
   nodereference field. Creating a gallery is a multi step process, but images can be reused across galleries.

   For this to work, you need the References module from http://drupal.org/project/references.

    1. Create your image content type or alter an existing one.

    2. Add an image field to your content type. Only allow ONE single image per node.

    3. Create your gallery content type or alter an existing one.

    4. Add a nodereference field to your content type.
       Make sure you reference the content type from step #1.

    5. Go to the "Manage Display" page of your gallery content type. Set the "Format" of your nodereference field
       to "Galleria". To the right of the select box you can now choose the option set to use for this Galleria instance.
       For details on option sets, see "Configure Galleria" below.

    6. Upload some images, add titles if you want. Create a gallery node, reference the images and view the node.
       You should now be able see the images in the Galleria display widget.

c) Using Galleria in a view of image fields:
   List any node/gallery with image fields using views. Use any filter you like (e.g. taxonomy) to structure galleries.
   This description contains only the most basic steps.

    1. Create a view of nodes with an image field. On the "Fields" panel in views set the display to "Fields"
       and add the target field (which has to be of type image!). Select "Image" as field formatter.
       If you have other fields in the view, the first image field in the list will be used.

    2. On the "Format" Panel choose Galleria as your views display format.

    3. Have a look at your view, it should get rendered as a Galleria now.


3. Configure Galleria
---------------------

The configuration page for the Galleria module can be found on the Drupal "Configuration" page within the section
"Media" (the path is admin/config/media/galleria).
The main concept of configuring how your Gallerias look like are so called "option sets".
For each gallery, you can assign one of these option sets which determine the size, theme, image styles and
overall Galleria options.
For a documentation of available options, see http://galleria.aino.se/docs/1.2/options/.
All officially documented options are available from the select list, but you can also type in custom options (for
example for theme specific options) using the input field next to the drop-down list.
If you need these special values to be of type Boolean, use the special strings 'TRUE' and 'FALSE'.
You have to at least specify a height and width if you do not plan to set these values in one of your CSS files.


4. Customizing and adding themes
--------------------------------

Galleria supports several additional themes which can be bought and downloaded at http://galleria.aino.se/themes/.
It's also possible to alter existing themes or completely create new ones. The documentation to do so can be found
at http://galleria.aino.se/docs/1.2/themes/creating_a_theme/.
In order to add an additional theme just download it and copy the theme folder into your
/sites/all/libraries/galleria/themes/ folder.


5. Frequently Asked Questions (FAQ)
-----------------------------------

Q: How can I add titles/descriptions to my images?
A: If you want to display a caption above your images within the Galleria check the "Enable Title field" and/or
   "Enable Alt field" (for descriptions) on the create/edit form of your image field (reachable on the "Manage Fields"
   tab of your content type.
   After you have uploaded an image you can now enter the caption/title on the corresponding image right under
   the file upload widget.

Q: How can I limit which file types can be uploaded to my gallery?
A: If you want to limit the possible image formats you can do so by entering the desired file extensions
   in the "Allowed file extensions" textfield on the create/edit form of your image field.

Q: I found a bug / have a feature request / need support! What do I do?
A: That's what the issue tracker is for! Just create a new issue at http://drupal.org/project/issues/galleria?version=7.x
   and tell us what you need.

Q: How can I upload multiple images at once?
A: There's a module for that!
   The Multiupload Imagefield Widget can be found at http://drupal.org/project/multiupload_imagefield_widget.


6. Missing Features from Drupal 6
---------------------------------

The Drupal 7 port lacks some of the features of the old Drupal 6 version:

- No jCarousel support
- No Lightbox2 support (integrated lightbox support only)
- No administer permission
- File extensions are no longer checked in the module code because the extensions
  can be narrowed down in the field form of the image field (see 'Allowed file extensions' textfield)
