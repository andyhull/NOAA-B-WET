<?php
// print $data->field_field_develop_proposal[0][rendered]['#markup'];
$allResults = new stdClass();
foreach ($row as $field =>$key){
	$fieldTest = (string) "field_".$field;
	$fieldName = "field_".$field."[0][rendered]['#markup']";
	// print $fieldName;
	if(property_exists($data, $fieldTest)){
		//if the question array does not exist then create it
		if(!property_exists($allResults, $field)){
			$allResults->$field = array();
			$resultArray = $allResults->$field;
		} else {
			$resultArray = $allResults->$field;
		}
		print_r($resultArray);
		if (array_key_exists('0', $data->$fieldTest)) {
	    $newData = $data->$fieldTest;
	    $newValue = (string) $newData[0]['rendered']['#markup'];
	    if(!array_key_exists($newValue, $resultArray)){
	    	$resultArray[$newValue]= 1;
			}
			print_r($resultArray);
			// print $newData[0]['rendered']['#markup'];
		}
	}
	//$fieldValue = $data["'".$fieldName."'"][0][rendered]['#markup'];
	// if($field !='title'){
	// 	// print($field);
	// }
}

print_r($allResults);
// print_r($data);
?>