
CONTENTS OF THIS FILE
---------------------

 * Author
 * Description
 * Installation
 * Usage

AUTHOR
------
Jim Berry ("solotandem", http://drupal.org/user/240748)

DESCRIPTION
-----------
This module allows you to expose field tables and columns as base tables and
fields, respectively, to Views. Possible use cases for this module are mentioned
at http://drupal.org/project/views_field.

INSTALLATION
------------
To use this module, install it and the Views module in a modules directory.
See http://drupal.org/node/895232 for further information.

From the modules page on your site, enable this module and that should trigger
enabling its dependent module.

The included Drush Make file provides a convenient method of downloading and
installing the correct versions of the Views (>=3) dependency. From a command
line, simply invoke:

  drush make --yes views_field.make

USAGE
-----
Add one or more fields to an entity using the fields UI. For a node content type
visit admin/structure/types/manage/<content-type>/fields/<field_name>. To expose
columns from the field table, check the "Expose as base table" box and
select the "Columns to expose" in the corresponding form element.

Visit admin/structure/views/add to create a view using the exposed field (or
revision) table as the base. In the "Content" form element, select "<field_name>"
or "<field_name> (revision)" as the base. By default, Views will add the first
column of the "field" to the view. For example, with a text field, this is the
"value" column.

At this point, adding the "entity" field, e.g. "Content: <field_name>," to the
view will result in SQL errors. Adding a relationship to the entity table and
using this relationship with the "entity" field will eliminate the sQL errors.
However, adding the "entity" field to this view runs counter to the purpose of
this module.

Multiple "exposed" field tables may be related by a multi-column join using the
primary key columns. This module provides a programmatic interface to trigger
this relation. A user interface is provided by the combination of the Field group
and Field group views modules. These projects are available at:

  http://drupal.org/project/field_group
  http://drupal.org/project/field_group_views

To enable this join, visit admin/structure/types/manage/<content-type>/display.
Add a field group and move fields into the group. Expand the format settings
form and select the field to be considered the primary field. Typically, this
will be the field that is used in all of the views based on the grouped fields.
Click "Update" and "Save" buttons to update the Views data and create a sample
view using the primary field table as the base table.
