<?php
 include('A5_conn.php');//connect file database

?>
<html>
<head>
       <title>form</title>
</head>
<body>
    <table border="2">
        <tr>
              <th>rollno</th>
              <th>Name</th>
              <th>mobile</th>
              <th>email</th>
              <th>Address</th>
              <th>action delete</th>
              <th>action update</th>
        </tr>
        <?php
$sql="select * from form_school";
$res=mysqli_query($con,$sql) or die("error view".mysqli_errno());
while($row=mysqli_fetch_array($res)){
	?>
        <tr>
         <td><?php echo  $row[0]; ?></td>
        <td><?php echo  $row[1]; ?></td>
         <td><?php echo  $row[2]; ?></td>
          <td><?php echo  $row[3]; ?></td>
          <td><?php echo  $row[4]; ?></td>
          <td><a href="A5_delete.php ?id=<?php echo $row[0];?>">delete</a></td>
          <td><a href="A5_update.php ?id=<?php echo $row[0];?>">update</a></td>

        </tr>
		
<?php }?>

 
</body>
</html>

