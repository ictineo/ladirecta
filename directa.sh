#!/bin/bash
rm directa.make
cp ../directa.make .
rm -rvf sites/all/modules/contrib
rm -rvf sites/all/themes/contrib
rm -rvf sites/all/libraries
#drush make --working-copy --no-core --contrib-destination=. directa.make .
drush make --working-copy --no-core directa.make .
#drush updatedb -y && 
drush dis overlay -y && drush cc all

sudo chown 33:33 . -R
sudo chmod 775 . -R
