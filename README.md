NOAA-B-WET
==========

Drupal code for the NOAA B-WET project

All features, modules, and custom code go here.

Surveys
-------

All the surveys are custom content types. The site contains two surveys:
* Grantee survey
* Teacher survey
	
	grantee survey is a custom content type
	results view is controlled by a custom template:	
		views-view-table--grantee-survey--page-1.tpl.php

		how to add a field to the results view:
			add the field in the Views UI
			add a class to indicate what type of field it is: (these classes will route to the proper function call)
			Style Settings -> Customize field HTML -> Create a CSS class
																						 -> uncheck Add default classes
				number - likert scale question
					five - the range of the scale 1-5
					seven - the range of the scale 1-7
				boolean - yes/no questions
				text - simple text fields
				structured - fields that have predefined text choices (i.e. checkboxes, radio buttons)

				groups are added as the second class
					number groupStudent

	formatting of long question titles:
		create a span with in the content type field help text with the complete text and include a class of "longText":
			<span class="longText">Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external grant writer)</span>
		for fieldsets/groups add the complete title to the Description field and add longText to the Extra CSS Classes field.
		These "longText" classes are found by this jquery statement and replace the shorter label text:
			  $.each($('label.control-label').siblings('.controls'), function(){
			    if($('.help-block>.longText', $(this)).length) {
			      var helpText  = $('.help-block>.longText', $(this))
			      $(this).siblings('label').text($(helpText).text())
			      $(helpText).hide();
				    }
			  });

Options for teacher surveys:
	1. Some combination of organic groups
	2. Custom urls for surveys based on grantees award number (i.e. /awardnumber/teachersurvey)

!!!! Important
I've removed some code from a file in the jquery update module
/NOAA-B-WET/drupal/sites/all/modules/jquery_update/replace/misc/1.7/states.js 
line 294