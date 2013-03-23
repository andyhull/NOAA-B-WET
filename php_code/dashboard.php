<?php 
global $user;
$mainUser= user_load($user->uid);?>
<h4>Hi, <?php print $mainUser->name;?> welcome to your dashboard</h4>
<div class="well dashContainer">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus eu est sem. Proin diam lacus, commodo vitae volutpat ut, bibendum sed velit. Nam eu mattis arcu.</p>
	<a class="btn btn-primary btn-large" href="/node/add/grantee-survey">Start the survey</a></div>
<div class="well dashContainer">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus eu est sem. Proin diam lacus, commodo vitae volutpat ut, bibendum sed velit. Nam eu mattis arcu.</p>
	<a href="#teacherModal" role="button" class="btn btn-primary btn-large" data-toggle="modal">Send teacher surveys</a>
</div>
<div class="well dashContainer">
	<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus eu est sem. Proin diam lacus, commodo vitae volutpat ut, bibendum sed velit. Nam eu mattis arcu.</p>
	<a class="btn btn-primary btn-large" href="#">View teacher survey results</a>
</div>

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
</div>