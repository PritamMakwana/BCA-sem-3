<?php
 include('A5_conn.php');

 $id=$_GET['id'];

 $dsql="delete from form_school where f_id='$id'";
 echo $id;

 if(mysqli_query($con,$dsql)){

 header('Location:A5_getform.php');
 }
?>

