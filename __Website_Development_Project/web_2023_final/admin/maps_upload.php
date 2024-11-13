<!DOCTYPE html>
<html lang="en" lang="el">
<head>
  <meta charset="UTF-8">

</head>
<?php
    include('../connection.php');
    $status=unlink('../maps.json');//Διαγραφή παλιού αρχείου maps.json
    $target_dir = "../";
    $target_file = $target_dir . basename($_FILES["fileToUpload"]["name"]);


//Έλεγχος Σφάλματος στο ανέβασμα και ανέβασμα
    if (move_uploaded_file($_FILES["fileToUpload"]["tmp_name"], $target_file)) {
      //echo "The file ". htmlspecialchars( basename( $_FILES["fileToUpload"]["name"])). " has been uploaded.";
    } else {
      echo "Sorry, there was an error uploading your file.";
    }


    
    header('Location: admin_index.html');

?>
</html>