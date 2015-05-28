<?php
session_start();
unset($_SESSION['id_admin']);
echo "<script>location.replace('admin.php')</script>";
?>