<?php
include 'koneksi.php';
$nama_k =$_POST['nama_k'];
$isi_k = $_POST['isi_k'];

$foto_k = $_FILES['foto_k']['name'];
$temp_file = $_FILES['foto_k']['tmp_name'];
$folder = "foto_k/".$foto_k;
$a = move_uploaded_file($temp_file, $folder);

if(empty($_POST['nama_k'])) die ("<script>alert('Anda Belum Mengisi form');window.location='javascript:history.go(-1)';</script>");

$sql3="INSERT INTO kontak values(null,'$nama_k','$isi_k','$foto_k',NOW())";
$sh->exec($sql3);

if($sql3)
{
	echo "<script>location.replace('kontak.php')</script>";
}
else{
	echo "update failed ...".mysql_error();
}

?>
