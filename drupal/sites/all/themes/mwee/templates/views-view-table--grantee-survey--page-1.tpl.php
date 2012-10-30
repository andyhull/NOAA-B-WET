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
// dsm($rows);
$allResults = new stdClass();
//loop through rows
foreach ($rows as $key =>$field){
  //get the question field names
    // print_r($field);
  foreach($field as $question => $questionKey) {
    // print $questionKey."<br/>";
    if($question !=='title') {
      if(!property_exists($allResults, $question)){
        $allResults->$question = new stdClass();
        $resultArray = $allResults->$question;
        $allResults->$question->type = $field_classes[$question][$key];
        $fieldTest = field_info_field($question);
        // dsm($fieldTest);
        // $fieldStuff = field_get_items('node', 'grantee_survey', $question);
        // dsm($fieldStuff);
        // print_r(field_info_extra_fields('node', $question, 'display'));
        // print "questionKey = ".$questionKey;
        if (isset($fieldTest['settings']['allowed_values'])) {
          // print_r($fieldTest['settings']['allowed_values']);
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
          // print "questionKey = ".$questionKey;
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
        // $valueKey = (string) $question.$questionKey;
        $allResults->$question->$valueKey->count += 1;
        // $allResults->$question->$valueKey->label = $questionKey;
        // $allResults->$question->$valueKey->labelKey = $questionKey;
      } else {
        if($questionKey == '') {
          $valueKey = (string) $question.'unanswered';
          $label = 'unanswered';
        } else {
          $valueKey = (string) $question.$questionKey;
          $label = $questionKey;
        }
        $allResults->$question->$valueKey->count += 1;
        $allResults->$question->$valueKey->label = $label;
        $allResults->$question->$valueKey->labelKey = $questionKey;
      }
    }
    // print "questionKey = ".$questionKey;
  }
}

function cmp($a, $b)
{
    return strcmp($a, $b);
}

$header_array = json_encode($header);
$json_array = json_encode($allResults);
echo "<script>var dataLabels = ". $header_array.";var resultData = ". $json_array ."; //console.log(resultData);</script>";
?>
<div id="mainResults"></div>
<script>
// We define a function that takes one parameter named $.
(function ($) { 
  for(result in resultData) {
    //result = field_develop_proposal(Object)
    var sum = 0;
    var unanswered = 0;
    var cleanLabel;
    var question = dataLabels[result];
    var responseLabel;
    var key;
    //get the formatting from our css classes (aka Object->type)
    var format = Array();
    format = resultData[result]['type'].split(" ");
    //get the total of answered and unanswered questions
    $.each(resultData[result],function(i){
      if(i !== 'type'){
        if(resultData[result][i]['label'] == 'unanswered'){
          unanswered = parseFloat(resultData[result][i]['count']);
          // console.log("unanswered main = "+unanswered);
        } else {
          var answer = parseFloat(resultData[result][i]['count']);
          sum+=parseFloat(answer)
          // console.log("sum = "+sum);
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
      if(!$('#'+result+'More').length) {
      //add the formatted label and more button
      $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"><span class="likertStart"></span><span class="likertEnd"></div><div id="'+result+'More" class="btn">See details</div></div>')  
      }
      var percent1 = parseFloat((unanswered/(sum + unanswered))* 100) 
      // console.log("unanswered = "+unanswered);
      $('.bar', '#'+result).append('<span class="color1 '+result+'bar'+unanswered+'" style="width:'+percent1+'%;">&nbsp;<div class="more">Unanswered: '+unanswered+' ('+Math.round(percent1)+'% of total)</div></span>') 
      var percent = parseFloat((sum/(sum + unanswered))* 100)

      $('.bar', '#'+result).append('<span class="color5 '+result+'bar'+sum+'" style="width:'+percent+'%;">&nbsp;<div class="more">Answered: '+sum+' ('+Math.round(percent)+'% of total)</div></span>')
      //controls the hover labels
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
      if(data != 'type') {
        // console.log(format[0])
        switch (format[0]) {
          case 'number':
          if(resultData[result][data]['label'] == 'unanswered') {
            responseLabel = '';
            key = '';
          } else {
            responseLabel = resultData[result][data]['label'];
            key = resultData[result][data]['labelKey'];
          }
          // console.log("responseLabel = "+responseLabel)
          // console.log("sum = "+sum)
          // console.log("results = "+resultData[result][data]['count'])
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"></span><span id="'+result+'More" class="btn details">See details</span></div>')  
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
              $('#' + result).append('<div id="'+result+'More" class="btn">See details</div>')  
            }
            createText(resultData[result][data]['count'], result, data, sum)
            break; 
          case 'structured':
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div id="'+result+'More" class="btn">See details</div>')  
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
    // var re = new RegExp(field,"g");
    var dataKey = field;
    data  =  data.replace("(", '')
    data  =  data.replace(")", '')                    
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
        cleanData =cleanData.replace(/[\$\,\-\%\(\) ]/g, '')
        $('.bar', '#'+result).append('<span class="color'+fieldKey+' '+result+'bar'+cleanData+'" style="width:'+percent+'%;" rel="tooltip" data-placement="top" data-original-title="'+data+'">&nbsp;<div class="more">Value: '+data+' <br/>Count: '+responses+' ('+Math.round(percent)+'% of total)</div></span>')
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
    var re = new RegExp(field,"g");
    var cleanData = data.replace(re, '')
    if(cleanData == '') {
      $('#'+result).append('<div class="'+result+'More">Unanswered Count: '+resultData+'</div>') 
    } else {
      var percent = parseFloat((resultData/sum )* 100)
      $('#'+result).append('<div class="'+result+'More">Value: '+cleanData+' Count: '+resultData+' ('+Math.round(percent)+'% of total)</div>') 
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
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));

</script>