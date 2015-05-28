<?php
include 'koneksi.php';
$judul =$_POST['judul'];
$isi = $_POST['isi'];
$video = $_POST['video'];


$gambar = $_FILES['gambar']['name'];
$temp_file = $_FILES['gambar']['tmp_name'];
$folder = "gambar/".$gambar;
$b = move_uploaded_file($temp_file, $folder);

if(empty($_POST['judul'])) die ("<script>alert('Anda Belum Memilih Foto');window.location='javascript:history.go(-1)';</script>");

$sql1 = "INSERT INTO kisah values(null,'$judul','$gambar','$video','$isi',NOW())";
$sh->exec($sql1);

if($sql1)
{
	echo "<script>location.replace('admin1.php')</script>";
}

else{
	echo "update failed ...";
}

?>