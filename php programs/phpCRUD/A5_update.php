<html>
<body>
<?php
include('A5_conn.php');

$id=$_GET['id'];

$usql="select * from form_school where f_id='$id'";

$res=mysqli_query($con,$usql);

$raw=mysqli_fetch_array($res);

?>
<form action="A5_upwork.php" method="Post">
<label>Roll no:</label>
<input type="number" name="fid" value="<?php echo $raw[0];?>"/>

<label>name:</label>
<input type="text" name="fn" value="<?php echo $raw[1];?>"/>

<label>moblie:</label>
<input type="text" name="fmo" value="<?php echo $raw[2];?>"/>

<label>email:</label>
<input type="text" name="fe" value="<?php echo $raw[3];?>"/>

<label>address:</label>
<input type="text" name="fadd" value="<?php echo $raw[4];?>"/>

<label>password:</label>
<input type="text" name="fpass" value="<?php echo $raw[5];?>"/>

<input type="submit"  value="upsave" name="upsave"> 

</body>
</html>