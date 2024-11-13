    <?php
        include('connection.php'); 
        
        // Taking all 5 values from the form data(input)
        $username =  $_REQUEST['user_1'];
        $password =  $_REQUEST['pass_1'];
        //$email = $_REQUEST['email_1'];
         
        // Performing insert query execution
        // here our table name is college
        $username = stripcslashes($username);  
        $password = stripcslashes($password);  
        $username = mysqli_real_escape_string($con, $username);  
        $password = mysqli_real_escape_string($con, $password);  
      
        $sql = "select *from user where username = '$username'";  //Έλεγχος για χρήστη που έχει το ίδιο username
        $result = mysqli_query($con, $sql);  
        $row = mysqli_fetch_array($result, MYSQLI_ASSOC);  
        $count = mysqli_num_rows($result);  
        
        if($count == 0){
        $sql = "INSERT INTO user VALUES (DEFAULT, '$username',
            '$password',DEFAULT, DEFAULT, DEFAULT)";
         
            if(mysqli_query($con, $sql)){
                echo '<script>alert("Succesful Registration Use new credentials to Login");</script>'; //Περίπτωση εκτέλεσης με επιτυχία
                header('Location: index.html');
                 
            } else{
                echo "ERROR: Hush! Sorry $sql. "//Περίπτωση σφάλματος στην εγγραφή
                    . mysqli_error($con);
            }
        }
        else{
            echo '<script>alert("Username already Exists");</script>';//Alert ότι το όνομα χρήστη υπάρχει ήδη
            header('Location: index.html');
            
        }
?>