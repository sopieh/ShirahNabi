<div id="q"></div>
<div id="q1">
	<div id="q2">QUOTES OF THE DAY</div>
	<?php
	$sql = "select * from quotes order BY rand() LIMIT 1";
	$no = 1;
	foreach ($sh->query($sql) as $data) :
	?>
	<div id="q3">
	"<span style="margin-left:5px;"></span><?php echo $data['isi_q']; ?><span style="margin-left:5px;"></span>"
	</div>
	<?php
		endforeach;
	?>
	

</div>