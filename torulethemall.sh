#!/bin/bash

drush en ictdirecta_torulethemallnew

drush fr ictdirecta_xhemeroteca 

drush dis uuid_features

drush en ictdirecta_torulethemallnew

echo "Cal posar enable al feeds admin ui i al feeds tamper ui, i fer la importacio"
