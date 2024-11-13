<!DOCTYPE html>
<meta http-equiv="content-type" content="text/html;charset=utf-8" />
<html>
<head>

<link rel="stylesheet" href="./show_profile.css">
</head>
<body>
  <!-- Εδώ ορίζουμε το menu bar της ιστοσελίδας, δηλώνοντας όλα τα πιθανά link - pages στο interface του χρήστη -->
  <div class="topnav">
    <a class="active" href="./show_profile_settings.php">Ρυθμίσεις Προφίλ</a>
    <a href="../Show_offers/Show_Offers.html">Εμφάνιση Διαθέσιμων Προσφορών</a>
    <a href="../main_page.html">Αρχική Σελίδα</a>
    <a href="../View_Filt_Map/filt_map_cat_select.html">Προβολή Φιλτραρισμένου Χάρτη</a>
    <a href="../Discount_Register/Discount_Store.php">Δηλώστε μια προσφορά</a>
    <a href="../../logout.php">Αποσύνδεση</a>
  </div>


<!--  Δημιουργία Φόρμας Κατηγορίας-Υποκατηγορίας-Προιόντων (Βάθους 3) -->
<div class="main_cont">
  <?php 
    include('connection.php'); 
    session_start();
    
    $username = $_SESSION['session_username'];
  

    $sql = "select * from user where username = '$username'";  
            $result = mysqli_query($con, $sql);  
            
            echo "<table>";
            
            while($row = mysqli_fetch_array($result)) {
                echo "<tr>";
                echo "<tr><td><b>User_ID</b></td><td>". $row['USER_ID'] .   "</td>";
                echo "<tr><td><b>Username</b></td><td>". $row['USERNAME'] .  "</td>";
                echo "<tr><td><b>Password</b></td><td>". $row['PASSWORD'] .  "</td>";
                echo "<tr><td><b>Status</b></td><td>". $row['STATUS'] .    "</td>";
                echo "<tr><td><b># of Tokens</b></td><td>". $row['TOKENS'] .    "</td>";
                echo "<tr><td><b># of Discounts</b></td><td>". $row['DISCOUNTS'] . "</td>";
              }
              echo "</table><br><br>
              <button id=\"change_settings\" onclick=\"window.location.href='change_profile_settings/change_profile_settings.html';\">Αλλαγή Στοιχείων</button></td>";
              mysqli_close($con);
                
  ?>
</div>


</body>
</html>
