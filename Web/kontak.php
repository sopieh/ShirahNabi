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
	<form action="cari.php" method="Post" enctype="multipart/form-data">
		<input type="text" name="cari" placeholder="Search Story?.." required>
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

	<div id="kt1">
		<div id="kt2"></div>
		<div id="kt3">
			<div id="kt4">Guest Book</div>
			<div id="kt5">
			<form action="simpan1.php" method="POST" enctype ="multipart/form-data">
                	<input name="nama_k" type="text"  placeholder="Nama Lengkap"><br/>
                	<textarea name="isi_k" type="text"  placeholder="Pesan Kesan"></textarea><br/>
                        <input name="foto_k" type="file" placeholder="Foto"><br/>
                  	<input id="tombol" type="submit" value="Save" onclick="return confirm('Save Data?')">
                        </form>
		        </div>
                      
                        <div id="kt6">
                        <?php
	                $sql = "select * from kontak order by id_k";
	                $no = 1;
	                foreach ($sh->query($sql) as $data) :
	                ?>
                        <div id="kt7">
                           <div id="kt8">
                             <div id="ktf">
	                       <div id="kt9"><img src="foto_k/<?php echo $data['foto_k']; ?>"></div>
                             </div>
                              <div id="kti">
	                       <div id="kt10"><?php echo $data['nama_k']; ?></div>
	                       <div id="kt11"><?php echo $data['tgl_k']; ?></div>
                              </div>
                           </div>
                           <div id="kt12">
	                       <div id="kt13"><?php echo $data['isi_k']; ?></div>
                           </div>
                       </div>
                      
                       <?php
	               endforeach;
	               ?>
                        </div>

                  </div>     
		</div>
	</div>
</div>
</div>
	</body>
	</html>
