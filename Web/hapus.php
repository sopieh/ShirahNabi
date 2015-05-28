<?php
include 'koneksi.php';

if (isset($_GET['id'])){
		$sh->exec("delete from artikel where id = '$_GET[id]'");
}
header ("location:idx.php");
?>