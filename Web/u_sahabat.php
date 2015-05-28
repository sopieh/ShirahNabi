<br><br>
<h1>Kisah Sahabat Nabi</h1>
<br><br><br>

<div id="ad9">
<div id="ad10">

<form method="POST" action="simpan2.php" enctype="multipart/form-data">
<table style="width:100%">
<tr>
<td>Judul</td>
<td><input type="text" name="judul" placeholder="Judul" required></td>
</tr>
<tr>
<td>Gambar</td>
<td><input type="file" name="gambar" required></td>
</tr>
<tr>
<td>Video</td>
<td><input type="text" name="video" placeholder="URL Video" required></td>
</tr>
<tr>
<td>Isi</td>
<td><textarea type="text" name="isi" placeholder="Isi" required></textarea></td>
</tr>
<tr>
<td></td>
<td><button type="submit">Save</button></td>
</tr>
</table>
</form>
</div>
</div>


<br><br><br>
Tabel Kisah Sahabat
<br><br>
<div id="u1">

<center>
<table border="1">
<thead>
<tr>
<th>No.</th>
<th>Judul</th>
<th>Gambar</th>
<th>Video</th>
<th>Isi</th>
<th>Option</th>
</tr>
</thead>
<tbody>
<?php 
include  'koneksi.php';  

$sql = "select * from sahabat order by id_sahabat";
$no = 1;
foreach ($sh->query($sql) as $data) :
?>
<tr>
<td><?php echo $no++; ?></td>
<td><?php echo $data['judul']; ?></td>
<td><img src="gambar/<?php echo $data['gambar']; ?>" ></td>
<td><iframe width="900" height="500" src="<?php echo $data['video'];?>" autofullscreen></iframe></td>
<td><?php echo substr($data['isi'], 0, 100); echo "...";?></td>
<td align="center">
<a href="edit2.php?id=<?php echo $data['id_sahabat']; ?>"><i class="fa fa-pencil-square-o" style="color:#000033; font-size:20px;"></i></a>
<a href="hapus.php?id=<?php echo $data['id_sahabat']; ?>"><i class="fa fa-trash-o" style="color:#000033; font-size:20px;"></i></a>
<a href="lihat1.php?id=<?php echo $data['id_sahabat']; ?>"><i class="fa fa-leanpub" style="color:#000033; font-size:20px;"></i></a>

</td>
</tr>
<?php
endforeach;
?>
</tbody>
</div>
</table>
</center>
</div>



