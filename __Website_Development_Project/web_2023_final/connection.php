<?php      
    $host = "localhost";  //Αρχείο Σύνδεσης με Βάση Δεδομένων
    $user = "root";  
    $password = 'root';  
    $db_name = "WEB_DB";  
      
    $con = mysqli_connect($host, $user, $password, $db_name);  
    if(mysqli_connect_errno()) {  //Έλεγχος Σφάλματος
        die("Failed to connect with MySQL: ". mysqli_connect_error());  
    }  
?>  