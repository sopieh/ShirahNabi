<div id="m"></div>
<div id="m1">
	<div id="m6">
	<a href="?b=list">
	<div id="m2">Kisah 25 Nabi dan Rasul</div>
	</a>
	<a href="?b=sahabat">
	<div id="m3">Kisah Sahabat Nabi</div>
	</a>
	</div>
	<div id="m4">
			<?php
				if (!isset($_GET['b'])){
					include "list.php";
				}
				else{
					if ($_GET['b']=="list"){
						include "list.php";
					}elseif ($_GET['b']=="sahabat"){
						include "sahabat.php";
				}else{
						include "sahabat.php";
					}
				}
				?>
	</div>
	
</div>