<?php 
include('./connection.php'); 
$id= $_GET['id'];

$sql = "DELETE DISCOUNT WHERE DISCOUNT_ID=$id";
         
            if(mysqli_query($con, $sql)){
                mysqli_close($con);
                header('Location: ./Show_Offers.html');
                //echo $username . " ";
                //echo $password;
                //echo '<script>alert("Succesful Update of Credentials");</script>';  
            } else{
                echo "ERROR: Hush! Sorry $sql. "
                    . mysqli_error($con);
            }



?>