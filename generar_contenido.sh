#!/bin/bash

drush dl devel devel_generate 
drush en devel devel_generate



drush gent seccions_web 40 --kill
drush gent categories_cd 40 --kill
drush gent seccions_paper 40 --kill
drush gent territorial 40 --kill
drush gent tags 40 -kill

echo "Creados 40 terminos de todas las taxonomias"


drush genc 40 --types=cd_serveis,cd_noticies,numero_paper,noticia,linies_de_recerca,cd_noticies,esdeveniment_agenda,fotogaleria,video --kill

drush genc 20 --types=faldo,butlleti_sonor --kill

echo "Creados 40 tipos de contenido repartidos"
echo "Creados 20 tipos de contenido repartidos entre faldo i butlleti sonor"
