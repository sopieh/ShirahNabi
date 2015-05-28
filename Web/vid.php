<div id="v"></div>
<div id="v1">
	<div id="v3">VIDEO KISAH</div>
	<div id="v2">

	<?php

		$sql = "select * from kisah order by id_kisah  ";
		$no = 1;
		foreach ($sh->query($sql) as $data) :
		?>
		<a href="video.php?id=<?php echo $data['id_kisah']; ?>">
		<div id="vid">
		<div id="jud"><?php echo $data['judul']; ?></div>
			<div id="vid2">
			<p>
			<iframe width="80%" height="100" src="<?php echo $data['video'];?>" autofullscreen></iframe>
		</p>
	
			</div>
		</div>
		</a>
		<?php
		endforeach;
		?>
		<?php

		$sql2 = "select * from sahabat order by id_sahabat  ";
		$no = 1;
		foreach ($sh->query($sql2) as $data) :
		?>
		<a href="video2.php?id=<?php echo $data['id_sahabat']; ?>">
		<div id="vid">
		<div id="jud"><?php echo $data['judul']; ?></div>
			<div id="vid2">
			<p>
			<iframe width="80%" height="100" src="<?php echo $data['video'];?>" autofullscreen></iframe>
		</p>
	
			</div>
		</div>
		</a>
		<?php
		endforeach;
		?>
	</div>
</div>
