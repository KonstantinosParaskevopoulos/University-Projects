<?php
header("Content-Type: text/html;charset=UTF-8");
$q = $_REQUEST['category'];
//echo "q = " .$q;
//$moved_var = 'Hello World';

//$q1 = 'Ποτά - Αναψυκτικά';
$db_server["host"] = "localhost"; //database server
$db_server["username"] = "root"; // DB username
$db_server["password"] = "root"; // DB password
$db_server["database"] = "web_db";// database name

$mysql_con = mysqli_connect($db_server["host"], $db_server["username"], $db_server["password"], $db_server["database"]);
$mysql_con->query ('SET CHARACTER SET utf8');
$mysql_con->query ('SET COLLATION_CONNECTION=utf8_general_ci');


if($q!=""){
  $query="SELECT STORE_GEOJSON.X, STORE_GEOJSON.Y, STORE_GEOJSON.NAME, STORE_GEOJSON.ID, STORE_GEOJSON.SHOP, STORE.DISCOUNTS, STORE.ID, PRODUCT.PRODUCT_NAME, CATEGORIES.CATEGORY_NAME FROM store_geojson
  INNER JOIN STORE ON STORE_GEOJSON.ID = STORE.STORE_GEOJSON_ID
  INNER JOIN DISCOUNT ON STORE.ID = DISCOUNT.DISCOUNT_STORE_ID
  INNER JOIN PRODUCT ON DISCOUNT_PRODUCT_NAME = PRODUCT.PRODUCT_NAME
  INNER JOIN CATEGORIES ON PRODUCT.PRODUCT_CATEGORY = CATEGORIES.CATEGORY_ID
  WHERE CATEGORIES.CATEGORY_NAME = '".$q."'";
  $result = $mysql_con->query($query); 
  while($row = $result->fetch_array())
{

  $data[] = array("lat"=>$row["Y"], "lon"=>$row["X"], "Details"=>$row['NAME'], "ID"=>$row["ID"], "Shop"=>$row["SHOP"]);
}
}
elseif($q=="all"||$q==""){
  $query="SELECT STORE_GEOJSON.X, STORE_GEOJSON.Y, STORE_GEOJSON.NAME, STORE_GEOJSON.ID, STORE_GEOJSON.SHOP, STORE.DISCOUNTS, STORE.ID, PRODUCT.PRODUCT_NAME, CATEGORIES.CATEGORY_NAME FROM store_geojson
  INNER JOIN STORE ON STORE_GEOJSON.ID = STORE.STORE_GEOJSON_ID
  INNER JOIN DISCOUNT ON STORE.ID = DISCOUNT.DISCOUNT_STORE_ID
  INNER JOIN PRODUCT ON DISCOUNT_PRODUCT_NAME = PRODUCT.PRODUCT_NAME
  INNER JOIN CATEGORIES ON PRODUCT.PRODUCT_CATEGORY = CATEGORIES.CATEGORY_ID;";
  $result = $mysql_con->query($query); 
  while($row = $result->fetch_array())
{

  $data[] = array("lat"=>$row["Y"], "lon"=>$row["X"], "Details"=>$row['NAME'], "ID"=>$row["ID"], "Shop"=>$row["SHOP"]);
}
}
?>

<!DOCTYPE html>
<meta http-equiv="content-type" content="text/html;charset=utf-8" />
<html>
<head>
<link rel="stylesheet" href="leaflet/node_modules/leaflet/dist/leaflet.css" />
<link rel="stylesheet" href="filt_map.css">
<link rel="stylesheet" href="leaflet-search/src/leaflet-search.css" />
    <title>Maps</title>
  </head>
  <body>
  <!-- Εδώ ορίζουμε το menu bar της ιστοσελίδας, δηλώνοντας όλα τα πιθανά link - pages στο interface του χρήστη -->
  <div class="topnav"><!--View_Filt-->
              <a href="../admin_index.html">Αρχική Σελίδα</a>
              <a href="../Processing_offers/processing_offers.html">Επεξεργασία Προσφορών</a>
              <a href="../Discount_Register/Discount_Store.php">Υποβολή Προσφοράς</a>
              <a href="../View_Stats/Select_Chart.html">Απεικόνιση Στατιστικών</a>
              <a href="../Leaderboard/leaderboard.php?page=1">Leaderboard</a>
              <a href="../file_upload_.html">Ανέβασμα αρχείου τιμών προϊόντων</a>
              <a class="active" href="./filt_map_cat_select.html">Προβολή Φιλτραρισμένου Χάρτη</a>
              <a href="../../logout.php">Αποσύνδεση</a>
              </div>

    <!-- ΧΑΡΤΕΣ -->
    <div id='mapid'></div>
    <script src="leaflet/node_modules/leaflet/dist/leaflet.js"></script>
    <script src="leaflet-color-markers/leaflet-color-markers.js"></script>
    <script src="leaflet-search/src/leaflet-search.js"></script>
    
    <script type="text/javascript"> 
      var map = L.map('mapid').setView([38.246639, 21.734573], 13);
      L.tileLayer('https://api.maptiler.com/maps/basic/256/{z}/{x}/{y}.png?key=dVhthbXQs3EHCi0XzzkL',{
        attribution:
        '<a href="https://www.maptiler.com/copyright/" target="_blank">&copy; MapTiler</a> <a href="https://www.openstreetmap.org/copyright" target="_blank">&copy; OpenStreetMap contributors</a>'
      }).addTo(map);

  ///////////////////////////////////Εντοπισμός Χρήστη///////////////////////////////////////////////
  map.locate({setView: true, zoom: 30}); //Εντοπισμός χρήστη
  
    function onLocationFound(e) {            //Δημιουργία Συνάρτησης για σχεδίαση περιοχής που μπορεί
      var radius = e.accuracy;               //να βρίσκεται ο χρήστης με βάση την ακρίβεια

      L.marker(e.latlng,{icon: redIcon}).addTo(map)
          .bindPopup("You are within " + radius + " meters from this point").openPopup();

      L.circle(e.latlng, radius).addTo(map);
    }

    map.on('locationfound', onLocationFound);
    ////////////////////////////////////////////////////////////////////////////////////////////////////
  

      //var marker = L.marker([14.0940, 120.6890]).addTo(map);
      var city = L.layerGroup();
      // var Points = $.getJSON("get_location.php", function(data) {     
        var data = <?php echo json_encode($data); ?>;
        for (var i = 0; i < data.length; i++) {
          var new_location = new L.LatLng(data[i].lat, data[i].lon);
          var place = data[i].Details;
          var shop = data[i].Shop;
          var shop_id = data[i].ID;
          var marker = new L.Marker(new_location, {
            title: place
          });
          var message = 'Name: ' +place+'\nShop: '+shop+'\nID: '+shop_id;
          marker.bindPopup(message);
          city.addLayer(marker);
          // if (data[i].lat < SWlat) {SWlat = data[i].lat}
          // if (data[i].lng < SWlng) {SWlng = data[i].lng}
          // if (data[i].lat > NElat) {NElat = data[i].lat}
          // if (data[i].lng > NElng) {NElng = data[i].lng}
        }
      // });
      // Points.done(function() {
        // locSW = new L.LatLng(SWlat, SWlng);
        // locNE = new L.LatLng(NElat, NElng);
        // mapBounds = L.latLngBounds(locSW, locNE);
        // map.fitBounds(mapBounds);
      // });
      map.addLayer(city);
    </script>
    <?php
    $mysql_con->close();
    ?>
    </body>
</html>



