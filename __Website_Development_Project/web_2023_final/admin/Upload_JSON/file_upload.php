<!DOCTYPE html>
<html lang="en" lang="el">
<head>
  <meta charset="UTF-8">

</head>
<?php
    include('connection.php');
$target_dir = "./";
$target_file = $target_dir . basename($_FILES["fileToUpload"]["name"]);
//echo "Filename: " .$target_file. "<br><br>";
//$jsonFileType = strtolower(pathinfo($target_file,PATHINFO_EXTENSION));

//Έλεγχος Σφάλματος στο ανέβασμα
    if (move_uploaded_file($_FILES["fileToUpload"]["tmp_name"], $target_file)) {
      //echo "The file ". htmlspecialchars( basename( $_FILES["fileToUpload"]["name"])). " has been uploaded.";
    } else {
      echo "Sorry, there was an error uploading your file.";
    }




    $data = file_get_contents($target_file);

    $array = json_decode($data,true);
    $inserted_rows=0;

    foreach($array as $value){
      for($count=0; $count<=4; $count++){  // Προσοχή να τροποποιήσω τα αυτάκια στα ονόματα των προιοντων απτο json σε κάποιο άλλο σύμβολο διότι δημιουργούν σφάλμα. Θα το κάνω κάνοντας control f το σύμβολο "'" και όπου υπάρχει το τροποποιώ //
            $query = "INSERT INTO PRICE_HISTORY VALUES (DEFAULT, '".$value['name']."','".$value['prices'][$count]['date']."','".$value['prices'][$count]['price']."')";
            mysqli_query($con,$query);
            $inserted_rows++;
      };
    };

    header('Location: file_upload_.html');

?>
</html>
