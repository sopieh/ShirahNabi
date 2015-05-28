<?php
include 'koneksi.php';
                                       $sql = $sh->prepare("SELECT *FROM kisah where id_kisah = '$_GET[id]'");
			                $sql->execute();
			                $data = $sql->fetch(PDO::FETCH_ASSOC);

<div id="m4">

<div id="video">
<div id="title"><?php echo $data['judul']; ?></div>
<iframe width="900" height="400" src="<?php echo $data['video'];?>" autofullscreen></iframe> 
<div id="n">
<a href="?b=sin">
<div id="n1">Artikel <?php echo $data['judul']; ?></div>
</a>

</div>
<div id="n3">
	<?php
				if (!isset($_GET['b'])){
					include "sin.php";
				}
				else{
					if ($_GET['b']=="sin"){
						include "sin.php";
				}else{
						include "sin.php";
					}
				}
?>
</div>
</div>

</div>
<?php
	endforeach;
	?>