<?php
function b_wet_general_grantee_dashboard() { 
	$teacherResults ='';
	global $user;
  $mainUser= user_load($user->uid);
  $longProfile = profile2_load_by_user($mainUser);
  //get the grantee award number for our teacher results link
	if(isset($longProfile['grantee']->field_noaa_b_wet_award_number['und'][0]['value'])){
		$teacherResults = '/teacher-survey?field_grantee_id_2_value='.$longProfile['grantee']->field_noaa_b_wet_award_number['und'][0]['value'];
	}
	//add a first name here instead of the username
	$output = t('<div id="mainResults"><h2>Hi, '.$mainUser->name.' welcome to your dashboard</h2>
<div class="well dashContainer">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus eu est sem. Proin diam lacus, commodo vitae volutpat ut, bibendum sed velit. Nam eu mattis arcu.</p>
	<a class="btn btn-primary btn-large" href="/node/add/grantee-survey">Start the survey</a></div>
<div class="well dashContainer">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus eu est sem. Proin diam lacus, commodo vitae volutpat ut, bibendum sed velit. Nam eu mattis arcu.</p>
	<a href="#teacherModal" role="button" class="btn btn-primary btn-large" data-toggle="modal">Send teacher surveys</a>
</div>
<div class="well dashContainer">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus eu est sem. Proin diam lacus, commodo vitae volutpat ut, bibendum sed velit. Nam eu mattis arcu.</p>
	<a class="btn btn-primary btn-large" href="'.$teacherResults.'">View teacher survey results</a>
</div></div><!--end hero-->

<!-- Modal -->
<div id="teacherModal" class="modal hide fade" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-header">
    <button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>
    <h3 id="myModalLabel">Teacher Survey</h3>
  </div>
  <div class="modal-body">
    <p>Copy and paste the text below into your email. The link provided will direct teachers to your survey.</p>
    <div class="well"><p>Hi, here is the link to the survey</p>
  </div>
  <div class="modal-footer">
    <button class="btn" data-dismiss="modal" aria-hidden="true">Close</button>
  </div>
</div>');
// print theme($output);
  return $output;
 }
	