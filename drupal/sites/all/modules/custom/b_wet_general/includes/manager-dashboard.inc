<?php
function b_wet_general_manager_dashboard() { 
	$teacherResults ='';
	global $user;
  global $base_url;
  $mainUser= user_load($user->uid);
  $longProfile = profile2_load_by_user($mainUser);
  //get the grantee award number for our teacher results link
	if(isset($longProfile['grantee']->field_noaa_b_wet_award_number['und'][0]['value'])){
		$teacherResults = '/teacher-survey?field_grantee_id_2_value='.$longProfile['grantee']->field_noaa_b_wet_award_number['und'][0]['value'];
	}
  $surveyLink = $base_url.'/node/add/teacher-survey?edit[field_grantee_id]='.$teacherResults;
	  if(isset($longProfile['main']->field_first_name['und'][0]['value'])){
    $name = $longProfile['main']->field_first_name['und'][0]['value'];
  } else {
    $name = $mainUser->name;
  }

	$output = t('<div id="mainResults"><h2>Hi, '.$name.' welcome to your dashboard</h2>
<div class="well dashContainer">
  <i style="float:right" class="icon-tasks"></i>
  <h4>View the results of the teacher surveys</h4>
  <a class="btn btn-primary btnResults" href="/teacher-results">View teacher survey results</a>
</div>
<div class="well dashContainer">
  <i style="float:right" class="icon-tasks"></i>
	<h4>View the results of the grantee surveys</h4>
	<a class="btn btn-primary btnResults" href="/results">View grantee survey results</a>
</div></div><!--end hero-->');
  return $output;
 }
	