<?php
/**
* @file
* Default simple view template to display a list of rows.
*
* @ingroup views_templates
*/
?>
<?php
/** custom display
* Generate days structure
*/
/* Creacio de larray per tots els dies amb un string buit */
$days = array();
$today = time();
$today = strtotime("-60 day", $today);
for ($i = 0 ; $i < 150; $i++) {
  /* creem el array buit per la clau del dia */
  $days[date('Y-m-d', $today)] = '';
  /* incrementem el timestap amb un dia */
  $today = strtotime("+1 day", $today);
}


/*Omplim l'array amb la clau contenint la data i el valor el html dels events, si hi ha mes d'un event concatenem html */
foreach ($view->result as $id => $row): 
  $nodeurl = url('node/'. $row->nid);
  $output = '';
  /*eliminem els null provinents de l'exportació*/
  if ($row->field_body[0]['rendered'] == 'NULL') { 
    $row->field_body[0]['rendered'] = '';
  }
  if (array_key_exists(date('Y-m-d', strtotime($row->field_data_field_data_ag_field_data_ag_value)), $days)) {
    $output  = '<div id="event">';
    $output .=   '<span class="title">';
    $output .=     '<a href='.url('node/'. $row->nid).'>'.$row->node_title.'</a>';
    $output .=   '</span>';
    $output .=   '<span class="adreca">';
    $output .=     $row->field_field_adreca[0]['rendered'];
    $output .=   '</span>';
    $output .=   '<span class="resum">';
    $output .=     $row->field_body[0]['rendered'];
    $output .=   '</span>';
    $output .=   '<span class="mesinfo">';
    $output .=     '<a href='.url('node/'. $row->nid).'> +info </a>';
    $output .=   '</span>';
    $output .= '</div>';
    $days[date('Y-m-d', strtotime($row->field_data_field_data_ag_field_data_ag_value))] .= $output;
  }
  endforeach; 

  /** wrapper del carousel amb cycle2 **/
?>
<span id="cal-line-next" class="cal-line-pager"> &nbsp; </span>
<span id="cal-line-prev" class="cal-line-pager"> &nbsp; </span>
<div id="cal-line" class="cycle-slideshow" 
  data-cycle-starting-slide="58"
  data-cycle-timeout="0"  
  data-cycle-slides="> div.dia" 
  data-cycle-carousel-visible="7" 
  data-cycle-fx="carousel" 
  data-cycle-prev="#cal-line-next"
  data-cycle-next="#cal-line-prev"
  data-cycle-carousel-fluid=true 
  data-allow-wrap="false">
<?php
/** mostrem el html que volem **/
$j = 0;
foreach ($days as $date => $res):
  /* El dia 1 mostrem el mes */
  $j++;
  $month_label = '';
  if(date('d', strtotime($date)) == '1') {
    $month_label = '<div class="month-label">'.t(date('F', strtotime($date))).'</div>';
  }
?> 
  <div class="dia">
    <? 
     print($month_label);
     if(date('Y-m-d',strtotime($date)) == date('Y-m-d',strtotime("now"))) { 
       print('<span class="data data-avui" data-item-count="'.$j.'"><span class="num">' . date('d', strtotime($date)) . '</span><span class="llet">'. t(date('l', strtotime($date))) .' </span></span>'); 
     } else {
       print('<span class="data"><span class="num">' . date('d', strtotime($date)) . '</span><span class="llet">'. t(date('l', strtotime($date))) .' </span></span>'); 
     }
     if(!empty($res)) {
      print($res);
     } else {
       print('<span class="no-events">Cap event aquest dia</span>');
     }
    ?> 
  </div><!-- /dia --> 
  <?
endforeach;

$options = array('absolute' => TRUE);
$url = url('calendari'); ?>
</div>
<span class="day cal_link"><a href="<?php print($url);?>">.</a></span>
<?php drupal_add_js(drupal_get_path('theme', 'directa') . '/js/jquery.cycle2.min.js'); ?>
<?php drupal_add_js(drupal_get_path('theme', 'directa') . '/js/jquery.cycle2.carousel.js'); ?>
<?php drupal_add_js(drupal_get_path('theme', 'directa') . '/js/calendari_linia.js'); ?>
