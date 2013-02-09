<?php
function b_wet_general_grantee_dashboard() { 
	$teacherResults ='';
	global $user;
  global $base_url;
  $mainUser= user_load($user->uid);
  $longProfile = profile2_load_by_user($mainUser);
  $grantee_id='';
  //get the grantee award number for our teacher results link
	if(isset($longProfile['grantee']->field_noaa_b_wet_award_number['und'][0]['value'])){
    $grantee_id = $longProfile['grantee']->field_noaa_b_wet_award_number['und'][0]['value'];
  	$teacherResults = '/teacher/'.$grantee_id;
  }
  $surveyLink = $base_url.'/node/add/teacher-survey?edit[field_grantee_id][und][0][value]='.$grantee_id;
  if(isset($longProfile['main']->field_first_name['und'][0]['value'])){
    $name = $longProfile['main']->field_first_name['und'][0]['value'];
  } else {
    $name = $mainUser->name;
  }
  if(isset($longProfile['main']->field_last_name['und'][0]['value'])){
    $lastName = $longProfile['main']->field_last_name['und'][0]['value'];
  } else {
    $lastName = "[LAST NAME]";
  }
  if(isset($longProfile['grantee']->field_organization['und'][0]['value'])){
    $organization = $longProfile['grantee']->field_organization['und'][0]['value'];
  } else {
    $organization = "[YOUR ORGANIZATION]";
  }
  if(isset($longProfile['main']->field_title['und'][0]['value'])){
    $title = $longProfile['main']->field_title['und'][0]['value'];
  } else {
    $title = "[YOUR TITLE]";
  }
  if(isset($longProfile['main']->field_contact_information['und'][0]['value'])){
    $contact = $longProfile['main']->field_contact_information['und'][0]['value'];
  } else {
    $contact = "[CONTACT INFORMATION]";
  }

	$output = t('<div id="mainResults"><h2>Hi, '.$name.'. Welcome to your dashboard</h2>
<div class="well dashContainer">
  <i style="float:right" class="icon-pencil"></i>
	<h4>Fill out your NOAA B-WET survey</h4>
	<a class="btn btn-primary btnResults" href="/node/add/grantee-survey">Start the survey</a></div>
<div class="well dashContainer">
  <i style="float:right" class="icon-envelope"></i>
  <h4>Create an email with a link to your teacher survey</h4>
	<a href="#teacherModal" role="button" class="btn btn-primary" data-toggle="modal">Send teacher surveys</a>
</div>
<div class="well dashContainer">
  <i style="float:right" class="icon-tasks"></i>
	<h4>View the results of your teacher surveys</h4>
	<a class="btn btn-primary btnResults" href="'.$teacherResults.'">View teacher survey results</a>
</div></div><!--end hero-->

<!-- Modal -->
<div id="teacherModal" class="modal hide fade" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-header">
    <button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>
    <h3 id="myModalLabel">Teacher Survey</h3>
  </div>
  <div class="modal-body">
    <h5>Copy and paste the text below into your email. The link provided will direct teachers to your survey.</h5>
    <div class="well">
      <p>Dear <strong>[FirstName] [LastName]</strong>,</p>
      <p>You are receiving this email because you are at the close of, or recently participated in, a
      professional development provided by '.$organization.'. This professional development
      program was funded by the National Oceanic and Atmospheric Administration’s Bay
      Watershed Education and Training program (NOAA B-WET).</p>
      <p>Please provide '.$organization.' and NOAA with feedback on the professional
      development by completing a post-program questionnaire. The questionnaire asks for
      your opinion of the professional development and how well-prepared you feel to teach
      students about water bodies and watersheds. The questionnaire will take about 20-30
      minutes to complete.</p>
      <p>Click on this link to begin: <a href="'.$surveyLink.'">'.$surveyLink.'</a></p>
      <p>Please be completely honest in your responses. YOUR RESPONSES WILL BE
      ANONYMOUS. None of the data you provide will be associated with your name or other
      identifying information. Your responses are very important and will be used to improve
      future NOAA-funded professional development programs.</p>
      <p>Thank you for taking the time to complete this questionnaire! If you have any questions
      or concerns, please contact either of the contacts below.</p>
      <p><strong>'.$name.' '. $lastName.', '.$title.'<br/>
      '.$organization.'<br/>
      '.$contact.'</strong></p>
      <p>Bronwen Rice, NOAA B-WET National Coordinator<br/>
      NOAA Office of Education<br/>
      Bronwen.Rice@noaa.gov<br/>
      202.482.6797</p>
      <p>OMB Control Number: 0648-xxxx Expires: xx/xx/20xx</p>
    </div>
  <div class="modal-footer">
    <button class="btn" data-dismiss="modal" aria-hidden="true">Close</button>
  </div>
</div>');
// print theme($output);
  return $output;
 }
	