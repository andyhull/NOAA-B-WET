NOAA-B-WET
==========

Drupal code for the NOAA B-WET project

Overview
--------

The NOAA B-WET site is built on Drupal 7, PHP 5.3.7, MySQL 5.5.9 and Apache 2.0.64. This repository contains all the drupal code in use on the NOAA B-WET project survey site <a herf="http://mwee.snre.umich.edu/">http://mwee.snre.umich.edu/</a>

Installation
------------
Prerequisites: PHP 5, MySQL 5, see <a href="http://drupal.org/requirements">http://drupal.org/requirements</a> for details.
<ol>
<li>Download the latest version of <a href="http://drupal.org/start">Drupal 7</a></li>
<li>Install Drupal (for help see: <a href="http://drupal.org/documentation/install">http://drupal.org/documentation/install</a>)</li>
<li>Once your Drupal installation is setup, copy the code from /drupal/sites/all/ in this repository to your Drupal *sites/all* directory. This will add all the modules and themes in use on the site.</li>
<li>Go to your admin/modules page and enable the newly added modules</li>
<li>Install custom content types and views by reverting the custom b_wet_general module: admin/structure/features/b_wet_general (see: <a href="http://drupal.org/node/580026">http://drupal.org/node/580026</a> for an overview of using Features)</li>
</ol>

### Structure Notes:
The main Drupal instance is built on Drupal 7. There are a variety of modules in use on the site (see: <a href="http://mwee.snre.umich.edu/admin/modules">http://mwee.snre.umich.edu/admin/modules</a> for a complete list). 

There is also a custom B-WET module that implements several custom php functions (see: /sites/all/modules/custom/b_wet_general). These include functions to:
* Alter the length of a title field
* Placeholder text for the login text boxes
* Create a CSV function (this is called by our results views)
* Create the dashboard pages for grantees and managers
* Custom access permission for manager dashboard access

Theming is based on the twitter_bootstrap theme. There is a custom __mwee__ theme that is a sub-theme of twitter bootstrap. All css is generated by SASS and rendered to style.css. Custom javascript is located in /mwee/js/mwee.js.

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
			Style Settings -> Customize field HTML -> Create a CSS class-> uncheck Add default classes
				number - likert scale question
				text - simple text fields
				structured - fields that have predefined text choices (i.e. checkboxes, radio buttons)

				groups are added as the second class
					number groupStudent

	Formatting of long fieldset titles:
		Create a span with in the content type field help text with the complete text:
			<span class="longText">Developing your organization's most recent funded B-WET grant proposal (on your own or through collaborating with an external grant writer)</span>
		Add the span to the Description field and add longText to the Extra CSS Classes field.

Other
-------
The login page is the default home page for anonymous users. Once users login they are redirected to a custom dashboard page, which is determined by their user role. Dashboards are controlled by the custom b_wet module and the respective include files.



