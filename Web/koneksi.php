<?php 
$user = "nama_user";
$pass = "password_user";
$host = "nama_host";
$db = "nama_database";

try {
	$sh = new PDO("mysql:dbname=$db;host=$host", $user, $pass);
} catch (PDOException $s) {
	echo "Koneksi gagal ke database : ".$s->getMessage();
}

mysql_connect("nama_host","nama_user","password_user");
mysql_select_db("nama_database");


?> 
