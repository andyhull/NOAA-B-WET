<header id="navbar" role="banner" class="navbar navbar-fixed-top">
  <div class="navbar-inner">
  	<div class="container">
  	  <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
  	  <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
  		<span class="icon-bar"></span>
  		<span class="icon-bar"></span>
  		<span class="icon-bar"></span>
  	  </a>
  	  
  	  <?php if ($logo): ?>
    		<a class="brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
    		  <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    		</a>
  	  <?php endif; ?>

  	  <?php if ($site_name || $site_slogan): ?>
    		<hgroup id="site-name-slogan">
    		  <?php if ($site_name): ?>
    			<h1>
    			  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="brand"><?php print $site_name; ?></a>
    			</h1>
    		  <?php endif; ?>
    		</hgroup>
  	  <?php endif; ?>
  	  
  	  <div class="nav-collapse">
    	  <nav role="navigation">
      		<?php if ($primary_nav): ?>
      		  <?php print $primary_nav; ?>
      		<?php endif; ?>
      	  
      		<?php if ($search): ?>
      		  <?php if ($search): print render($search); endif; ?>
      		<?php endif; ?>
      		
      		<?php if ($secondary_nav): ?>
      		  <?php print $secondary_nav; ?>
      		<?php endif; ?>
    		</nav>
  	  </div>         
  	</div>
  </div>
</header>

