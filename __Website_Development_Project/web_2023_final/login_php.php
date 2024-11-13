<?php
session_start();    //Έναρξη αποθήκευσης μεταβλητών $_SESSION
?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
</head>
<?php      
    include('connection.php');  
    
    $username = $_POST['user_2'];  //Post στη μεταβλητή $username του περιεχομένου της φόρμας με name="user_2"
    $password = $_POST['pass_2'];  
      
        //Συναρτήσεις για αποτροπή mysqli injection  
        $username = stripcslashes($username);  
        $password = stripcslashes($password);  
        $username = mysqli_real_escape_string($con, $username);  
        $password = mysqli_real_escape_string($con, $password);  
        //Ελέγχω αν ο χρήστης έχει κάνει ήδη login
//Δηλαδή αν έχει δημιουργηθεί η ειδική μεταβλητή $_SESSION
if (isset($_SESSION['session_username']))
{
	echo "Έχεις κάνει ήδη login <b>".$_SESSION['session_username']."</b>! Μια φορά αρκεί.";
	echo "<br><a href='logout.php'>Log off</a>";
}
//Αν δεν έχει κάνει login ήδη, ελέγχω τι έφερε η φόρμα
else
{
		
		$_SESSION['session_username'] = $_POST['user_2'];
		$sql = "select * from user where username = '$username' and password = '$password'"; //Query
        $result = mysqli_query($con, $sql);  //Εκτέλεση Query
        $row = mysqli_fetch_array($result, MYSQLI_ASSOC);  //Επιστροφή πίνακα από Query
        $count = mysqli_num_rows($result);  //Μέτρημα γραμμών Query
        $status = $row['STATUS'];   //Αποθήκευση πεδίου Status του Χρήστη
          
        if($count == 1 && $status == 'USER'){  //Από την SQL πρέπει να επιστραφεί 1 εγγραφή καθώς τα username είναι μοναδικά
            //echo '<script>alert(\'.$_SESSION[\'session_username\']\'.)</script>';
            //echo 'Welcome ' .$_SESSION['session_username'];
            header('Location: ./user/main_page.html');
        exit;

        }
        else if($count == 1 && $status == 'ADMIN'){  
            //echo '<script>alert(\'.$_SESSION[\'session_username\']\'.)</script>';
            //echo 'Welcome ' .$_SESSION['session_username'];
            header('Location: ./admin/admin_index.html');
        exit;

        }  
        else{  
            echo "<h1> Login failed. Invalid username or password.</h1>";  
        }     
	
}
        






?>  