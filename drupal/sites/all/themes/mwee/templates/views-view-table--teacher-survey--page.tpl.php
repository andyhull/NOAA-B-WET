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

function cmp($a, $b)
{
    return strcmp($a, $b);
}

$header_array = json_encode($header);
$json_array = json_encode($allResults);
$csvData = json_encode($rows);
echo "<script>var dataLabels = ". $header_array.";var resultData = ". $json_array ."; //console.log(resultData);</script>";
?>
<div id="mainResults"></div>
<div id="resultsToolbar"><div class="toolbarWrapper" data-spy="affix" data-offset-top="50"><h3>Tools</h3><a id="downloadBtn" href="#" class="btn btn-large">Download Data</a></div></div>
<script>
// We define a function that takes one parameter named $.
(function ($) {
  if($('.view-filters').length>0){
    $('.toolbarWrapper').append($('.view-filters'));
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
      if(!$('#'+result+'More').length) {
      //add the formatted label and more button
      $('#' + result).append('<div class="bar"></div><div class="barLabel resultDetail"><span class="likertStart"></span><span class="likertEnd"></div><div id="'+result+'More" class="btn">See details</div></div>')  
      }
      var percent1 = parseFloat((unanswered/(sum + unanswered))* 100) 
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