<div class="container">

  <header role="banner" id="page-header">
    <?php if ( $site_slogan ): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#header -->
	
	<div class="row">
	  
    <?php if ($page['sidebar_first']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>  
	  
	  <section class="<?php print _twitter_bootstrap_content_span($columns); ?>">  
      <?php if ($page['highlighted']): ?>
        <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if ($breadcrumb): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if ($tabs): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if ($page['help']): ?> 
        <div class="well"><?php print render($page['help']); ?></div>
      <?php endif; ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
	  </section>

    <?php if ($page['sidebar_second']): ?>
      <aside class="span3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
  <footer class="footer container">
    <?php print render($page['footer']); ?>
  </footer>
</div>

<script>
(function($) {
  //helper text for the award number
  $('.form-item-title').append('<div class="titleHelp">Your NOAA B-WET award number has 14 digits such as NA12NMF4638049. The award number will be used <strong>ONLY</strong> to 1) identify your BWET region, not your organization, and 2) allow us to link information you provide with that of data that may be provided by your project’s teachers');
  //helper text for the end of the survey
  $('#multistep-group_page8').append('<div class="footerHelp well"><p><h3 style="text-align:center;">Thank you for completing this questionnaire!</h3></p><p><strong>OMB Control Number: 0648-xxxx   Expires: xx/xx/20xx </strong></p><h3>Paperwork Reduction Act Statement</h3>Public reporting burden for this collection of information is estimated to average 30-60 minutes per response, including the time for reviewing instructions, searching existing data sources, gathering and maintaining the data needed, and completing and reviewing the collection of information. Send comments regarding this burden estimate or any other suggestions for reducing this burden to Bronwen Rice, NOAA Office of Education, Herbert C. Hoover Building, Room 6863, 14th and Constitution Avenue, NW Washington, DC 20230.</p><p>Responses are voluntary and collected and maintained as anonymous data.  Information will be treated in accordance with the Freedom of Information Act (5 USC 552). </p><p>Notwithstanding any other provision of the law, no person is required to respond to, nor shall any person be subject to a penalty for failure to comply with, a collection of information subject to the requirements of the Paperwork Reduction Act, unless that collection of information displays a currently valid OMB Control Number.</p></div>');
  //helper text for the start of the survey
  var startText = '<div class="well"><h3>NOAA B-WET Introduction</h3><p>Please answer the following questions in reference to the most recently-completed grant year of your current NOAA B-WET grant.  You will be asked about a range of practices and outcomes that represent the diversity of <em>Meaningful Watershed Educational Experiences </em>MWEEs) offered by B-WET-funded programs, some of which may not apply directly to your project.  It is acceptable to answer “not applicable” (N/A) in those instances. </p><p>For the purposes of this questionnaire, we assume that <em>Meaningful Watershed Educational Experiences </em>(MWEEs) are investigative, project-oriented, sustained activities that include one or more outdoor experiences, consider the watershed as a system, and are an integral part of a school instructional program. MWEEs for students are projects that provide K-12 students opportunities for these activities. MWEEs for teachers provide K-12 teachers opportunities for professional development to build their confidence and capacity to implement MWEE activities with their students. MWEEs are enhanced by NOAA products, services, or personnel; support regional environmental and natural resource management priorities; and are designed to increase students\' and teachers\' understanding and stewardship of watersheds and related ocean, coastal and Great Lakes ecosystems. </p><p>We realize that not all MWEEs are designed in the same way and that your organization does not necessarily only offer one type. Because we are attempting to generalize, we often ask you to consider a “typical” MWEE offered by your organization. Please consider your most frequently offered MWEE as “typical.”  For the purposes of this survey, please respond in reference to NOAA B-WET-funded MWEEs and professional development.  </p><p>All responses will be kept anonymous, that is they will not be associated with you and your organization. THANK YOU in advance for your candor and thoughtfulness in answering the questions that follow. </p><p><em>Note: The term “organization” is used generically to mean the B-WET funds “awardee.” The awardee may be one nonprofit organization or an academic institution completing the work, or the awardee may be an institution that is serving as the leader of a partnership of organizations that are completing the work. If you are the latter type of awardee, please respond on behalf of your collective group of partners.   </em></p><p><em>Note: We apologize for redundancy in information you have previously provided to NOAA B-WET as part of your award. At this time, we are not able to link this national evaluation system database with NOAA B-WET’s other databases. </em></p><p>It will take between 30-60 minutes to complete this survey, depending on the nature of your project. <br/>Thank you. <br/>Bronwen Rice <br/>NOAA B-WET National Coordinator</p></div>'
  $('#multistep-group_page1').prepend(startText);


  //here we replace the truncated cck label text with text from the help text field. 
  //help text must contain a "longText" class to be used for replacement
  $.each($('label.control-label').siblings('.controls'), function(){
    if($('.help-block>.longText', $(this)).length) {
      var helpText  = $('.help-block>.longText', $(this))
      $(this).siblings('label').text($(helpText).text())
      $(helpText).hide();
    }
  });
  //same as above for fieldset text
  $.each($('fieldset.longText'), function() {
    var legendText = $('.fieldset-legend', $(this))
    $(legendText).text($('.fieldset-description',$(this)).text())
    $('.fieldset-description',$(this)).hide()
  })
    //remove N/A's from all forms
    $('.form-radio[value=_none]').parent().hide();
    $('.form-radio[value=""]').parent().hide();
    var addNA = ['#edit-field-standards-school-district-und-none','#edit-field-standards-state-und-none',
    '#edit-field-standards-national-und-none', '#edit-field-standards-regional-und-none',
    '#edit-field-know-more-about-the-ocean-und-none', '#edit-field-know-more-about-climate-ch-und-none',
    '#edit-field-feel-connected-und-none','#edit-field-express-concern-und-none',
    '#edit-field-confident-to-protect-und-none', '#edit-field-likely-to-protect-und-none',
    '#edit-field-be-better-able-to-make-inf-und-none', '#edit-field-conduct-investigations-und-none',
    '#edit-field-express-interest-und-none', '#edit-field-better-academically-und-none',
    '#edit-field-better-standardized-tests-und-none', '#edit-field-more-engaged-und-none', 
    '#edit-field-define-watershed-und-none', '#edit-field-identify-local-watershed-und-none', 
    '#edit-field-identify-watershed-connect-und-none', '#edit-field-identify-watershed-functio-und-none',
    '#edit-field-recognize-processes-und-none', '#edit-field-identify-human-connections-und-none', 
    '#edit-field-identify-pollution-und-none','#edit-field-identify-actions-und-none',
    '#edit-field-teacher-school-district-und-none', '#edit-field-teacher-state-standards-und-none',
    '#edit-field-teacher-national-standards-und-none', '#edit-field-teacher-regional-prioritie-und-none',
    '#edit-field-teacher-define-watershed-und-none', '#edit-field-teacher-identify-local-wat-und-none',
    '#edit-field-teacher-identify-watershed-und-none', '#edit-field-teacher-id-watershed-funct-und-none',
    '#edit-field-teacher-recognize-processe-und-none', '#edit-field-teacher-identify-human-con-und-none',
    '#edit-field-teacher-identify-pollution-und-none', '#edit-field-teacher-identify-actions-und-none', 
    '#edit-field-teacher-teach-watershed-und-none', '#edit-field-teacher-implement-mwee-und-none',
    '#edit-field-teacher-implement-mwee-aft-und-none', '#edit-field-teacher-use-resources-und-none',
    '#edit-field-teacher-guide-students-und-none', '#edit-field-teacher-science-instructio-und-none',
    '#edit-field-teacher-outdoor-instructio-und-none', '#edit-field-teacher-local-resources-und-none',
    '#edit-field-teacher-interdisciplinary-und-none', '#edit-field-teacher-enthusiastic-und-none', 
    '#edit-field-teacher-act-to-protect-und-none', '#edit-field-public-familiar-und-none',
    '#edit-field-improve-env-edu-und-none', '#edit-field-impact-env-edu-und-none',
    '#edit-field-impact-edu-policy-und-none', '#edit-field-impact-env-policy-und-none',
    '#edit-field-impact-health-und-none'];
    $.each(addNA, function(intIndex, objValue){
      if($(objValue).length) {
        $(objValue).parent().show();
      }
    })

    //set the fieldset display equal to elements inside it. allows for correct toggling
    $('.form-radio').change(function(){
      $.each($('.field-group-fieldset'), function(){
        var container = $(this)
        setTimeout(function(){
          $(container).css('display', $('.form-wrapper', container).css('display'))
        }, 1)
      })
    })
    //hide the fieldset titles if elements inside it are hidden
    $.each($('.field-group-fieldset'), function(){
      var container = $(this)
      //have to set a slight delay to capture the inline elements added by the field dependencies
      setTimeout(function(){
        $(container).css('display', $('.form-wrapper', container).css('display'))
      }, 2)
    })
    var likertArrayAgree = ['#edit-field-public-familiar-und','#edit-field-improve-env-edu-und',
    '#edit-field-impact-env-edu-und', '#edit-field-impact-edu-policy-und','#edit-field-impact-health-und','#edit-field-impact-env-policy-und']
    $.each(likertArrayAgree, function(intIndex, objValue){
      $(objValue).prepend('<div class="likertScale">'+
        '<span class="likertStart">Strongly Disagree</span><span class="likertEnd">Strongly Agree</span></div>')
    })
    var likertArrayExtent = ['#edit-field-develop-proposal-und', '#edit-field-implementing-grant-und',
    '#edit-field-evaluating-grant-und','#edit-field-teacher-school-district-und','#edit-field-teacher-state-standards-und',
    '#edit-field-teacher-national-standards-und', '#edit-field-teacher-regional-prioritie-und',
    '#edit-field-standards-school-district-und','#edit-field-standards-state-und','#edit-field-standards-national-und',
    '#edit-field-standards-regional-und']
    $.each(likertArrayExtent, function(intIndex, objValue){
      if(intIndex < 3){
        $(objValue).prepend('<div class="likertScaleSmall noMargin">'+
        '<span class="likertStart">Not at all</span><span class="likertEnd">To a great extent</span></div>')
      } else {
        $(objValue).prepend('<div class="likertScaleSmall">'+
          '<span class="likertStart">Not at all</span><span class="likertEnd">To a great extent</span></div>')
        
      }
    })
    var likertArrayLikely = ['#edit-field-one-on-one-und','#edit-field-network-my-region-und',
    '#edit-field-network-other-region-und', '#edit-field-virtual-interaction-und',
    '#edit-field-subject-matter-experts-und','#edit-field-noaa-datasets-und','#edit-field-noaa-lessonplans-und',
    '#edit-field-access-research-und', '#edit-field-best-practices-und', '#edit-field-evaluation-assistance-und',
    '#edit-field-grant-management-assistanc-und', '#edit-field-grant-budgeting-assistance-und','#edit-field-learn-watershed-und',
    '#edit-field-learn-environmental-issues-und', '#edit-field-learn-local-policy-und', '#edit-field-learn-national-policy-und',
    '#edit-field-opportunities-change-und', '#edit-field-opportunities-ocean-und'];
    $.each(likertArrayLikely, function(intIndex, objValue){
      $(objValue).prepend('<div class="likertScale">'+
        '<span class="likertStart">Extremely unlikely</span><span class="likertEnd">Extremely likely</span></div>')
    })
    
  
})(jQuery);
</script>