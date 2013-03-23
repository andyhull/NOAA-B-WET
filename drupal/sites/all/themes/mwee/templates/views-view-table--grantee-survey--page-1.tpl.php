<?php
/**
 * @file views-view-table.tpl.php
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<div id="navbarExample" class="subnav subnav-fixed">
  <ul class="nav nav-pills">
    <li><a href="#overview">Overview</a></li>
    <li><a href="#students">Students</a></li>
    <li><a href="#teachers">Teachers</a></li>
    <li><a href="#evaluation">Evaluation</a></li>
    <li><a href="#impact">Impact</a></li>
  </ul>
  </div>
<?php
$allResults = new stdClass();
//loop through rows
foreach ($rows as $key =>$field){
  //get the question field names
  foreach($field as $question => $questionKey) {
    if($question !=='title') {
      if(!property_exists($allResults, $question)){
        $allResults->$question = new stdClass();
        $resultArray = $allResults->$question;
        $allResults->$question->type = $field_classes[$question][$key];
        $fieldTest = field_info_field($question);
        if (isset($fieldTest['settings']['allowed_values'])) {
          $labelEnd = end($fieldTest['settings']['allowed_values']);
          $labelStart = reset($fieldTest['settings']['allowed_values']);
          foreach($fieldTest['settings']['allowed_values'] as $labelKey => $labelValue) {
            $newKey = (string) $question.$labelKey;
            //add in the values to the question object
            if(!property_exists($resultArray, $newKey)){
              $resultArray->$newKey->count = 0;
              $resultArray->$newKey->label = $labelValue;
              $resultArray->$newKey->labelKey = $labelKey;
              $resultArray->$newKey->labelEnd = $labelEnd;
              $resultArray->$newKey->labelStart = $labelStart;
            }
          }
        } else {
          $newKey = (string) $question.'unanswered';
          //add in the values to the question object
          if(!property_exists($resultArray, $newKey)){
            $resultArray->$newKey->count = 0;
            $resultArray->$newKey->label = 'unanswered';
            $resultArray->$newKey->labelKey = 'unanswered';
          }
        }
      }
      $valueKey = (string) $question.$questionKey;
      if(property_exists($allResults->$question, $valueKey)){
        $allResults->$question->$valueKey->count += 1;
      } else {
        if($questionKey == '') {
          $valueKey = (string) $question.'unanswered';
          $label = 'unanswered';
        } else {
          //make a sensible key especially for long text answers
          $shortKey = substr($questionKey, 0, 8);
          $valueKey = (string) $question.$shortKey;
          $label = $questionKey;
        }
        $allResults->$question->$valueKey->count += 1;
        $allResults->$question->$valueKey->label = $label;
        $allResults->$question->$valueKey->labelKey = $questionKey;
      }
    }
  }
}
// print_r($allResults);
function cmp($a, $b)
{
    return strcmp($a, $b);
}

$output ='';
foreach ($header as $headerTitle => $headerValue) {
  $detailOutput = '';
  if($headerTitle !== 'title') {
    $responseCount =0;
    $unansweredCount = 0;
    $output .= '<div id="'.$headerTitle.'"><div class="questionTitle">'.$headerValue.'</div>';
    // print_r($allResults->$headerTitle);
    foreach ($allResults->$headerTitle as $question => $questionValue) {
      // print_r($allResults->$headerTitle->$question);
      if($question !== 'type') {
        //get the sum for answered and unanswered questions
        if($allResults->$headerTitle->$question->label == 'unanswered') {
          $unansweredCount += $allResults->$headerTitle->$question->count;
        } else {
          $responseCount += $allResults->$headerTitle->$question->count;
          if(property_exists($allResults->$headerTitle->$question, 'labelStart')){
            $labelStart = $allResults->$headerTitle->$question->labelStart;
            $labelEnd = $allResults->$headerTitle->$question->labelEnd;
          }else {
            $labelStart = '';
            $labelEnd = '';
          }
        }
      }
    }
    $output .= '<div class="bar">';
    //format the answers based on the css classes
    if(strstr($allResults->$headerTitle->type, 'text') || strstr($allResults->$headerTitle->type, 'structured')){
      $percentUnanswered = ($unansweredCount/($responseCount + $unansweredCount)*100);
      $output .= '<span class="color1 '.$headerTitle.'bar'.$unansweredCount.'" style="width:'.$percentUnanswered.'%;">&nbsp;<div class="more">Unanswered: '.$unansweredCount.' ('.$percentUnanswered.'% of total)</div></span>';
      $percentAnswered = ($responseCount/($responseCount + $unansweredCount)*100);
      $output .= '<span class="color5 '.$headerTitle.'bar'.$responseCount.'" style="width:'.$percentAnswered.'%;">&nbsp;<div class="more">Unanswered: '.$responseCount.' ('.$percentAnswered.'% of total)</div></span>';
     // $output .= '</div><div class="barLabel resultDetail"><span class="likertStart"></span><span class="likertEnd"></div><div id="'.$headerValue.'More" class="btn">See details</div></div>';
    } else {
      foreach ($allResults->$headerTitle as $question => $questionValue) {
        if($question !== 'type') {
          if($allResults->$headerTitle->$question->label !== 'unanswered') {
            if($responseCount > 0){
              $percentAnswered = ($allResults->$headerTitle->$question->count/($responseCount)*100);
            }
            $output .= '<span class="color'.$allResults->$headerTitle->$question->labelKey.' barDetail" style="width:'.$percentAnswered.'%;">&nbsp;<div class="more">Value: '.$allResults->$headerTitle->$question->label.' <br/>Count: '.$allResults->$headerTitle->$question->count.' ('.$percentAnswered.'% of total)</div></span>';
            $detailOutput .= '<div style="width:400px;"><span class="label color'.$allResults->$headerTitle->$question->labelKey.'" style="width:'.$percentAnswered.'%; display:block;">'.$allResults->$headerTitle->$question->label.'</span>&nbsp;'.$allResults->$headerTitle->$question->count.'&nbsp;Respondents ('.$percentAnswered.'%)</div>';
          } else {
            $sum = $responseCount + $unansweredCount;
            $detailOutput .= '<strong>Total responses: </strong><span class="label label-info">'.$sum.'</span>&nbsp;<strong>Total unanswered</strong>: <span class="label">'.$allResults->$headerTitle->$question->count.'</span>';
          }
        }
      }
    }
    $output .= '</div><div class="barLabel resultDetail"><span class="likertStart label label-inverse">'.$labelStart.'</span><span class="likertEnd label label-inverse">'.$labelEnd.'</span></div><span id="'.$headerTitle.'More" class="btn details">See details</span>';
    $output .= '<div class="'.$headerTitle.'More resultDetail longDetail">'.$detailOutput.'</div>';
    $output .= "</div>";
  } //end if !== title
}
$header_array = json_encode($header);
$csvData = json_encode($rows);
echo "<script>var dataLabels = ". $header_array.";</script>";
?>
<div id="mainResults"><?php print $output;?></div>
<div id="resultsToolbar"><div class="toolbarWrapper" data-spy="affix" data-offset-top="50"><h3>Tools</h3><a id="downloadBtn" href="#" class="btn btn-large">Download Data</a></div></div>
<script>
// We define a function that takes one parameter named $.
(function ($) {
  if($('.view-filters').length>0){
    $('.toolbarWrapper').append($('.view-filters'));
  }
//An object for wrapping individual questions in a group 
  var groupQuestion = new Object();
  groupQuestion = {
    'group_education_methods':{
      'id':'group_education_methods',
      'question':'What education methods were used by your organization’s staff with students during your organization\'s typical B-WET-funded MWEE',
      'fields': ['field_method_outdoor','field_method_field_work','field_method_place_based','field_method_scientific_inquiry','field_method_issue_investigation','field_method_service_learning']
    },
    'group_evaluation':{
      'id':'group_evaluation',
      'question':'What type of evaluation has been completed?',
      'fields': ['field_needs_assessment','field_process_implementation','field_outcome','field_impact']
    },
    'group_future_involvement':{
      'id':'group_future_involvement',
      'question':'In the future, how likely is it that you will make use of each of the following to help you implement your B-WET-funded programs',
      'fields': ['field_one_on_one','field_network_my_region','field_network_other_region','field_virtual_interaction','field_subject_matter_experts','field_noaa_datasets','field_noaa_lessonplans','field_best_practices','field_evaluation_assistance','field_grant_management_assistanc','field_learn_watershed','field_learn_environmental_issues','field_learn_local_policy','field_learn_national_policy','field_opportunities_change','field_opportunities_ocean']
    },
    'group_involvement':{
      'id':'group_involvement',
      'question':'To what extent were you involved in:',
      'fields': ['field_develop_proposal','field_implementing_grant','field_evaluating_grant']
    },
    'group_mwee_aligined_with':{
      'id':'group_mwee_aligined_with',
      'question':'To what extent were your organization\'s MWEEs aligned with:',
      'fields': ['field_standards_school_district','field_standards_state','field_standards_national','field_standards_regional']
    },
    'group_number_students':{
      'id':'group_number_students',
      'question':'How many students, schools, and school districts were served directly by your organization this past grant year as a result of your B-WET grant? (Please provide one number, NOT a range.)',
      'fields': ['field_students_served','field_schools_served','field_school_districts_served']
    },
    'group_percent_students':{
      'id':'group_percent_students',
      'question':'What percent of the students/youth directly served by your organization were in each of the following grade levels? (total should equal 100%)',
      'fields': ['field_per_prek_3','field_per_4_5','field_per_6_8','field_per_9_12','field_per_other','field_i_don_t_know_the_percent']
    },
    'group_provide_for_students':{
      'id':'group_provide_for_students',
      'question':'Which of the following did your B-WET-funded programs provide for students during this past grant year?',
      'fields': ['field_off_site_programs','field_schoolyard_programs','field_classroom_programs','field_after_school_programs_1','field_summer_programs','field_events']
    },
    'group_report_evidence':{
      'id':'group_report_evidence',
      'question':'Does the evaluation report include evidence of:',
      'fields': ['field_eval_increase_knowledge','field_eval_change_attitude','field_eval_increase_in_skiills','field_eval_intentions_to_act','field_eval_engage_in_actions','field_eval_improved_water_qualit','field_eval_academic_performance']
    },
    'group_resources_group':{
      'id':'group_resources_group',
      'question':'Which NOAA resources were used as part of MWEEs for students, if any?',
      'fields': ['field_information_for_noaa','field_resources_noaa_data_new','field_noaa_programs','field_resources_noaa_expert','field_noaa_labs_or_facilities','field_resources_education_progra','field_resources_facilities','field_resources_marine_sanctuary','field_resources_estuarine_resear']
    },
    'group_science':{
      'id':'group_science',
      'question':'Which of the following steps did you include: Engage students in:',
      'fields': ['field_science_questions','field_science__hypotheses','field_science_data','field_science_analyzing','field_science_conclusions','field_science_presentations']
    },
    'group_student_instruction':{
      'id':'group_student_instruction',
      'question':'Please answer the following questions with regard to the instruction your organization provides directly to students',
      'fields': ['field_title_1','field_per_esl','field_hours_taught','field_hours_taught_outdoors','field_length_participation','field_focus_on_science','field_were_any_noaa_resources_we','group_number_students','group_percent_students','group_mwee_aligined_with','group_provide_for_students','group_resources_group','group_education_methods','group_science','group_student_restore','group_students_will','group_students_able']
    },
    'group_student_restore':{
      'id':'group_student_restore',
      'question':'Did students participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds during your organization’s B-WET-funded MWEEs?',
      'fields': ['field_created_habitat','field_conserved_water','field_installed_rain_barrel','field_gave_presentations','field_reduced_litter','field_participated_event','field_clean_up','field_restoration_activity','field_told_others','field_monitored_water_quality']
    },
    'group_students_able':{
      'id':'group_students_able',
      'question':'It is a goal of my organization’s B-WET-funded MWEEs that students will be able to:',
      'fields': ['field_define_watershed','field_identify_local_watershed','field_identify_watershed_connect','field_identify_watershed_functio','field_recognize_processes','field_identify_human_connections','field_identify_pollution','field_identify_actions']
    },
    'group_students_likely':{
      'id':'group_students_likely',
      'question':'It is a goal of my organization’s B-WET-funded MWEEs that students will be more likely to:',
      'fields': ['field_goal_create_habitat','field_goal_save_water','field_goal_install_rain_barrel','field_goal_give_presentations','field_goal_participate_event','field_goal_help_cleanup','field_goal_participate_restorati','field_goal_tell_others']
    },
    'group_students_will':{
      'id':'group_students_will',
      'question':'It is a goal of my organization’s B-WET-funded MWEEs that students will:',
      'fields': ['field_feel_connected','field_express_concern','field_confident_to_protect','field_likely_to_protect','field_conduct_investigations','field_express_interest','field_better_academically','field_better_standardized_tests','field_more_engaged','field_know_more_about_the_ocean_','field_know_more_about_climate_ch','field_be_better_able_to_make_inf']
    },
    'group_teacher_able':{
      'id':'group_teacher_able',
      'question':'It is a goal of my organization’s B-WET-funded professional development that teachers will be able to:',
      'fields': ['field_teacher_define_watershed','field_teacher_identify_local_wat','field_teacher_identify_watershed','field_teacher_id_watershed_funct','field_teacher_recognize_processe','field_teacher_identify_human_con','field_teacher_identify_pollution','field_teacher_identify_actions']
    },
    'group_teacher_dev_align':{
      'id':'group_teacher_dev_align',
      'question':'To what extent was your organization\'s MWEE professional development content aligned with:',
      'fields': ['field_teacher_school_district','field_teacher_state_standards','field_teacher_national_standards','field_teacher_regional_prioritie']
    },
    'group_teacher_dev_character':{
      'id':'group_teacher_dev_character',
      'question':'Which characteristics describe your organization\'s typical MWEE professional development this past grant year?',
      'fields': ['field_teacher_local_connections','field_teacher_noaa_interaction','field_teacher_other_pro_interact','field_teacher_stipends','field_teacher_cont_edu_credit','field_teacher_grad_credit','field_teacher_equipment','field_teacher_provided_edu_mater','field_teacher_grant_info']
    },
    'group_teacher_dev_goal':{
      'id':'group_teacher_dev_goal',
      'question':'It is a goal of my organization’s B-WET-funded MWEE professional development that teachers will:',
      'fields': ['field_teacher_teach_watershed','field_teacher_implement_mwee','field_teacher_implement_mwee_aft','field_teacher_use_resources','field_teacher_guide_students','field_teacher_science_instructio','field_teacher_outdoor_instructio','field_teacher_local_resources','field_teacher__interdisciplinary','field_teacher__enthusiastic','field_teacher_act_to_protect']
    },
    'group_teacher_development':{
      'id':'group_teacher_development',
      'question':'Please answer the following questions with regard to the professional development your organization provides to teachers.',
      'fields': ['field_teacher_teach_science','field_teacher_hours_pro_developm','field_teacher_outdoor_activity','field_noaa_resources_teachers']
    },
    'group_teacher_edu_methods':{
      'id':'group_teacher_edu_methods',
      'question':'What education methods were used during your MWEE professional development?',
      'fields': ['field_teacher_method_outdoor','field_teacher_method_field_work','field_teacher_method_place_based','field_teacher_method_scientific_','field_teacher_method_issue_inves']
    },
    'group_teacher_per_taught':{
      'id':'group_teacher_per_taught',
      'question':'What percent of the participating teachers taught the following grades? (total should equal 100%)',
      'fields': ['field_teacher_prek_3','field_teacher_grades_4_5','field_teacher_grades_6_8','field_teacher_grades_9_12','field_teacher_other_per','field_i_don_t_know_the_percent_t']
    },
    'group_teacher_pro_development':{
      'id':'group_teacher_pro_development',
      'question':'Which of the following types of B-WET-funded MWEE professional development did you typically provide over the past grant year?',
      'fields': ['field_teacher_one_day_workshops','field_teacher_institute','field_teacher_multi_day_workshop','field_teacher_college_level_cour','field_teacher_training','field_teacher_coaching','field_teacher_online_development']
    },
    'group_teacher_resources_group':{
      'id':'group_teacher_resources_group',
      'question':'Which NOAA resources were incorporated into your organization\'s typical B-WET-funded MWEE professional development?',
      'fields': ['field_teacher_information_for_no','field_teacher_data_collected','field_teacher_esources_noaa_expe','field_teacher_edu_program','field_teacher_labs_facilities','field_teacher_resources_marine_s','field_teacher_resources_estuarin']
    },
    'group_teacher_science':{
      'id':'group_teacher_science',
      'question':'Which of the following steps did you include? Engaged teachers in',
      'fields': ['field_teacher_science_questions','field_teacher_science_hypotheses','field_teacher_science_data','field_teacher_science_analyzing','field_teacher_science_conclusion','field_teacher_science_presentati']
    },
    'group_teacher_support':{
      'id':'group_teacher_support',
      'question':'What types of support did your organization typically provide to teachers participating in MWEE professional development this past grant year?',
      'fields': ['field_teacher_conduct_fieldwork','field_teacher_habitats','field_teacher_restoration','field_teacher_co_teach','field_teacher_provide_coaching','field_teacher_demos','field_teacher_assist_tech','field_teacher_phone_email','field_teacher_comm_online']
    },
    'group_teacher_watershed':{
      'id':'group_teacher_watershed',
      'question':'Did teachers participate in any of these activities to protect and/or restore ocean, coastal and/or Great Lakes watersheds during their MWEE professional development?',
      'fields': ['field_teacher_created_habitat','field_teacher_installed_rain_bar','field_teacher_gave_presentations','field_teacher_participated_event','field_teacher_clean_up','field_teacher_restoration_activi','field_teacher_limited_chemicals','field_teacher_told_others','field_teacher_monitored_water_qu']
    },
    'group_teacher_workshops':{
      'id':'group_teacher_workshops',
      'question':'As part of your B-WET professional development workshops or institutes this past grant year, did your organization typically include the following:',
      'fields': ['field_teacher_ex_integration','field_teacher_discuss_integratio','field_teacher_discuss_standards','field_teacher_ex_standards','field_teacher_align_standards','field_teacher_implement','field_teacher_activities','field_teacher_multiple','field_teacher_present_data','field_teacher_discuss_data','field_teacher_ex_data','field_teacher_integrate_data']
    },
    'group_teachers_number_supported':{
      'id':'group_teachers_number_supported',
      'question':'For about how many teachers, schools, and school districts did your organization provide professional development or support (e.g., trained in workshops, coached at schools or in the field) this past grant year as a result of your B-WET grant?',
      'fields': ['field_teachers_served','field_teachers_k_12_served','field_teachers_school_districts_']
    }
  }

  $('.more').hide();
  $('.longDetail').hide();
  $('.barDetail').mouseover(function() {
    $('.more', this).show();
  })
  $('.barDetail').mouseout(function() {
    $('.more', this).hide();
  })
for(question in dataLabels){
  $('#'+question+'More').click(function(){
      var resultToggle = $(this).attr('id')
      $('.'+resultToggle).toggle()
    })
}
  for(result in resultData) {
    var sum = 0;
    var unanswered = 0;
    var cleanLabel;
    var question = dataLabels[result];
    var responseLabel;
    var key;
    var labelEnd;
    var labelStart;
    //get the formatting from our css classes (aka Object->type)
    var format = Array();
    format = resultData[result]['type'].split(" ");
    //get the total of answered and unanswered questions
    $.each(resultData[result],function(i){
      if(i !== 'type'){
        if(resultData[result][i]['label'] == 'unanswered'){
          unanswered = parseFloat(resultData[result][i]['count']);
        } else {
          var answer = parseFloat(resultData[result][i]['count']);
          sum+=parseFloat(answer)
        } 
      }
    });

    if(format[1]) {
      $('#mainResults').append('<div id="'+result+'" class="'+format[1]+' result"><div class="questionTitle">'+question+'</div>')
    } else {
      $('#mainResults').append('<div id="'+result+'"><div class="questionTitle">'+question+'</div>')
    }
    
    //if this is a plain text object create a scale of answered vs. unanswered    
    if(format[0] == "text") {
      // if(!$('#'+result+'More').length) {
      // //add the formatted label and more button
      // $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"><span class="likertStart"></span><span class="likertEnd"></div><div id="'+result+'More" class="btn">See details</div></div>')  
      // }
      // var percent1 = parseFloat((unanswered/(sum + unanswered))* 100) 
      // $('.bar', '#'+result).append('<span class="color1 '+result+'bar'+unanswered+'" style="width:'+percent1+'%;">&nbsp;<div class="more">Unanswered: '+unanswered+' ('+Math.round(percent1)+'% of total)</div></span>') 
      // var percent = parseFloat((sum/(sum + unanswered))* 100)

      // $('.bar', '#'+result).append('<span class="color5 '+result+'bar'+sum+'" style="width:'+percent+'%;">&nbsp;<div class="more">Answered: '+sum+' ('+Math.round(percent)+'% of total)</div></span>')
      // //controls the hover labels
      $('.'+result+'More').hide()
      $('.more', '.'+result+'bar'+sum).hide()
      $('.'+result+'bar'+sum).mouseover(function() {
        $('.more', this).show();
      })
      $('.'+result+'bar'+sum).mouseout(function() {
        $('.more', this).hide();
      })

      $('.more', '.'+result+'bar'+unanswered).hide()
      $('.'+result+'bar'+unanswered).mouseover(function() {
        $('.more', this).show();
      })
      $('.'+result+'bar'+unanswered).mouseout(function() {
        $('.more', this).hide();
      })
    
    }
    for(data in sortObject(resultData[result])){
      // this is for extracting the scale labels
      if(typeof resultData[result][data]['labelEnd']!='undefined'){
        switch (resultData[result][data]['labelEnd']) {
          case '5':
            labelEnd = "5 - To a great extent";
            labelStart = "1 - Not at all";
          break;
          case '7':
            labelEnd = "7 - Extremely likely";
            labelStart = "1 - Extremely unlikely";
          break;
          default:
            labelEnd = resultData[result][data]['labelEnd'];
            labelStart = resultData[result][data]['labelStart'];
        }
        if(resultData[result][data]['labelEnd'] == '7' && $.inArray('groupImpact', resultData[result]['type'])) {
          labelEnd = "7 - Strongly Agree";
          labelStart = "1 - Strongly Disagree";
        }
      }
      if(data !== 'type') {
        switch (format[0]) {
          case 'number':
          if(resultData[result][data]['label'] == 'unanswered') {
            responseLabel = '';
            key = '';
          } else {
            responseLabel = resultData[result][data]['label'];
            key = resultData[result][data]['labelKey'];
          }
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"><span class="likertStart label label-inverse">'+labelStart+'</span><span class="likertEnd label label-inverse">'+labelEnd+'</span><span id="'+result+'More" class="btn details">See details</span></div>'); 
            }
            createNumber(resultData[result][data]['count'], result, key, responseLabel, sum)
            break;
          case 'text':
            if(resultData[result][data]['label'] == 'unanswered') {
              responseLabel = '';
              key = '';
            } else {
              responseLabel = resultData[result][data]['label'];
              key = resultData[result][data]['labelKey'];
            }
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div class="bar"></div><span id="'+result+'More" class="btn details">See details</span>'); 
            }
            createText(resultData[result][data]['count'], result, data, sum)
            break; 
          case 'structured':
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"><span class="likertStart label">'+labelStart+'</span><span class="likertEnd label">'+labelEnd+'</span><span id="'+result+'More" class="btn details">See details</span></div>'); 
            }
            createText(resultData[result][data]['count'], result, data, sum)
            break; 
          default:
        }
      }
    }
    $('#'+result+'More').click(function(){
      var resultToggle = $(this).attr('id')
      $('.'+resultToggle).toggle()
    })
  }

//formatting functions
  // for all numbers
  function createNumber(responses, field, fieldKey, data, sum) {
    var dataKey = field;
    if(data) {
      data  =  data.replace("(", '')
      data  =  data.replace(")", '')                    
    }
    var cleanData = data;
    if(data == '') {
      $('#'+field).append('<div class="'+field+'More resultDetail"><strong>Total responses: </strong><span class="label label-info">'+sum+'</span>&nbsp;<strong>Total unanswered</strong>: <span class="label">'+responses+'</span></div>')  
      } else {
        var percent = parseFloat((responses/sum )* 100)
        var respondent = 'Respondents'
        if(responses == 1){
          respondent = 'Respondent'
        }
        $('#'+field).append('<div class="'+result+'More resultDetail"><div style="width:400px;"><span class="label color'+fieldKey+'" style="width:'+percent+'%; display:block;">'+cleanData+'</span>&nbsp;'+responses+'&nbsp;'+respondent+' ('+Math.round(percent)+'%)</div></div>')
        var labelHolder = cleanData
        if(cleanData) {
          cleanData =cleanData.replace(/[\W]/g, '');
        }
        $('.bar', '#'+result).append('<span class="color'+fieldKey+' '+result+'bar'+cleanData+'" style="width:'+percent+'%;">&nbsp;<div class="more">Value: '+data+' <br/>Count: '+responses+' ('+Math.round(percent)+'% of total)</div></span>')
      }
    $('.more').hide()
    $('.'+result+'More').hide()
    $('.more', '.'+result+'bar'+cleanData).hide()
    $('.'+result+'bar'+cleanData).mouseover(function() {
      $('.more', this).show();
    })
    $('.'+result+'bar'+cleanData).mouseout(function() {
      $('.more', this).hide();
    })
  }

  //for all strings
  function createText(resultData, field, data, sum) {
    data  =  data.replace("(", '')
    data  =  data.replace(")", '')                    
    var re = new RegExp(field,"g");
    var cleanData = data.replace(re, '')
    cleanData =cleanData.replace(/[\W]/g, '')
    var dataKey = field;
    if(cleanData == '') {
      $('#'+result).append('<div class="'+result+'More">Unanswered Count: '+resultData+'</div>') 
    } else {
      var percent = parseFloat((resultData/sum )* 100)
      $('#'+result).append('<div class="'+result+'More">Response: '+data.replace(re, '')+' Count: '+resultData+' ('+Math.round(percent)+'% of total)</div>') 
    }
    $('.more').hide()
    $('.'+result+'More').hide()
    $('.more', '.'+result+'bar'+cleanData).hide()
  }
  //groups !!!
  $('#mainResults').append('<div id="overview"><h2>About grantee respondents and their organizations</h2></div>')
  $('#mainResults').append("<div id='students'><h2>Grantees' student MWEE participants</h2></div>")
  $('#mainResults').append('<div id="teachers"><h2>About teacher professional development participants</h2></div>')
  $('#mainResults').append('<div id="evaluation"><h2>Grantees MWEE evaluation practices &amp; findings</h2></div>')
  $('#mainResults').append('<div id="impact"><h2>MWEE impact</h2></div>');
  $('#mainResults').append('<div id="survey"><h2>MWEE survey evaluation</h2></div>');

  $.each($('.groupStudent'), function(){
    $('#students').append($(this))
  })
  $.each($('.groupTeacher'), function(){
    $('#teachers').append($(this))
  })
  $.each($('.groupOverview'), function(){
    $('#overview').append($(this))
  })
  $.each($('.groupEvaluation'), function(){
    $('#evaluation').append($(this))
  })
  $.each($('.groupImpact'), function(){
    $('#impact').append($(this))
  })
  $.each($('.groupSurvey'), function(){
    $('#survey').append($(this))
  })
//group questions together
  $.each(groupQuestion,function(i){
    $.each(groupQuestion[i]['fields'], function(field){
      $('#'+groupQuestion[i]['fields'][field]).addClass(groupQuestion[i]['id'])
    });
    $('.'+groupQuestion[i]['id']).wrapAll('<div id="'+groupQuestion[i]['id']+'" class="result"></div>');
    $('#'+groupQuestion[i]['id']).prepend('<span class="questionTitle">'+groupQuestion[i]['question']+'</span>');
  });

//sorting function http://stackoverflow.com/questions/1359761/sorting-a-javascript-object
  function sortObject(o) {
    var sorted = {},
    key, a = [];

    for (key in o) {
        if (o.hasOwnProperty(key)) {
                a.push(key);
        }
    }

    a.sort();

    for (key = 0; key < a.length; key++) {
        sorted[a[key]] = o[a[key]];
    }
    return sorted;
}

$('#downloadBtn').click(function(){ 
  if(window.location.search){
    var searchParam = window.location.search;
  } else {
    var searchParam = '';
  }
  window.location = "/resultdownload"+searchParam;
})
$('body').attr({ 
  'data-spy':"scroll",
  'data-target':"#navbarExample",
  'offset':400
});

$('#navbarExample').scrollspy() 
// fix sub nav on scroll
var $win = $(window)
  , $nav = $('.subnav')
  , navTop = $('.subnav').length && $('.subnav').offset().top
  , isFixed = 0

processScroll()

$win.on('scroll', processScroll)

function processScroll() {
  var i, scrollTop = $win.scrollTop();
  if (scrollTop >= navTop && !isFixed) {
    isFixed = 1
    $nav.addClass('subnav-fixed')
    if($('.toolbar').length>0){
      $('.subnav-fixed').addClass('withToolbar')
    }
  } else if (scrollTop <= navTop && isFixed) {
    isFixed = 0
    $nav.removeClass('subnav-fixed')
  }
}

$('.subnav ul li a').click(function(){
  
    var el = $(this).attr('href');
    var elWrapped = $(el);
    
    scrollToDiv(elWrapped,150);
    
    return false;
  
  });
  
  function scrollToDiv(element,navheight){
  
    
  
    var offset = element.offset();
    var offsetTop = offset.top;
    var totalScroll = offsetTop-navheight;
    
    $('body,html').animate({
        scrollTop: totalScroll
    }, 200)
  }
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));

</script>