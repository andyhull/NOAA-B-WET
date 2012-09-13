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
echo "<script>var allData = ". $js_array . "; var dataLabels = ". $header_array.";console.log(allData);</script>";
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
    for(data in resultsArray[result]){
      console.log(resultsArray[result][data])
      $('#mainResults').append('<div>'+[data]+':'+resultsArray[result][data]+"</div>")
    }
  }
  for(data in allData){
    // console.log(resultsArray)
  }
// Here we immediately call the function with jQuery as the parameter.
}(jQuery));

</script>