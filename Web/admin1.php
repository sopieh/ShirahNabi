<?php 
include("koneksi.php"); 
?>
<html>
<head>
<link rel = "icon" type="Image/png" href="f/sn.png">
</head>
<title>Siroh Nabi</title>
<link rel="stylesheet" href="css/font-awesome.min.css" type="text/css">
<link rel="stylesheet" href="css.css">
<body>
<div id="c">
<div id="c1">
	<div id="logo">
	<img src="f/sn.png">
	</div>
	<div id="a">
	<div id="s1"></div>
	<div id="s2"></div>
	<div id="s3"></div>
	<div id="s4"></div>
	<div id="s5"></div>
	<div id="s6"></div>
	<div id="s7"></div>
	<div id="s8"></div>
	<div id="s9"></div>
	<div id="s10"></div>
	</div>
	<div id="pencarian">
	<div id="cari">
	<form action="cari.php" method="post" name="pencarian" id="pencarian">  
	  <input type="text" name="cari" id="search"> 
	</form> 
	</div>
	<div id="ca"><i class="fa fa-search"></i></div>
	</div>
	<a href="index.php">
	<div id="home"><i class="fa fa-home"><span style="margin-left:10px;">Home</span></i></div>
	</a>
	<a href="app.php">
	<div id="app"><i class="fa fa-desktop"><span style="margin-left:10px;">Apps</span></i></div>
	</a>
        <a href="kontak.php">
	<div id="guest"><i class="fa fa-tags"><span style="margin-left:10px;">Guest Books</span></i></div>
	</a>
	<a href="about.php">
	<div id="about"><i class="fa fa-info-circle"><span style="margin-left:10px;">About</span></i></div>
	</a>
	<a href="admin.php">
	<div id="admin"><i class="fa fa-tags"><span style="margin-left:10px;">Admin</span></i></div>
	</a>

	
</div>    
<div id="c2">
	<div id="a">
	<div id="s1"></div>
	<div id="s2"></div>
	<div id="s3"></div>
	<div id="s4"></div>
	<div id="s5"></div>
	<div id="s6"></div>
	<div id="s7"></div>
	<div id="s8"></div>
	<div id="s9"></div>
	<div id="s10"></div>
	</div>

	<div id="ad1">
		<div id="ad2"></div>
		<div id="ad3">
			<div id="ad4">Admin
			<a href="logout.php">
			<div id="ad6"><span style="margin-right:20px">Logout</span><i class="fa fa-sign-out"></i></div>
			</a>
			</div>
			<div id="y">
			<a href="?d=u_nabi">
			<div id="ad7">Upload Kisah Nabi</div>
			</a>
			<a href="?d=u_sahabat">
			<div id="ad8">Upload Kisah Sahabat Nabi</div>
			</a>
			<a href="?d=upload">
			<div id="upd">Updater App</div>
			</a>
			</div>
			<div id="ad9">
			<?php
				if (!isset($_GET['d'])){
					include "u_nabi.php";
				}
				else{
					if ($_GET['d']=="u_nabi"){
						include "u_nabi.php";
					}elseif ($_GET['d']=="u_sahabat"){
						include "u_sahabat.php";

					}elseif ($_GET['d']=="upload"){
						include "upload.php";
				}else{
						include "upload.php";
					}
				}
				?>
			</div>
			
		</div>
	</div>
</div>
</div>

	</body>
	</html>
