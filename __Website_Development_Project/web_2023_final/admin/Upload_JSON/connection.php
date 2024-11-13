<?php      
    $host = "localhost";  
    $user = "root";  
    $password = 'root';  
    $db_name = "WEB_DB_CLONE";  
      
    $con = mysqli_connect($host, $user, $password, $db_name);  
    if(mysqli_connect_errno()) {  
        die("Failed to connect with MySQL: ". mysqli_connect_error());  
    }  
?>  