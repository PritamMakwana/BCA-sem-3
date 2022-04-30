<?php
 include('A5_conn.php');
 
 if(isset($_POST["upsave"]))
 {
	 $fid=$_POST["fid"];
     $fn=$_POST["fn"];
     $fmo=$_POST["fmo"];
     $fe=$_POST["fe"]; 
     $fadd=$_POST["fadd"];
	 $fpass=$_POST["fpass"];
 };
 
 //UPDATE `form_school` SET `f_id`=[value-1],`f_fname`=[value-2],`f_mobile`=[value-3],
// `f_email`=[value-4],`f_add`=[value-5],`f_pass`=[value-6] WHERE 1
 $upsql="update form_school set f_fname='$fn', f_mobile='$fmo', f_email='$fe', f_add='$fadd', f_pass='$fpass'
 WHERE f_id='$fid'";
 
 if(mysqli_query($con,$upsql)or die("error view".mysqli_errno($con)))
	 {
		 header('Location:A5_getform.php');
	 }
	 else{
		 
	    echo "Data not updated";
	 }
 
 ?>