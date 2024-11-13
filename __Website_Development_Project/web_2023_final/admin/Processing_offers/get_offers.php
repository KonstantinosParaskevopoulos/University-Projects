<!DOCTYPE html>
<html>
<head>
</head>
<body>
<style>
table, td, th {
  border: 0px;
  padding: 5px;
}

th { background-color: #268; color: white; }

tr:hover {background-color: grey;}
</style>
<?php
header("Content-Type: text/html;charset=UTF-8");
$moved_var = 'Hello World';
$q = $_GET['q'];
//echo "q = " .$q;
//$q1 = 'Ποτά - Αναψυκτικά';
$con = mysqli_connect('localhost','root','root');
if (!$con) {
  die('Could not connect: ' . mysqli_error($con));
}
if ($q!="all"){
mysqli_select_db($con,"web_db");
$sql="SELECT STORE_GEOJSON.NAME, DISCOUNT.DISCOUNT_ID, DISCOUNT.DISCOUNT_AVAILIBILITY, DISCOUNT.DISCOUNT_DATE, DISCOUNT.DISCOUNT_PRODUCT_NAME, DISCOUNT.NEW_PRICE, DISCOUNT.DISCOUNT_LIKES, DISCOUNT.DISCOUNT_DISLIKES FROM STORE_GEOJSON
INNER JOIN STORE ON STORE_GEOJSON.ID = STORE.STORE_GEOJSON_ID
INNER JOIN DISCOUNT ON STORE.ID = DISCOUNT.DISCOUNT_STORE_ID
INNER JOIN PRODUCT ON DISCOUNT_PRODUCT_NAME = PRODUCT.PRODUCT_NAME
INNER JOIN CATEGORIES ON PRODUCT.PRODUCT_CATEGORY = CATEGORIES.CATEGORY_ID
WHERE CATEGORIES.CATEGORY_NAME = '".$q."'";
$result = mysqli_query($con,$sql);
}
else{
  mysqli_select_db($con,"web_db");
  $sql="SELECT STORE_GEOJSON.NAME, DISCOUNT.DISCOUNT_ID, DISCOUNT.DISCOUNT_AVAILIBILITY, DISCOUNT.DISCOUNT_DATE, DISCOUNT.DISCOUNT_PRODUCT_NAME, DISCOUNT.NEW_PRICE, DISCOUNT.DISCOUNT_LIKES, DISCOUNT.DISCOUNT_DISLIKES FROM DISCOUNT
  INNER JOIN STORE ON DISCOUNT.DISCOUNT_STORE_ID = STORE.ID
  INNER JOIN STORE_GEOJSON ON STORE.STORE_GEOJSON_ID = STORE_GEOJSON.ID";
  $result = mysqli_query($con,$sql);
}/*Καθορισμός σειράς τίτλων του πίνακα */
echo "<table>
<tr>
<th>Store</th>
<th>ID</th>
<th>Date</th>
<th>Product</th>
<th>Price</th>
<th>Availability</th>
<th>Likes</th>
<th>Dislikes</th>
<th>Delete</th>
<th>Unavailable</th>

</tr>";
while($row = mysqli_fetch_array($result)) {
  echo "<tr>";
  echo "<td>" . $row['NAME'] . "</td>";
  echo "<td>" . $row['DISCOUNT_ID'] . "</td>";
  echo "<td>" . $row['DISCOUNT_DATE'] . "</td>";
  echo "<td>" . $row['DISCOUNT_PRODUCT_NAME'] . "</td>";
  echo "<td>" . $row['NEW_PRICE'] . "</td>";
  echo "<td>" . $row['DISCOUNT_AVAILIBILITY'] . "</td>";
  echo "<td>" . $row['DISCOUNT_LIKES'] . "</td>";
  echo "<td>" . $row['DISCOUNT_DISLIKES'] . "</td>";
  echo "<td><button id=\"like\" onclick=\"window.location.href='./delete.php?id=".$row['DISCOUNT_ID']."';\">Διαγραφή Προσφοράς</button></td>";
  echo "<td><button id=\"like\" onclick=\"window.location.href='./update_unavailable.php?id=".$row['DISCOUNT_ID']."';\">Μη Διαθέσιμη</button></td>";
  echo "</tr>";
}
echo "</table>";
mysqli_close($con);
?>
</body>
</html>
