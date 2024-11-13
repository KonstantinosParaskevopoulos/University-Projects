<?php 
include('./connection.php'); 
$id= $_GET['id']; //Αποθήκευση του ορίσματος από το URL στη μτβ id

$sql = "UPDATE DISCOUNT SET DISCOUNT_LIKES=DISCOUNT_LIKES+1 WHERE DISCOUNT_ID=$id";
         
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