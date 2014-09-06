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
/* Creacio de dies */

$days = array();
$today = time();

//if (date('w',strtotime($today)) 
$calcul= date('w',strtotime($today));
$calcul2= (0 - $calcul)+3;
if ($calcul == 0) { $calcul2 = 6; } 

$today = strtotime("$calcul2 day", $today);

for ($i = 0 ; $i < 14; $i++) {
/* creem el array buit per la clau del dia */
$days[date('Y-m-d', $today)] = '';
/* incrementem el timestap amb un dia */

$today = strtotime("+1 day", $today);
}

$j = 0;
?>
<?php foreach ($view->result as $id => $row): ?>

<?php


$nodeurl = url('node/'. $row->nid);
 if ($row->field_body[0]['rendered'] == 'NULL') { $row->field_body[0]['rendered'] = ''; }
/* coprovem que el dia de levent esta en els 30seguents */
if (array_key_exists(date('Y-m-d', strtotime($row->field_data_field_data_ag_field_data_ag_value)), $days)) {
  $days[date('Y-m-d', strtotime($row->field_data_field_data_ag_field_data_ag_value))] .= 

    '<span class="title"><span class="num"></span> <div class="events"><a href='.url('node/'. $row->nid).'>'.$row->node_title.'</a></div></span>
    <span class="adreca"><span class="num"></span> <div class="events">'.$row->field_field_adreca[0]['rendered'].'</div></span>
    <span class="resum"><span class="num"></span><div class="events">'.$row->field_body[0]['rendered'].'</div></span>
    <span class="mesinfo"><div class="events"> <a href='.url('node/'. $row->nid).'> +info </a></div> </span>';
}

?>


<?php endforeach; ?>


<div id="cal-line"> 
  <div id=menu-agenda>
   <div id=menusup>
<?php
$j = 0;

foreach ($days as $date2 => $res2) {
  $j++;?>
      <?php if ($j <= 7) { print('<div class="daysup day-'.date('Y-m-d', strtotime($date2)).'" data-date="'.date('Y-m-d', strtotime($date2)).'">'.date('d', strtotime($date2)).'</div>');}  
           // else { print('<div class=dayinf>'.date('d', strtotime($date2)).'</div>');} 
}?>
    </div>
    <div id=menuinf> 
<?
$j= 0;
foreach ($days as $date3 => $res3) {
  $j++;?>
      <?php if ($j >= 8) { print('<div class="daysup day-'.date('Y-m-d', strtotime($date3)).'" data-date="'.date('Y-m-d', strtotime($date3)).'">'.date('d', strtotime($date3)).'</div>');}  
           // else { print('<div class=dayinf>'.date('d', strtotime($date2)).'</div>');} 
}?>
    </div>
  </div>
  

  <div class="sotamenu"> 
<?
/** mostrem el html que volem **/
foreach ($days as $date => $res) {  ?>
 <?php $today_class = ''; if(date('Y-m-d',strtotime($date)) == date('Y-m-d', time())) { $today_class = ' today';} ?>
 <?php print('<div class="dia-block day-'.date('Y-m-d', strtotime($date)).$today_class.'" data-date="'.date('Y-m-d', strtotime($date)).'">'); ?>
  <?print('<span class="data"><span class="num">' . date('d', strtotime($date)) . '</span></span>'); ?>
    <div id="events">
  <?  if(!empty($res)) {
    print($res);}
   else {
   print('<span class="day"><span class="num">Cap event aquest dia</span></span>');
   }
  ?> 
    </div>
</div>  <?
}
?>
  </div>
<?php $options = array('absolute' => TRUE);
$url = url('calendari'); ?>
<span class="day cal_link"><a href="<?php print($url);?>">.</a></span>
</div>
