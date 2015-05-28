<?php
include 'koneksi.php';
  session_start();
  if(!isset($_SESSION['id_user'])){
  header("location:admin1.php");
}
$dir1 = "gambar/";
$dir2 = "video/";
$isi = $_POST['isi'];
$id_kisah = $_POST['id_kisah'];
$judul = $_POST['judul'];


$gambar = $_FILES['gambar']['name'];
$temp_file = $_FILES['gambar']['tmp_name'];
$folder = "gambar/".$gambar;
$a = move_uploaded_file($temp_file, $folder);

$video = $_FILES['video']['name'];
$temp_file = $_FILES['video']['tmp_name'];
$folder = "video/".$video;
$b = move_uploaded_file($temp_file, $folder);



if($a&&$b){
	$sql = "update sahabat set judul='$_POST[judul]',
									gambar = '$gambar',
									video = '$video',
									isi = '$isi'
									where id_sahabat= '$_POST[id_sahabat]'";
	$sh->exec($sql);
}

else{
	$sql = "update sahabat set judul='$_POST[judul]',
									gambar = '$gambar',
									video = '$video',
									isi = '$isi'
									where id_sahabat= '$_POST[id_sahabat]'";
	$sh->exec($sql);
}
header ("location: admin.php");
?>