<?php


$con=mysqli_connect("localhost","root","","db_register");


if($con)
    {
        echo " database connction done";
    }
    else{
        echo " database error connction";
    }
?>


