<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
</head>

<?php 
include('connection.php'); 
session_start();
//Λήψη στοιχείων από φόρμα
$category =  $_REQUEST['category'];
$subcategory =  $_REQUEST['subcategory'];
$product = $_REQUEST['product'];
$price = $_REQUEST['price'];
$shop_id = $_REQUEST['ID'];
$username = $_SESSION['session_username']; 

$sql = "select * from user where username = '$username'";  
        $result = mysqli_query($con, $sql);  
        $row = mysqli_fetch_array($result, MYSQLI_ASSOC);
        $user_id = $row['USER_ID'];
        
        $sql = "INSERT INTO DISCOUNT VALUES (DEFAULT, $shop_id,
        '$product',DEFAULT, $price, $user_id, DEFAULT, DEFAULT, DEFAULT)";
     
        if(mysqli_query($con, $sql)){
            header('Location: Discount_Store.php');
            echo '<script>alert("Your Discount was Submitted");</script>';  
        } else{
            echo "ERROR: Hush! Sorry $sql. "
                . mysqli_error($con);
        }




?>