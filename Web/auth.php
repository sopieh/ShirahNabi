<?php
session_start();
ob_start();
include 'koneksi.php'; 
$username=$_POST['username']; 
$password=$_POST['password']; 

$sql= $sh->prepare("select * from admin where username='$username' and password='$password'");
$sql->execute();
$rows = $sql->fetch(PDO::FETCH_NUM);
$user = $sql->fetch(PDO::FETCH_ASSOC);

if($rows>0)
{
	$sql = $sh->prepare("select * from admin where username='$username' and password ='$password'");
	$sql->execute();
	$user = $sql->fetch(PDO::FETCH_ASSOC);
	$_SESSION['login']=true;
	$_SESSION['id_admin']=$user['id_admin'];
	$_SESSION['username'] = $user['username'];
	$_SESSION['password'] = $user['password'];
	header('location:admin1.php');
} 
else 
{
	$_SESSION['ler'] = true;
	$_SESSION['gagal'] = 'Email or Password False!';
	header('location: admin.php');
}

?>


