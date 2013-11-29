#!/bin/bash
rm -rf sites/all/modules/contrib
rm -rf sites/all/themes/contrib
drush make --working-copy --no-core --contrib-destination=. directa.make .
drush updatedb -y && drush cc all

sudo chown 33:33 . -R
sudo chmod 775 . -R
