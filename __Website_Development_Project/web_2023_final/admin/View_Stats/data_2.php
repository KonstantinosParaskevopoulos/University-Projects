<?php
//setting header to json
header('Content-Type: application/json');

//database
define('DB_HOST', '127.0.0.1');
define('DB_USERNAME', 'root');
define('DB_PASSWORD', 'root');
define('DB_NAME', 'web_db');


//get connection
$mysqli = new mysqli(DB_HOST, DB_USERNAME, DB_PASSWORD, DB_NAME);

if(!$mysqli){
	die("Connection failed: " . $mysqli->error);
}

//query to get data from the table
$query = "SELECT AVG(PRICE_HISTORY.PRICE_RECORD_PRICE) AS SUM, PRICE_HISTORY.PRODUCT_NAME, PRODUCT.PRODUCT_ID FROM PRICE_HISTORY
INNER JOIN PRODUCT ON PRICE_HISTORY.PRODUCT_NAME = PRODUCT.PRODUCT_NAME
INNER JOIN SUBCATEGORIES ON PRODUCT.PRODUCT_SUBCATEGORY = SUBCATEGORIES.SUBCATEGORY_UUID
GROUP BY price_history.PRODUCT_NAME;";

//execute query
$result = $mysqli->query($query);

//loop through the returned data
$data = array();
foreach ($result as $row) {
	$data[] = $row;
}

//free memory associated with result
$result->close();

//close connection
$mysqli->close();

//now print the data
echo json_encode($data);