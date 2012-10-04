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
print_r($rows);
foreach ($rows as $key =>$field){
  //get the question field names
  foreach($field as $question => $questionKey) {
    if($question !=='title') {
      // create the question object
      if(!property_exists($allResults, $question)){
          $allResults->$question = new stdClass();
          $resultArray = $allResults->$question;
          //add a type so we can distinguish different questions
          $allResults->$question->type = $field_classes[$question][$key];
        } else {
          $resultArray = $allResults->$question;
        }
      $newKey = (string) $question.$questionKey;
      // print $questionKey;
      //add in the values to the question object
      if(!property_exists($resultArray, $newKey)){
        $resultArray->$newKey = 1;
      } else {
        $resultArray->$newKey += 1;
      }
      // usort($resultArray>$newKey, "cmp");
    }
  }
}
function cmp($a, $b)
{
    return strcmp($a, $b);
}


$header_array = json_encode($header);
$json_array = json_encode($allResults);
echo "<script>var dataLabels = ". $header_array.";var resultData = ". $json_array ."; console.log(resultData);</script>";
?>
<div id="mainResults"></div>
<script>
// We define a function that takes one parameter named $.
(function ($) { 
  for(result in resultData) {
    var sum = 0;
    var unanswered = 0;
    var cleanLabel;
    var question = dataLabels[result]
    var format = Array();
    //get the total of answered and unanswered questions
    $.each(resultData[result],function(i){
      //remove the field name from the value label
      var re1 = new RegExp(result,"g");
      cleanLabel = i.replace(re1, '')
      if(cleanLabel !=='type'){
        var answer = parseFloat(this)
        if(cleanLabel == ''){
          unanswered = parseFloat(this)
        } else {
          sum+=parseFloat(answer)
        }
      } else {
        format = resultData[result]['type'].split(" ");
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
      $('.bar', '#'+result).append('<span class="color1 '+result+'bar'+unanswered+'" style="width:'+percent1+'%;">&nbsp;;<div class="more">Unanswered: '+unanswered+' ('+Math.round(percent1)+'% of total)</div></span>') 
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
    console.log(sortObject(resultData[result]))
    for(data in sortObject(resultData[result])){
      console.log(data)
      if(data != 'type') {
        switch (format[0]) {
          case 'number':
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"><span class="likertStart label">1 - Not at all</span><span class="likertEnd label">To a great extent - 5</span><span id="'+result+'More" class="btn details">See details</span></div>')  
            }
            createNumber(resultData[result][data], result, data, sum)
            break;
          case 'text':
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div id="'+result+'More" class="btn">See details</div>')  
            }
            createText(resultData[result][data], result, data, sum)
            break; 
          case 'structured':
            if(!$('#'+result+'More').length) {
              //add the formatted label and more button
              $('#' + result).append('<div id="'+result+'More" class="btn">See details</div>')  
            }
            createText(resultData[result][data], result, data, sum)
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
  function createNumber(resultData, field, data, sum) {
    var re = new RegExp(field,"g");
    var cleanData = data.replace(re, '')
    if(cleanData == '') {
    $('#'+field).append('<div class="'+field+'More resultDetail"><strong>Total responses: </strong><span class="label label-info">'+sum+'</span>&nbsp;<strong>Total unanswered</strong>: <span class="label">'+resultData+'</span></div>')  
    } else {
      var percent = parseFloat((resultData/sum )* 100)
      $('#'+result).append('<div class="'+result+'More resultDetail"><span class="label">'+cleanData+'</span>&nbsp;'+resultData+' Respondent ('+Math.round(percent)+'%)</div>')
      if(parseFloat(cleanData *1) > 0){
        $('.bar', '#'+result).append('<span class="color'+cleanData+' '+result+'bar'+cleanData+'" style="width:'+percent+'%;" rel="tooltip" data-placement="top" data-original-title="'+data+'">&nbsp;<div class="more">Value: '+cleanData+' Count: '+resultData+' ('+Math.round(percent)+'% of total)</div></span>')
      } else {
        var labelHolder = cleanData
        cleanData =cleanData.replace(/[\$\,\-\%\ ]/g, '')
        $('.bar', '#'+result).append('<span class="color1 '+result+'bar'+cleanData+'" style="width:'+percent+'%;" rel="tooltip" data-placement="top" data-original-title="'+data+'">&nbsp;<div class="more">Value: '+labelHolder+' Count: '+resultData+' ('+Math.round(percent)+'% of total)</div></span>')
      }
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
      $('#'+field).append('<div class="'+field+'More">Unanswered:<br/>Count: '+resultData+'</div>') 
    } else {
      var percent = parseFloat((resultData/sum )* 100)
      $('.bar', '#'+result).append('<span class="color'+cleanData+' '+result+'bar'+cleanData+'" style="width:'+percent+'%;" rel="tooltip" data-placement="top" data-original-title="'+data+'">&nbsp;<div class="more">Value: '+cleanData+' Count: '+resultData+' ('+Math.round(percent)+'% of total)</div></span>')
    }
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