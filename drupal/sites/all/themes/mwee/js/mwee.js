(function($) {
	$(document).ready(function() {
	  $('#edit-delete').hide();
	  $('#edit-delete').remove();
	  $('#edit-save').hide();
	  $('#edit-preview').hide();
	  //hide the grantee id on the teacher survey form
	  $('.field-name-field-grantee-id').hide();
	  
	  if($('#edit-field-operate-program-und-0').length){
	    //helper text for the award number
	    $('.form-item-title').append('<div class="titleHelp">Your NOAA B-WET award number has 14 <span style="text-decoration:underline;">letters and numbers</span> such as NA12NMF4638049. The award number will be used <strong>ONLY</strong> to 1) identify your BWET region, not your organization, and 2) allow us to link information you provide with that of data that may be provided by your project’s teachers');
	    $('#edit-field-operate-program-und-0').change(function() {
	      if('#edit-field-operate-program-und-0:checked'){
	        $('#edit-title').attr('value', 0)
	      }
	    })
	  }
	  for(i=1;i<9;i++){
	    if($('#multistep-group_page'+i).length){
	      var barWidth = 12.5 * i;
	      $('#multistep-group_page'+i).prepend('<div class="progressContainer"><div class="progressText"><h3>Page '+i+' of 8</h3></div><div class="progress"><div class="bar bar-success" style="width:'+barWidth+'%;"></div></div></div>')
	    }
	  }
	  //helper text for the start of the survey
	  var startText = '<div class="well"><h3>NOAA B-WET Introduction</h3><p>Please answer the following questions in reference to the most recently-completed grant year of your current NOAA B-WET grant.  You will be asked about a range of practices and outcomes that represent the diversity of <em>Meaningful Watershed Educational Experiences </em> (MWEEs) offered by B-WET-funded programs, some of which may not apply directly to your project.  It is acceptable to answer “not applicable” (N/A) in those instances. </p><p>For the purposes of this questionnaire, we assume that <em>Meaningful Watershed Educational Experiences </em>(MWEEs) are investigative, project-oriented, sustained activities that include one or more outdoor experiences, consider the watershed as a system, and are an integral part of a school instructional program. MWEEs for students are projects that provide K-12 students opportunities for these activities. MWEEs for teachers provide K-12 teachers opportunities for professional development to build their confidence and capacity to implement MWEE activities with their students. MWEEs are enhanced by NOAA products, services, or personnel; support regional environmental and natural resource management priorities; and are designed to increase students\' and teachers\' understanding and stewardship of watersheds and related ocean, coastal and Great Lakes ecosystems. </p><p>We realize that not all MWEEs are designed in the same way and that your organization does not necessarily only offer one type. Because we are attempting to generalize, we often ask you to consider a “typical” MWEE offered by your organization. Please consider your most frequently offered MWEE as “typical.”  For the purposes of this survey, please respond in reference to <span class="underlineText">NOAA B-WET-funded</span> MWEEs and professional development.  </p><p>All responses will be kept anonymous, that is they will not be associated with you and your organization. THANK YOU in advance for your candor and thoughtfulness in answering the questions that follow. </p><p><em>Note: The term “organization” is used generically to mean the B-WET funds “awardee.” The awardee may be a nonprofit organization or an academic institution completing the work, or the awardee may be an institution that is serving as the leader of a partnership of organizations that are completing the work. If you are the latter type of awardee, please respond on behalf of your collective group of partners.   </em></p><p><em>Note: We apologize for redundancy in information you have previously provided to NOAA B-WET as part of your award. At this time, we are not able to link this national evaluation system database with NOAA B-WET’s other databases. </em></p><p>It will take between 30-60 minutes to complete this survey, depending on the nature of your project. <br/>Thank you. <br/>Bronwen Rice <br/>NOAA B-WET National Coordinator</p></div>'
	  $('#multistep-group_page1').prepend(startText);
	  //helper text for the end of the survey
	  $('#multistep-group_page8').append('<div class="footerHelp well"><p><h3 style="text-align:center;">Thank you for completing this questionnaire!</h3></p><p><strong>OMB Control Number: 0648-xxxx   Expires: xx/xx/20xx </strong></p><h3>Paperwork Reduction Act Statement</h3>Public reporting burden for this collection of information is estimated to average 30-60 minutes per response, including the time for reviewing instructions, searching existing data sources, gathering and maintaining the data needed, and completing and reviewing the collection of information. Send comments regarding this burden estimate or any other suggestions for reducing this burden to Bronwen Rice, NOAA Office of Education, Herbert C. Hoover Building, Room 6863, 14th and Constitution Avenue, NW Washington, DC 20230.</p><p>Responses are voluntary and collected and maintained as anonymous data.  Information will be treated in accordance with the Freedom of Information Act (5 USC 552). </p><p>Notwithstanding any other provision of the law, no person is required to respond to, nor shall any person be subject to a penalty for failure to comply with, a collection of information subject to the requirements of the Paperwork Reduction Act, unless that collection of information displays a currently valid OMB Control Number.</p></div>');

	  //helper text for the start of the survey
	  var teacherStartText = '<div class="well"><h3>Introduction</h3><p>Please answer the following questions in reference to your most recently-completed <em>Meaningful Watershed Educational Experience</em> (MWEE) professional development (PD) provided by [name of organization]. You will be asked about a range of practices and outcomes that represent the diversity of MWEE PD funded by the National Oceanic and Atmospheric Administration’s Bay Watershed Education and Training program (NOAA B-WET), some of which may not apply directly to your experience. It is acceptable to answer “not applicable” (N/A) in those instances</p><p>Your responses will be entered anonymously and will not be associated with you as an individual. THANK YOU in advance for your candor and thoughtfulness in answering the questions. Your responses will be aggregated with other teachers’ responses, and will be used by NOAA B-WET and B-WET-funded organizations to improve future professional development programs.</p>It will take about 20-30 minutes to complete this survey, depending on the nature of your professional development experience. Please complete the survey by [deadline].<br/>Thank you [name and organization of MWEE PD provider]<br/>and<br/>Bronwen Rice <br/>NOAA B-WET National Coordinator</p></div>'
	  
	  $('.node-teacher_survey-form').prepend(teacherStartText);
	  $('.node-teacher_survey-form').find('.form-item-title').append('<div class="titleHelp"><h5>To allow us to compare your past, current, and future responses, please create a unique 8-digit ID number using the 2 digits of your birth month, the 2 digits of your birth day, and the last 4 digits of your most often used phone number. For example, if you were born on March 9 and your home phone is 410.719.1234, your ID number would be 03091234.</h5></div>');

	  $('.node-teacher_survey-form').find('.field-name-field-question-improved').after('<div class="footerHelp well"><p><h3 style="text-align:center;">Thank you for completing this questionnaire!</h3></p><p><strong>OMB Control Number: 0648-xxxx   Expires: xx/xx/20xx </strong></p><h3>Paperwork Reduction Act Statement</h3>Public reporting burden for this collection of information is estimated to average 30 minutes per response, including the time for reviewing instructions, searching existing data sources, gathering and maintaining the data needed, and completing and reviewing the collection of information. Send comments regarding this burden estimate or any other suggestions for reducing this burden to Bronwen Rice, NOAA Office of Education, Herbert C. Hoover Building, Room 6863, 14th and Constitution Avenue, NW Washington, DC 20230.</p><p>Responses are voluntary and collected and maintained as anonymous data. Information will be treated in accordance with the Freedom of Information Act (5 USC 552). </p><p>Notwithstanding any other provision of the law, no person is required to respond to, nor shall any person be subject to a penalty for failure to comply with, a collection of information subject to the requirements of the Paperwork Reduction Act, unless that collection of information displays a currently valid OMB Control Number.</p></div>');

	  //here we replace the truncated cck label text with text from the help text field. 
	  //help text must contain a "longText" class to be used for replacement
	  //*****This is overridden in b_wet_general.module b_wet_general_form_alter. Leaving this for legacy fields*****
	  $.each($('label.control-label').siblings('.controls'), function(){
	    if($('.help-block>.longText', $(this)).length) {
	      var helpText  = $('.help-block>.longText', $(this))
	      $(this).siblings('label').html($(helpText).html())
	      $(helpText).hide();
	    }
	  });
	  //same as above for fieldset text
	  $.each($('fieldset.longText'), function() {
	    var legendText = $('.fieldset-legend', $(this))
	    $(legendText).html($('.fieldset-description',$(this)).html())
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
	    '#edit-field-teacher-term-watershed-und-none', '#edit-field-identify-their-local-water-und-none',
	    '#edit-field-identify-how-watersheds-ar-und-none', '#edit-field-identify-the-functions-tha-und-none',
	    '#edit-field-recognize-that-both-natura-und-none', '#edit-field-identify-connections-betwe-und-none',
	    '#edit-field-identify-possible-point-an-und-none', '#edit-field-identify-actions-individua-und-none', 
	    '#edit-field-teacher-teach-watershed-und-none', '#edit-field-teacher-implement-mwee-und-none',
	    '#edit-field-teacher-implement-mwee-aft-und-none', '#edit-field-teacher-use-resources-und-none',
	    '#edit-field-teacher-guide-students-und-none', '#edit-field-teacher-science-instructio-und-none',
	    '#edit-field-teacher-outdoor-instructio-und-none', '#edit-field-teacher-local-resources-und-none',
	    '#edit-field-teacher-interdisciplinary-und-none', '#edit-field-teacher-enthusiastic-und-none', 
	    '#edit-field-teacher-act-to-protect-und-none', '#edit-field-public-familiar-und-none',
	    '#edit-field-improve-env-edu-und-none', '#edit-field-impact-env-edu-und-none',
	    '#edit-field-impact-edu-policy-und-none', '#edit-field-impact-env-policy-und-none',
	    '#edit-field-impact-health-und-none', '#edit-field-is-the-school-where-you-te-und-none',
	    '#edit-field-teacher-define-watershed-und-none','#edit-field-teacher-identify-local-wat-und-none',
	    '#edit-field-teacher-identify-watershed-und-none','#edit-field-teacher-id-watershed-funct-und-none',
	    '#edit-field-teacher-recognize-processe-und-none','#edit-field-teacher-identify-human-con-und-none',
	    '#edit-field-teacher-identify-pollution-und-none','#edit-field-teacher-identify-actions-und-none'];
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
	          $(container).css('display', $('.form-wrapper', container).css('display'));
	          //show the fieldsets for the ranking on the teacher survey
	          $('#node_teacher_survey_form_group_pro_development_rank').show();
	          $('#node_teacher_survey_form_group_support_implement').show();
	          $('#node_teacher_survey_form_group_practice_rank').show();
	        }, 500)
	      })
	    })
	    //hide the fieldset titles if elements inside it are hidden
	    $.each($('.field-group-fieldset'), function(){
	      var container = $(this)
	      //have to set a slight delay to capture the inline elements added by the field dependencies
	      setTimeout(function(){
	        $(container).css('display', $('.form-wrapper', container).css('display'))
	        $('#node_teacher_survey_form_group_teacher_main').hide();
	      }, 500)
	    })
	    var likertArrayAgree = ['#edit-field-public-familiar-und','#edit-field-improve-env-edu-und',
	    '#edit-field-impact-env-edu-und', '#edit-field-impact-edu-policy-und','#edit-field-impact-health-und','#edit-field-impact-env-policy-und',
	    '#edit-field-teacher-define-watershed-und','#edit-field-teacher-identify-local-wat-und',
	    '#edit-field-teacher-identify-watershed-und','#edit-field-teacher-id-watershed-funct-und',
	    '#edit-field-teacher-recognize-processe-und','#edit-field-teacher-identify-human-con-und',
	    '#edit-field-teacher-identify-pollution-und','#edit-field-teacher-identify-actions-und']
	    $.each(likertArrayAgree, function(intIndex, objValue){
	      $(objValue).prepend('<div class="likertScale padLeft">'+
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
	    setTimeout(function(){
	      $('#pageLoad').hide();
	      spinner.stop(target);
	    }, 500)

	    $("form").submit(function() {
	      $('#pageLoad').show();
	      spinner.spin(target);
	    })

	   $(".progressContainer ~ h1").hide();

	   $('#node_teacher_survey_form_group_before_after_future>.fieldset-wrapper').prepend('<div class="questionTable"><span class="tableHeader">BEFORE the MWEE professional development, how confident were you in your ability to:</span><span class="tableHeader">AFTER the MWEE professional development, how confident were you in your ability to:</span><span class="tableHeader">In the FUTURE, I intend to ...</span></div>');
	var likertArrayConfident = ['#edit-field-teach-my-students', '#edit-field-incorporate-mwees', '#edit-field-implement-mwees','#edit-field-use-noaa-resources','#edit-field-guide-students','#edit-field-research-env','#edit-field-scientific-inquiry','#edit-field-use-the-outdoors','#edit-field-act-to-protect']
	    $.each(likertArrayConfident, function(intIndex, objValue){
	      // $(objValue).prepend('<div class="likertScale">'+
	      //   '<span class="likertStart">Not at all confident</span><span class="likertEnd">Extremely confident</span></div>')

	   var after = $(objValue+'-after > .control-group');
	   $(objValue+'-after').hide();
	   $(after).children('label').hide();
	   $(objValue+'-after-und>.form-type-radio').last().addClass('questionEnd');
	   $(after).addClass('tableFormat');
	   var future = $(objValue+'-future > .control-group');
	   $(future).children('label').hide();
	   $(objValue+'-future').hide();
	   $(future).addClass('tableFormat');
	   $(objValue+'-future-und>.form-type-radio').last().addClass('questionEnd');
	   var before = $(objValue+'-before>.control-group');
	   $(before).addClass('tableFormat');
	   $(before).append(after);
	   $(before).append(future);
	   $(objValue+'-before').css('min-height', '80px');
	   $(objValue+'-before-und').css('margin', '10px 0px');
	   $(objValue+'-before-und>.form-type-radio').last().addClass('questionEnd');
	   $(objValue+'-before').append('<div class="scaleLabel"><span class="tableHeader"><div class="likertScaleExtraSmall"><span class="likertStart">Not at all confident</span><span class="likertEnd">Extremely confident</span></div></span><span class="tableHeader"><div class="likertScaleExtraSmall"><span class="likertStart">Not at all confident</span><span class="likertEnd">Extremely confident</span></div></span><span class="tableHeader"><div class="likertScaleExtraSmall"><span class="likertStart">Strongly disagree</span><span class="likertEnd">Strongly agree</span></div></span></div>')
	    })
		
		// fix sub nav on scroll
		var $win = $(window)
		  , $nav = $('.questionTable')
		  , navTop = $('.questionTable').offset().top
		  , isFixed = 0
		  , scrollStop = $('.field-name-field-what-component-s-of-the-mw').offset().top
		processScroll()
		$win.on('scroll', processScroll)

		$(':radio').click(function(){
		  if($('.questionTable').is(':visible')){
		    navTop = $('.questionTable').offset().top
		    scrollStop = $('.field-name-field-what-component-s-of-the-mw').offset().top
		  }
		})

		//survey redirects based on the first three questions
		$('#edit-field-are-you-currently-a-prek-1-und').click(function(){
			if($(':checked', $(this)).val() == 0) {
				window.location.assign("/content/thank-you");
			}
		});
		$('#edit-field-in-what-setting-do-you-tea-und').click(function(){
			if($(':checked', $(this)).val() == 2 || $(':checked', $(this)).val() == 3 || $(':checked', $(this)).val() == 4) {
				window.location.assign("/content/thank-you");
			}
		});
		$('#edit-field-did-you-recently-complete-und').click(function(){
			if($(':checked', $(this)).val() == 0 || $(':checked', $(this)).val() == 1) {
				window.location.assign("/content/thank-you");
			}
		});

	function processScroll() {
	    var i, scrollTop = $win.scrollTop();
	    if (scrollTop >= navTop && !isFixed && scrollTop <= scrollStop) {
	      isFixed = 1
	      $nav.addClass('tableHeader-fixed')
	    } else if (scrollTop <= navTop && isFixed) {
	      isFixed = 0
	      $nav.removeClass('tableHeader-fixed')
	    } else if (scrollTop>= scrollStop && isFixed) {
	      // isFixed = 0
	      $nav.removeClass('tableHeader-fixed')
	    }
	}
})
})(jQuery);