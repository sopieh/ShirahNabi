<div class="container">
<div class="menu-parent">
<div class="menu-child">C++ Auto Update Administrator</div>
<a href="?r=home"><div class="menu-child">Home</div></a>
<a href="?r=upload"><div class="menu-child">Upload</div></a>
</div>
<?php
include  'koneksi.php'; 
if(!isset($_GET['r'])){
include "home.php";
}else{
if($_GET['r']=="home"){
include "home.php";
}elseif($_GET['r']=="upload"){
include "upload.php";
}else{
include "home.php";
}
}
?>