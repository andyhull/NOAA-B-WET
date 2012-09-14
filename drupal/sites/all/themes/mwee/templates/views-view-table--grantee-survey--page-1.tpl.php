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
$js_array = json_encode($rows);
$header_array = json_encode($header);
echo "<script>var allData = ". $js_array . "; var dataLabels = ". $header_array.";</script>";
?>
<div id="mainResults"></div>
<script>
// We define a function that takes one parameter named $.
(function ($) { 
  
  var resultsArray = new Object()
  var fields = Object.keys(allData[0])
  for(field in fields){
    if(fields[field]!=='title'){
      if(!resultsArray[fields[field]]){
        resultsArray[fields[field]] = new Object()
      }
      for(data in allData){
        var newData = allData[data][fields[field]]
        if(!resultsArray[fields[field]][newData]){
          resultsArray[fields[field]][newData] = 1
        } else {
          resultsArray[fields[field]][newData] = parseFloat(resultsArray[fields[field]][newData]+1)
        }
      }
    }
  }
  console.log(resultsArray)
  for(result in resultsArray) {
    var sum = 0;
    var unanswered = 0;
    var question = dataLabels[result]
    //get the total of answered and unanswered questions
    $.each(resultsArray[result],function(i){
      var answer = parseFloat(this)
      if(i == ''){
        unanswered = parseFloat(this)
      } else {
        sum+=parseFloat(answer)
      }
    });
    $('#mainResults').append('<div id="'+result+'"><div class="questionTitle">'+question+'</div><div class="bar"></div><div class="barLabel"><span class="likertStart">1 - Not at all</span><span class="likertEnd">To a great extent - 7</div><div id="'+result+'More" class="btn">See more..</div></div>')
    for(data in resultsArray[result]){
      // console.log(resultsArray[result][data])
      if([data] == '') {
      $('#'+result).append('<div class="'+result+'More">Unanswered:<br/>Number: '+resultsArray[result][data]+'</div>')  
      } else {
        var percent = parseFloat((resultsArray[result][data]/sum )* 100)
        $('#'+result).append('<div class="'+result+'More">Answer '+data+':<br/>Number: '+resultsArray[result][data]+' Percent of total: '+percent+'</div>')
        $('.bar', '#'+result).append('<span class="color'+data+' '+result+'bar'+data+'" style="width:'+percent+'%;" rel="tooltip" data-placement="top" data-original-title="'+data+'">&nbsp;<div class="more">Value: '+data+' Number: '+resultsArray[result][data]+' ('+Math.round(percent)+'% of total)</div></span>')
      }
      $('.'+result+'More').hide()
      $('.more', '.'+result+'bar'+data).hide()
      $('.'+result+'bar'+data).mouseover(function() {
        $('.more', this).show();
      })
      $('.'+result+'bar'+data).mouseout(function() {
        $('.more', this).hide();
      })
    }
    $('#'+result+'More').click(function(){
      $('.'+result+'More').toggle()
    })
  }
  // $("[rel=tooltip]").tooltip();
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));

</script>