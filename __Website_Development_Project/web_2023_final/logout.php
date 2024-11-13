<?php
  session_start();
?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
</head>
<?php
session_destroy(); //Διαγραφή μεταβλητών Session
	session_unset();
?>
<p>Ευχαριστούμε που μας επισκεφθήκατε</p>
</html>
