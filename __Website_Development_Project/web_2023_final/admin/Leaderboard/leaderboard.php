<!DOCTYPE html>
<meta http-equiv="content-type" content="text/html;charset=utf-8" />
<html>
<head>
<link rel="stylesheet" href="leaderboard.css">
</head>
<body>
<style>

table, td, th {
    border: 0px;
    padding: 5px;
  }

th { background-color: #268; color: white; }

tr:hover {background-color: grey;}
</style>


  <!-- Εδώ ορίζουμε το menu bar της ιστοσελίδας, δηλώνοντας όλα τα πιθανά link - pages στο interface του χρήστη -->
  <div class="topnav"><!--Leaderboard-->
          <a href="../admin_index.html">Αρχική Σελίδα</a>
          <a href="../Processing_offers/processing_offers.html">Επεξεργασία Προσφορών</a>
          <a href="../Discount_Register/Discount_Store.php">Υποβολή Προσφοράς</a>
          <a href="../View_Stats/Select_Chart.html">Απεικόνιση Στατιστικών</a>
          <a class="active" href="./leaderboard.php?page=1">Leaderboard</a>
          <a href="../Upload_JSON/file_upload_.html">Ανέβασμα αρχείου τιμών προϊόντων</a>
          <a href="../View_Filt_Map/filt_map_cat_select.html">Προβολή Φιλτραρισμένου Χάρτη</a>
          <a href="../../logout.php">Αποσύνδεση</a>
          </div>

<!--  Εδώ εμφανίζεται το Leaderboard -->
<div class="main_cont">
  <?php
    include('../../connection.php');
    session_start();
    $sql = "select * from user where status='USER'";
    $result = mysqli_query($con, $sql);
    $count_of_users = mysqli_num_rows($result);     //Βρίσκουμε αριθμό Χρηστών



    $results_per_page=10; //Αποτελεσματα ανα σελίδα

    $page= $_GET['page']; //Παίρνουμε το όρισμα page από το URL

    $start_from = ($page-1) * $results_per_page; //Βρίσκουμε από που θα αρχίσει η εκτύπωση αποτελεσμάτων για την LIMIT(M,N) της SQL

    $total_pages = ceil($count_of_users/$results_per_page); //Βρίσκουμε συνολικό αριθμό σελίδων που θα χρειαστούμε


    $sql = "select * from user where status='USER' order by tokens desc LIMIT " .$start_from. ", " .$results_per_page." ";
            $result = mysqli_query($con, $sql);
            echo "<table>";
            echo "<th><b>User_ID</b></th>";
                echo "<th><b>Username</b></th>";
                echo "<th><b>Status</b></th>";
                echo "<th><b># of Tokens</b></th>";
                echo "<th><b># of Discounts</b></th>";

            while($row = mysqli_fetch_array($result)) {
                echo "<tr>";
                echo "<td>". $row['USER_ID'] .   "</td>";
                echo "<td>". $row['USERNAME'] .  "</td>";
                echo "<td>". $row['STATUS'] .    "</td>";
                echo "<td>". $row['TOKENS'] .    "</td>";
                echo "<td>". $row['DISCOUNTS'] . "</td>";
                echo "<tr>";
              }
              echo "</table><br><br>";
              mysqli_close($con);

              echo "<table>";
              for($i=1; $i<=$total_pages; $i++){

                echo "<td><a href=\"leaderboard.php?page=".$i."\">".$i."</a></td>";
              }
              echo "</table><br><br>";

  ?>
</div>


</body>
</html>
