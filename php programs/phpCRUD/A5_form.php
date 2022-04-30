<?php
 include('A5_conn.php');//connect file database
?>
<html>
<body>
    <form method="POST" action="A5_insert_form.php">
     
    <label>Name: </label><br>
    <input type="text" name="fname"><br>

    <label>Mobile: </label><br>
    <input type="text" name="fmobile"><br>

    <label>Email: </label><br>
    <input type="text" name="femail"><br>

    <label>Password: </label><br>
    <input type="password" name="fpass"><br>

    <label>Address </label><br>
    <textarea rows="5" cols="20" type="" name="faddress"></textarea><br>

    <input type="submit"  value="save" name="save"> 

</from>

</body>
</html>