<?php 
$user = "ariefset_sn_rpl";
$pass = "siroh";
$host = "174.120.70.217";
$db = "ariefset_sn_rpl";

try {
	$sh = new PDO("mysql:dbname=$db;host=$host", $user, $pass);
} catch (PDOException $s) {
	echo "Koneksi gagal ke database : ".$s->getMessage();
}

mysql_connect("174.120.70.217","ariefset_sn_rpl","siroh");
mysql_select_db("ariefset_sn_rpl");


?> 