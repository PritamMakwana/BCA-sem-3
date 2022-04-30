<?php
 include('A5_conn.php');//connect file database

 if(isset($_POST["save"]))
 {
     $sname=$_POST["fname"];
     $smobile=$_POST["fmobile"];
     $semail=$_POST["femail"]; 
     $saddress=$_POST["faddress"];
	 $spass=$_POST["fpass"];
 };

 // $sinsert="INSERT INTO `form_school` (`f_id`, `f_name`, `f_mobile`, `f_email`, `f_pass`, `f_address`) 
  //VALUES (null,'$sname','$smobile','$semail','$spass','$saddress');"
  
  $sinsert="insert into form_school values(null,'$sname','$smobile','$semail','$saddress','$spass')";

 $ssql=mysqli_query($con,$sinsert)or die("error insert fun".mysqli_errno()); //error

 if($ssql){
      header('Location:A5_getform.php');
}
else{
	 echo"error insert ";
	}

 ?>
 
