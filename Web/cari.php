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
	  <input type="text" name="cari" PlaceHolder="Search"> 
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
<div class="content-title">Hasil Pencarian &nbsp<i class="fa fa-quote-left"><span style="margin-left:10px;"></span></i> &nbsp<?php echo $_POST['cari'];?>&nbsp <i class="fa fa-quote-right"><span style="margin-right:10px;"></span></i></div>
<?php
  include 'koneksi.php';

$sql = "select * from kisah where judul like '%".$_POST['cari']."%' order by id_kisah desc";
$no = 1;
foreach ($sh->query($sql) as $data) :
  ?>
<div id="c3">
<a href="lihat.php?id=<?php echo $data['id_kisah']; ?>">
	<div id="hvr-bubble-float-top">
	<div id="data">	
	<div id="judul"><?php echo $data['judul']; ?></div>
		<div id="gam">
		<p>
		<img src="gambar/<?php echo $data['gambar']; ?>" >
		</p>
		</div>
	</div>
	</div>
	</a>
	<?php
	endforeach;
	?>
	</div>
	</div>
</div>
</body>
</html>
