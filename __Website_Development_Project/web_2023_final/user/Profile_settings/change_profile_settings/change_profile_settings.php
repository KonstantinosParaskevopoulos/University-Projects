<?php
        include('../connection.php'); 
        session_start();
    
        $username =  $_REQUEST['user_1'];//Παίρνουμε το username από την φόρμα
        $password =  $_REQUEST['pass_1'];
         
        // Performing insert query execution

      
        $sql = "select *from user where username = '$username'";  
        $result = mysqli_query($con, $sql);  
        $row = mysqli_fetch_array($result, MYSQLI_ASSOC);  
        $count = mysqli_num_rows($result);  
         
        $old_username = $_SESSION['session_username']; //Αποθήκευση του παλιού username
        //echo $old_username . " ";
        $sql = "select * from user where username = '$old_username'";  
        $result = mysqli_query($con, $sql);  
        $row = mysqli_fetch_array($result, MYSQLI_ASSOC);
        $user_id = $row['USER_ID']; //Αποθήκευση του id του χρήστη


        
        if($count == 0){


            if($username == ""){    //Αλλαγή μόνο του Password
            $sql = "UPDATE `user` SET `PASSWORD`='$password' WHERE `USER_ID`=$user_id";
         
            if(mysqli_query($con, $sql)){
                header('Location: ../show_profile_settings.php');//Επιστροφή πίσω
                //echo $username . " ";
                //echo $password;
                echo '<script>alert("Succesful Update of Credentials");</script>';  
            } else{
                echo "ERROR: Hush! Sorry $sql. "
                    . mysqli_error($con);
            }
        }
        else if($password == ""){   //Αλλαγή μόνο του username
            $sql = "UPDATE `user` SET USERNAME='$username' WHERE `USER_ID`=$user_id";
         
            if(mysqli_query($con, $sql)){
                $_SESSION['session_username'] = $_POST['user_1']; //Στην μεταβλητή SESSION βάζω το νέο username
                header('Location: ../show_profile_settings.php');
                echo '<script>alert("Succesful Update of Credentials");</script>';  
            } else{
                echo "ERROR: Hush! Sorry $sql. "
                    . mysqli_error($con);
            }
        }
        
        else if($username!="" && $password!=""){    //Aλλαγή password και username
            $sql = "UPDATE `user` SET `PASSWORD`='$password', USERNAME='$username' WHERE `USER_ID`=$user_id";
         
            if(mysqli_query($con, $sql)){
                $_SESSION['session_username'] = $_POST['user_1'];
                header('Location: ../show_profile_settings.php');
                echo '<script>alert("Succesful Update of Credentials");</script>';  
            } else{
                echo "ERROR: Hush! Sorry $sql. "
                    . mysqli_error($con);
            }
        }
        
        
        
        }
        else{
            header('Location: ../show_profile_settings.php');
            echo '<script>alert("Username already Exists");</script>';
        }
?>

