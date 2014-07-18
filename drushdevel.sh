#!/bin/bash


drush gent seccions_web 40 --kill
drush gent categories_cd 40 
drush gent seccions_paper 40
drush gent territorial 40
drush gent tags 40



drush genc 70 --types=cd_serveis,cd_noticies,faldo,butlleti_sonor,numero_paper,noticia,linies_de_recerca,cd_noticies,esdeveniment_agenda,fotogaleria,video --kill


echo "Script ejecutado"
