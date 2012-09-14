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
      //add in the values to the question object
      if(!property_exists($resultArray, $newKey)){
        $resultArray->$newKey = 1;
      } else {
        $resultArray->$newKey += 1;
      }
    }
  }
}

// $js_array = json_encode($rows);
$header_array = json_encode($header);
$json_array = json_encode($allResults);
echo "<script>var dataLabels = ". $header_array.";var resultData = ". $json_array ."; console.log(resultData);</script>";
?>
<div id="mainResults"></div>
<script>
// We define a function that takes one parameter named $.
(function ($) { 
  
  // var resultsArray = new Object()
  // var fields = Object.keys(allData[0])
  // for(field in fields){
  //   if(fields[field]!=='title'){
  //     if(!resultsArray[fields[field]]){
  //       resultsArray[fields[field]] = new Object()
  //     }
  //     for(data in allData){
  //       var newData = allData[data][fields[field]]
  //       if(!resultsArray[fields[field]][newData]){
  //         resultsArray[fields[field]][newData] = 1
  //       } else {
  //         resultsArray[fields[field]][newData] = parseFloat(resultsArray[fields[field]][newData]+1)
  //       }
  //     }
  //   }
  // }
  for(result in resultData) {
    var sum = 0;
    var unanswered = 0;
    var question = dataLabels[result]
    //get the total of answered and unanswered questions
    $.each(resultData[result],function(i){
      var re1 = new RegExp(result,"g");
      var cleanLabel = i.replace(re1, '')
      if(cleanLabel !=='type'){
        var answer = parseFloat(this)
        if(cleanLabel == ''){
          unanswered = parseFloat(this)
        } else {
          sum+=parseFloat(answer)
        }
      }
    });

    $('#mainResults').append('<div id="'+result+'"><div class="questionTitle">'+question+'</div><div class="bar"></div><div class="barLabel"><span class="likertStart">1 - Not at all</span><span class="likertEnd">To a great extent - 5</div><div id="'+result+'More" class="btn">See Details</div></div>')
    // console.log(Object.keys(resultData[result]))
    for(data in resultData[result]){
      if(resultData[result][data] == "number") {
        // console.log("number")
      } else {
        var re = new RegExp(result,"g");
        var cleanData = data.replace(re, '')
        if(cleanData == '') {
        $('#'+result).append('<div class="'+result+'More">Unanswered:<br/>Count: '+resultData[result][data]+'</div>')  
        } else {
          var percent = parseFloat((resultData[result][data]/sum )* 100)
          $('#'+result).append('<div class="'+result+'More">Answer '+cleanData+':<br/>Count: '+resultData[result][data]+' Percent of total: '+Math.round(percent)+'%</div>')
          $('.bar', '#'+result).append('<span class="color'+cleanData+' '+result+'bar'+cleanData+'" style="width:'+percent+'%;" rel="tooltip" data-placement="top" data-original-title="'+data+'">&nbsp;<div class="more">Value: '+cleanData+' Count: '+resultData[result][data]+' ('+Math.round(percent)+'% of total)</div></span>')
        }
        $('.'+result+'More').hide()
        $('.more', '.'+result+'bar'+cleanData).hide()
        $('.'+result+'bar'+cleanData).mouseover(function() {
          $('.more', this).show();
        })
        $('.'+result+'bar'+cleanData).mouseout(function() {
          $('.more', this).hide();
        })
      }
    }
    $('#'+result+'More').click(function(){
      var resultToggle = $(this).attr('id')
      $('.'+resultToggle).toggle()
    })
  }
  // $("[rel=tooltip]").tooltip();
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));

</script>