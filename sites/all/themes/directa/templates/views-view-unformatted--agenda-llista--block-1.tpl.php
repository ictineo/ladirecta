<?php
/** custom display
* Generate days structure
*/
/* Creacio de dies */

$days = array();
$today = time();

$calcul= date('w',strtotime($today));
$calcul2= (0 - $calcul)+3;
if ($calcul == 0) { 
  $calcul2 = 6; 
} 

$today = strtotime("$calcul2 day", $today);

for ($i = 0 ; $i < 14; $i++) {
  /* creem el array buit per la clau del dia */
  $days[date('Y-m-d', $today)] = '';
  /* incrementem el timestap amb un dia */
  $today = strtotime("+1 day", $today);
}

$j = 0;

foreach ($view->result as $id => $row):
  $nodeurl = url('node/'. $row->nid);
  if ($row->field_body[0]['rendered'] == 'NULL') { 
    $row->field_body[0]['rendered'] = ''; 
  }

  /* coprovem que el dia de levent esta en els 30seguents */
  if (array_key_exists(date('Y-m-d', strtotime($row->field_data_field_data_ag_field_data_ag_value)), $days)) {
    $output  ='<div class="event">';
    $output .= '<span class="title">';
    $output .=   '<a href='.url('node/'. $row->nid).'>'.$row->node_title.'</a>';
    $output .= '</span>';
    $output .= '<span class="adreca">';
    $output .=   $row->field_field_adreca[0]['rendered'];
    $output .= '</span>';
    $output .= '<span class="resum">';
    $output .=   $row->field_body[0]['rendered'];
    $output .= '</span>';
    $output .=   '<a href='.url('node/'. $row->nid).'> +info </a>';
    $output .= '</span>';
    $output .='</div>';
    $days[date('Y-m-d', strtotime($row->field_data_field_data_ag_field_data_ag_value))] .= $output;
  }

endforeach;


/** preparem per mostrar la linia de navegacio de dies **/
$dates1 = '';
$dates2 = '';

$j = 0;
$context_class = ' past';
foreach ($days as $date2 => $res2):
  $j++;
  if($context_class == ' today') {
    $context_class = ' future';
  }
  if(date('Y-m-d',strtotime($date2)) == date('Y-m-d', time())) { 
    $context_class = ' today';
  } 
  if ($j <= 7) { 
    $dates1 .= '<div class="daysup day-'.date('Y-m-d', strtotime($date2)). $context_class . '" data-date="'.date('Y-m-d', strtotime($date2)).'">'.date('d', strtotime($date2)).'</div>';
  }
  else {
    $dates2 .= '<div class="daysup day-'.date('Y-m-d', strtotime($date2)). $context_class . '" data-date="'.date('Y-m-d', strtotime($date2)).'">'.date('d', strtotime($date2)).'</div>';
  }
endforeach;
?>


<div id="cal-line"> 
  <div id=menu-agenda>
   <div id=menusup>
      <?php print $dates1; ?>
    </div>
    <div id=menuinf> 
      <?php print $dates2; ?>
    </div>
  </div>
  

  <div class="sotamenu"> 
<?
/** mostrem el html que volem **/
foreach ($days as $date => $res):
  $today_class = ''; 
  $day_text = date('d', strtotime($date));
  if(date('Y-m-d',strtotime($date)) == date('Y-m-d', time())) { 
    $today_class = ' today';
    $day_text = t('Today');
  } 
  print('<div class="dia-block day-' . date('Y-m-d', strtotime($date)) . $today_class . '" data-date="' . date('Y-m-d', strtotime($date)) . '">');
  print('  <span class="data"><span class="num">' . $day_text . '</span></span>'); 
  print('  <div class="events">');
  if(!empty($res)) {
    print($res);
  }
  else {
    print('<span class="no-events"><div class="no-events">Cap event aquest dia</div></span>');
  }
print(' </div></div>  ');
endforeach;
?>
  </div>
<?php $options = array('absolute' => TRUE);
$url = url('calendari'); ?>
<span class="day cal_link"><a href="<?php print($url);?>">.</a></span>
</div>
