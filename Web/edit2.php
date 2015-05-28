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
<div id="e1">
<?php
include 'koneksi.php';
if (isset($_GET['id'])) {
          $sql = $sh->query("select * from sahabat where id_sahabat = '$_GET[id]'");
          $data = $sql->fetch(PDO::FETCH_ASSOC);
          
}
else {
	echo" id tidak ditemukan
	<a href='admin1.php'>Data</a>";
}
?>
<center>
<h1 class="content-title">Edit Kisah?</h1>
<div class="content-body">

   <form action="update2.php" method="POST" enctype ="multipart/form-data">
                <CENTER>
                <input type="hidden" name="id_sahabat" value="<?php echo $data['id_sahabat']; ?>">
                	<input  type="text" name="judul" value="<?php echo $data['judul']; ?>"><br/>
                  <input type="file" name="gambar" placeholder="Gambar">
                  <input type="text" name="video" value="<?php echo $data['video']; ?>">
                    <textarea type="text" name="isi"   placeholder="Isi"><?php echo $data['isi']; ?></textarea><br>
                  	<input id="tombol" type="submit" value="Update" onclick="return confirm('Update Data?')"><br>
                    <input id="reset" type="reset" value="Reset" onclick="return confirm('Clear Data?')">
                 </CENTER>   
                </form>
                <a href="admin1.php"><i class="fa fa-book" style="color:#000033; font-size:50px;"></i></a>
  </div>
   </center>
 </div>
 </div>
 </div>
 </body>
 </html>
 
