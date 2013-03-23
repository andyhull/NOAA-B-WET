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
<?php
$allResults = new stdClass();
//loop through rows
foreach ($rows as $key =>$field){
  //get the question field names
  foreach($field as $question => $questionKey) {
    // dpm($question);
    if(!property_exists($allResults, $question)){
      $allResults->$question = new stdClass();
      $resultArray = $allResults->$question;
      $allResults->$question->type = $field_classes[$question][$key];
      $fieldTest = field_info_field($question);
      // dpm($fieldTest);
      if (isset($fieldTest['settings']['allowed_values'])) {
        $labelStart = reset($fieldTest['settings']['allowed_values']);
        //remove don't know values from the scale labels
        if($labelStart == "Don't Know") {
          $labelStart = $fieldTest['settings']['allowed_values'][1];
        }
        $labelEnd = end($fieldTest['settings']['allowed_values']);
        switch ($labelEnd) {
          case 5:
            $labelEnd .= " - To a great extent";
            $labelStart .= " - Not at all";
            break;
          case 7:
            if(strstr($allResults->$question->type, 'groupImpact')){
              $labelEnd .= " - Strongly Agree";
              $labelStart .= " - Strongly Disagree";
             } elseif(strstr($allResults->$question->type, 'groupSurvey')){
              $labelStart = $labelStart;
              $labelEnd = $labelEnd;
            } elseif(strstr($allResults->$question->type, 'groupConfident')){
              $labelEnd .= " - Not at all Confident";
              $labelStart .= " - Extremely Confident";
             } elseif(strstr($labelEnd, 'informative')||strstr($labelEnd, 'Long')||strstr($labelEnd, 'Difficult')){
                $labelStart = $labelStart;
                $labelEnd = $labelEnd;
             } else {
              $labelEnd .= " - Extremely likely";
              $labelStart .= " - Extremely unlikely";
             }
              break;
          default:
             $labelStart = $labelStart;
             $labelEnd = $labelEnd;
             break;
        }
        $allResults->$question->labelEnd = $labelEnd;
        $allResults->$question->labelStart = $labelStart;
        foreach($fieldTest['settings']['allowed_values'] as $labelKey => $labelValue) {
          $newKey = (string) $question.$labelKey;
          //add in the values to the question object
          if(!property_exists($resultArray, $newKey)){
            $resultArray->$newKey->count = 0;
            $resultArray->$newKey->label = $labelValue;
            $resultArray->$newKey->labelKey = $labelKey;
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
      //some answers have multiple values. need to separate them and add to
      //the existing keys (i.e. 1,2,3 => key[1] key[2] etc.)
      $arrayCheck = explode(", ", $questionKey);
      if(count($arrayCheck)>1) {
        foreach ($arrayCheck as $key => $value) {
          $valueKey = (string) $question.$value;
          if(property_exists($allResults->$question, $valueKey)){
            $allResults->$question->$valueKey->count += 1;
          }
        }
      } else {
        $allResults->$question->$valueKey->count += 1;
        $allResults->$question->$valueKey->label = $label;
        $allResults->$question->$valueKey->labelKey = $questionKey;
      }
    }
  }
}
function cmp($a, $b)
{
    return strcmp($a, $b);
}
$output ='<div class="surveyTotal"><h5>This survey has been submitted <span class="badge badge-info"> '.count($rows).'</span> times</h5></div>';
foreach ($header as $headerTitle => $headerValue) {
  $detailOutput = '';
  $responseCount =0;
  $unansweredCount = 0;
  $dontknowCount = 0;
  $output .= '<div id="'.$headerTitle.'" class="result"><div class="questionTitle">'.$headerValue.'</div>';
  foreach ($allResults->$headerTitle as $question => $questionValue) {
    if($question !== 'type' && $question !== 'labelStart' && $question !== 'labelEnd') {
      //get the sum for answered and unanswered questions
      if($allResults->$headerTitle->$question->label == 'unanswered') {
        $unansweredCount += $allResults->$headerTitle->$question->count;
      }elseif ($allResults->$headerTitle->$question->label == "Don't Know") {
        $dontknowCount += $allResults->$headerTitle->$question->count;
      } else {
        $responseCount += $allResults->$headerTitle->$question->count;
        if(property_exists($allResults->$headerTitle, 'labelStart')){
          $labelStart = $allResults->$headerTitle->labelStart;
          $labelEnd = $allResults->$headerTitle->labelEnd;
        }else {
          $labelStart = 'Unanswered';
          $labelEnd = 'Answered';
        }
      }
    }
  }
  $output .= '<div class="bar">';
  //format the answers based on the css classes
  if(strstr($allResults->$headerTitle->type, 'text') || strstr($allResults->$headerTitle->type, 'structured')){
    $percentUnanswered = ($unansweredCount/($responseCount + $unansweredCount)*100);
    $output .= '<span class="color1 barDetail" style="width:'.$percentUnanswered.'%;">&nbsp;<div class="more">Unanswered: '.$unansweredCount.' ('.round($percentUnanswered).'% of total)</div></span>';
    $percentAnswered = ($responseCount/($responseCount + $unansweredCount)*100);
    $output .= '<span class="color5 barDetail" style="width:'.$percentAnswered.'%;">&nbsp;<div class="more">Answered: '.$responseCount.' ('.round($percentAnswered).'% of total)</div></span>';
    foreach ($allResults->$headerTitle as $question => $questionValue) {
      if($question !== 'type' && $question !== 'labelStart' && $question !== 'labelEnd') {
        if($allResults->$headerTitle->$question->label !== 'unanswered') {
          if($responseCount > 0){
            $percentAnswered = ($allResults->$headerTitle->$question->count/($responseCount)*100);
          }
          $detailOutput .= '<div class="textDetail"><span class="label" display:block;>'.$allResults->$headerTitle->$question->label.'</span></div>';
        } else {
          $sum = $responseCount;
          $detailOutput .= '<span class="label label-inverse totalLabel"><strong>Total responses: </strong><span class="label label-info">'.$sum.'</span>&nbsp;<strong>Total unanswered</strong>: <span class="label">'.$allResults->$headerTitle->$question->count.'</span></span>';
        }
      }
    }
  } else {
    foreach ($allResults->$headerTitle as $question => $questionValue) {
      if($question !== 'type' && $question !== 'labelStart' && $question !== 'labelEnd') {
        $questionLabel = $allResults->$headerTitle->$question->label;
        if($questionLabel !== 'unanswered' && $questionLabel !== "Don't Know") {
          if($responseCount > 0){
            $percentAnswered = ($allResults->$headerTitle->$question->count/($responseCount)*100);
          }
          //format the yes/no color values
          if($questionLabel == 'Yes') {
            $color = 'color5';
          } else {
            $color = 'color'.$allResults->$headerTitle->$question->labelKey;
          }
          //handle plurals 
          if($allResults->$headerTitle->$question->count == 1) {
            $respondant = 'Respondent';
          } else {
            $respondant = 'Respondents';
          }
          $output .= '<span class="'.$color.' barDetail" style="width:'.$percentAnswered.'%;">&nbsp;<div class="more">Value: '.$allResults->$headerTitle->$question->label.' <br/>Count: '.$allResults->$headerTitle->$question->count.' ('.round($percentAnswered).'% of total)</div></span>';
          if($percentAnswered == '0') {
            $defaultWidth = 1;
            $color = 'color';
          } else {
            $defaultWidth = $percentAnswered;
          }
          $detailOutput .= '<div class="detailLabel"><span class="label '.$color.'" style="width:'.$defaultWidth.'%; display:block;"><span>'.$questionLabel.'</span></span>&nbsp;'.$allResults->$headerTitle->$question->count.'&nbsp;'.$respondant.' ('.round($percentAnswered).'%)</div>';
          // calculate the number of don't know responses
        } elseif ($questionLabel == "Don't Know") {
          $sum = $dontknowCount;
          $detailOutput .= '<div>Don\'t Know: <span class="label">'.$sum.'</span></div>';
        } elseif ($questionLabel == 'unanswered') {
          $sum = $responseCount;
          $detailOutput .= '<span class="label label-inverse totalLabel"><strong>Total responses: </strong><span class="label label-info">'.$sum.'</span>&nbsp;<strong>Total unanswered</strong>: <span class="label">'.$allResults->$headerTitle->$question->count.'</span></span>';

        }
      }
    }
  }
  $output .= '</div><div class="barLabel resultDetail"><span class="likertStart label label-inverse">'.$labelStart.'</span><span class="likertEnd label label-inverse">'.$labelEnd.'</span></div><span id="'.$headerTitle.'More" class="btn details">See details</span>';
  $output .= '<div class="'.$headerTitle.'More resultDetail longDetail"><h5 class="detailHeader">Question details</h5>'.$detailOutput.'</div>';
  $output .= "</div>";
}
$header_array = json_encode($header);
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
  $('.nav-tabs').click(function(){
    $('#pageLoad').show();
    spinner.spin(target);
  })
//An object for wrapping individual questions in a group 
  var groupQuestion = new Object();
  groupQuestion = {
    'node_teacher_survey_form_group_edu_method':{
      'id':'node_teacher_survey_form_group_edu_method',
      'question':'What education methods were used during your MWEE professional development?',
      'fields': ['field_teacher_method_scientific__1','field_method_outdoor','field_method_field_work','field_method_place_based','field_method_scientific_inquiry','field_method_issue_investigation','field_method_service_learning']
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
      'fields': ['field_off_site_programs','field_schoolyard_programs','field_classroom_programs','field_after_school_program','field_summer_programs','field_events']
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
    'node_teacher_survey_form_group_protect_activities':{
      'id':'node_teacher_survey_form_group_protect_activities',
      'question':'During your MWEE professional development, did you participate in any of these activities that protect and/or restore ocean, coastal, and/or Great Lakes watersheds?',
      'fields': ['field_participated_in_a_restorat','field_limited_or_avoided_the_use','field_created_habitat','field_conserved_water','field_installed_rain_barrel','field_gave_presentations','field_reduced_litter','field_participated_event','field_clean_up','field_restoration_activity','field_told_others','field_monitored_water_quality']
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
    'node_teacher_survey_form_group_as_a_result':{
      'id':'node_teacher_survey_form_group_as_a_result',
      'question':'As a result of participating in the MWEE professional development, I am better able to:',
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
      'fields': ['field_outdoor_trip_teacher_1','field_field_work_teacher_1','field_place_based_teacher_1','field_scientific_inquiry_based_1','field_teacher_investigation_1']
    },
    'group_teacher_per_taught':{
      'id':'group_teacher_per_taught',
      'question':'What percent of the participating teachers taught the following grades? (total should equal 100%)',
      'fields': ['field_teacher_prek_3','field_teacher_grades_4_5','field_teacher_grades_6_8','field_teacher_grades_9_12','field_teacher_other_per','field_i_don_t_know_the_percent_t']
    },
    'group_teacher_pro_development':{
      'id':'group_teacher_pro_development',
      'question':'Which type(s) of MWEE professional development did you participate in or receive:',
      'fields': ['field_teacher_one_day_workshops','field_teacher_institute','field_teacher_multi_day_workshop','field_teacher_college_level_cour','field_teacher_training','field_teacher_coaching','field_teacher_online_development']
    },
    'group_teacher_resources_group':{
      'id':'group_teacher_resources_group',
      'question':'Which NOAA resources were incorporated into your organization\'s typical B-WET-funded MWEE professional development?',
      'fields': ['field_information_from_noaa_rese','field_teacher_esources_noaa_expe','field_teacher_resources_marine_s','field_teacher_resources_estuarin','field_information_from_noaa_1','field_teacher_data_collected','field_teacher_esources_noaa_expe_1','field_teacher_edu_program','field_teacher_labs_facilities','field_teacher_resources_marine_s_1','field_teacher_resources_estuarin_1']
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
    },
    'node_teacher_survey_form_group_pro_development_practices':{
      'id':'node_teacher_survey_form_group_pro_development_practices',
      'question':'Did the workshops, institutes, or classes you participated in include the following professional development practices? (a) Please indicate yes or no for each statement. (b) Then indicate which 3 practices were most valuable in helping you implement MWEEs.',
      'fields': ['field_sharing_of_information_and','field_sharing_of_information_1','field_discussion_of_how_teachers','field_discussion_teachers_1',
      'field_discussion_of_alignment_of','field_discussion_of_alignment_1','field_provision_of_examples_of_h','field_provision_of_examples_1',
      'field_engaging_you_and_other_par','field_engaging_you_and_other_1','field_participating_along_with_o','field_participating_along_1',
      'field_allowing_you_and_other_1_1','field_allowing_you_and_other_par_1','field_engaging_practices','field_engaging_practices_1',
      'field_presentation_of_how_noaa_d','field_presentation_of_how_noaa_1','field_discussion_of_how_noaa_dat','field_discussion_of_how_noaa_1',
      'field_examples_of_how_other_teac','field_examples_of_how_other_1','field_allow_you_and_other_partic','field_allow_you_and_other_1']
    },
    'node_teacher_survey_form_group_support':{
      'id':'node_teacher_survey_form_group_support',
      'question':'What types of support did you receive from your MWEE professional development provider? (a) Please indicate yes or no for each statement. (b) Then indicate which 3 practices were most valuable in helping you implement MWEEs.',
      'fields': ['field_assistance_with_conducting','field_assistance_with_conduct_1','field_assistance_with_establishi','field_assistance_with_est_1',
      'field_assistance_with_projects','field_assistance_projects_1','field_assistance_with_the_use_of','field_assistance_use_of_1',
      'field_co_teaching_in_my_classroo','field_co_teaching_in_classroom_1','field_coaching_in_my_classroom','field_coaching_in_my_classroom_1',
      'field_communicating_with_provide','field_communicating_with_1','field_communication_with_provide','field_communication_provide_1',
      'field_demonstrations_in_my_class','field_demonstrations__class_1','field_assistance_with_the_use_of_1','field_assistance_use_of_1_1']
    },
    'node_teacher_survey_form_group_practices':{
      'id':'node_teacher_survey_form_group_practices',
      'question':'Which additional practices did your MWEE professional development and/or the support you received include? (a) Please indicate yes or no for each statement. (b) Then indicate which 3 practices were most valuable in helping you implement MWEEs.',
      'fields': ['field_connections_were_made_to_l','field_connections_1','field_interactions_were_facilita','field_interactions_1',
      'field_interactions_pro','field_interactions_pro_1','field_stipend','field_stipend_1',
      'field_i_was_offered_continuing_e','field_i_was_offered_continuing_1','field_i_was_offered_graduate_cre','field_i_was_offered_graduate_1',
      'field_i_was_provided_with_equipm','field_i_was_provided_equipm_1','field__was_provided_with_instruc','field__was_provided_instruc_1',
      'field_i_was_provided_with_inform','field_i_was_provided_inform_1']
    },
    'node_teacher_survey_form_group_student_ethnicity':{
      'id':'node_teacher_survey_form_group_student_ethnicity',
      'question':'About what percent of your students are (percent should equal 100):',
      'fields': ['field_american_indian_or_alaska_','field_asian','field_black_or_african_american','field_hispanic_or_latino',
      'field_native_hawaiian_or_other_p','field_other','field_white']
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
  //group questions together
  $.each(groupQuestion,function(i){
    $.each(groupQuestion[i]['fields'], function(field){
      $('#'+groupQuestion[i]['fields'][field]).addClass(groupQuestion[i]['id'])
    });
    $('.'+groupQuestion[i]['id']).wrapAll('<div id="'+groupQuestion[i]['id']+'" class="result"></div>');
    $('#'+groupQuestion[i]['id']).prepend('<span class="questionTitle">'+groupQuestion[i]['question']+'</span>');
  });

  $('#downloadBtn').click(function(){ 
    if(window.location.search){
      var searchParam = window.location.search;
    } else {
      var searchParam = '';
    }
    window.location = "/teacherdownload"+searchParam;
  })
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));

</script>