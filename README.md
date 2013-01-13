NOAA-B-WET
==========

Drupal code for the NOAA B-WET project

All features, modules, and custom code go here.

Overview
--------

This is all the drupal code in use on the NOAA B-WET project survey site <a herf="http://mwee.snre.umich.edu/">http://mwee.snre.umich.edu/</a>
__Structure Notes:__
The main Drupal instance is built on Drupal 7. There are a variety of modules in use on the site (see: <a href="http://mwee.snre.umich.edu/admin/modules">http://mwee.snre.umich.edu/admin/modules</a> for a complete list). 

There is also a custom B-WET module that implements several custom php functions (see: /sites/all/modules/custom/b_wet_general)

Surveys
-------

All the surveys are custom content types. The site contains two surveys:
* Grantee survey
* Teacher survey
	
We use the multistep module to break the surveys up into multiple pages and the fieldgroup module is used to group questions together within a page. Finally, the conditional fields module is used to control fields that are visible/hidden depending on a field value. 

Results
-------
The results pages are custom views. We use a table view that is broken up into multiple pages (see: <a href="http://mwee.snre.umich.edu/admin/structure/views/view/grantee_survey/edit/page_3">example view</a>). We use a custom views template to render our results output (views-view-table--grantee-survey--page.tpl.php).

		how to add a field to the results view:
			add the field in the Views UI
			add a class to indicate what type of field it is: (these classes will route to the proper function call)
			Style Settings -> Customize field HTML -> Create a CSS class
																						 -> uncheck Add default classes
				number - likert scale question
				text - simple text fields
				structured - fields that have predefined text choices (i.e. checkboxes, radio buttons)

				groups are added as the second class
					number groupStudent

	Formatting of long fieldset titles:
		Create a span with in the content type field help text with the complete text:
			<span class="longText">Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external grant writer)</span>
		Add the span to the Description field and add longText to the Extra CSS Classes field.