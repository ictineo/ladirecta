#!/bin/bash
echo "Generant continguts"

drush en drush_devel
echo "Generador contingut habilitat"

drush genc 20 --types=cd_serveis,cd_noticies,faldo,butlleti_sonor,numero_paper,noticia,linies_de_recerca,cd_noticies --kill

echo "Script ejecutado"
