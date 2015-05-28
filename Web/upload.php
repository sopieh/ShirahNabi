<?php
if(isset($_POST['versi'])){
$versi = $_POST['versi'];
$log_data = $_POST['log_data'];
$sqlupdate = $_POST['db_update'];
$namafile = $_FILES['berkas']['name'];
$temp_file = $_FILES['berkas']['tmp_name'];
mkdir("berkas/".$versi,0777);
$folder = "berkas/".$versi."/".$namafile;
$alamat = $_SERVER['SERVER_NAME']."/updater/".$folder;
$a = move_uploaded_file($temp_file, $folder);
@mysql_query("INSERT INTO berkas (`versi`,`alamat`,`namafile`,`log_data`,`db_update`) values('".$versi."','".$alamat."','".$namafile."','".$log_data."','".$sqlupdate."')");
}
?>
<br><br>
<h1>Updater</h1>
<br><br><br>
<div id="ad9">
<div id="ad10">
<form method="POST" action="" enctype="multipart/form-data">
<table style="width:100%">
<tr>
<td>Versi</td>
<td><input type="text" name="versi" required></td>
</tr>
<tr>
<td>Berkas</td>
<td><input type="file" name="berkas" required></td>
</tr>
<tr>
<td>Log Data</td>
<td><textarea type="text" name="log_data" required></textarea></td>
</tr>
<tr>
<td>DB Update</td>
<td><textarea type="text" name="db_update" required></textarea></td>
</tr>
<tr>
<td></td>
<td><button type="submit">Submit</button></td>
</tr>
</table>
</form>
</div>
</div>

<br><br><br>
Table Updater
<br><br>
<div id="u1">
<table>
<thead>
<th>No</th>
<th>Nama Berkas</th>
<th>Versi</th>
<th>Alamat</th>
<th>Log Data</th>
<th>SQL Update</th>
</thead>
<?php
$a = mysql_query("SELECT *FROM berkas order by id asc");
$i = 1;
while($b = @mysql_fetch_array($a)){
?>
<tbody>
<tr>
<td><?php echo $i;?></td>
<td><?php echo $b['namafile'];?></td>
<td><?php echo $b['versi'];?></td>
<td><?php echo $b['alamat'];?></td>
<td><?php echo $b['log_data'];?></td>
<td><?php echo $b['db_update'];?></td>
</tr>
</tbody>
<?php
$i++;
}
?>
</table>
</div>
