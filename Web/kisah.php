<?php
include 'koneksi.php';
?>
<div id="ka1">Unknown</div>
	<?php
	$sql = "select * from kisah order by id_kisah";
	$no = 1;
	foreach ($sh->query($sql) as $data) :
	?>
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