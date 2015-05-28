<?php
include 'koneksi.php';
if (isset($_GET['id'])) {
					$sql = $sh->query("select * from kisah where id_kisah = '$_GET[id]'");
					$data = $sql->fetch(PDO::FETCH_ASSOC);
				}
				else {
					echo "Not Found :(";
				}
?>
<div id="n3">

<p>
<?php echo substr($data['isi'], 0, 2000); echo "<br><br><br>continue reading...";?>
<br><br>
<br>
<p style="font-size:10px; float:right; font-family:Segoe Print;"><?php echo $data ['tgl'];?></p>
<div id="n6">
<a href="lihat.php?id=<?php echo $data['id_kisah']; ?>">
<div id="n4">1</div>
</a>
<a href="next1.php?id=<?php echo $data['id_kisah']; ?>">
<div id="n4">2</div>
</a>
<a href="next2.php?id=<?php echo $data['id_kisah']; ?>">
<div id="n4">3</div>
</a>
<a href="next3.php?id=<?php echo $data['id_kisah']; ?>">
<div id="n4">4</div>
</a>
</div>

</p>
</div>

