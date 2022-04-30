<html>
    <head>
        <style type="text/css">
       .first{
       border:solid 2px;
       text-align:center;
       margin: 5px;
       }
       .second{
       border:solid 2px;
       text-align:center;
       margin: 5px;
       }
        </style>
        <title>calculator</title>
</head>
    <body>
    

    <form action="" method="POST">
  <input class="first" type="number" name="x" id="fv" value="" placeholder="enter first value"><br>
  <input class="second"type="number" name="y" id="sv" value="" placeholder="enter second value"><br>
  <input class="plus" type="submit" name="a" value="+">
  <input class="min"type="submit" name="s" value="-">
  <input class="multi"type="submit" name="m" value="*">
  <input class="divi"type="submit" name="d" value="/">
  <br>

</from>
<hr>
<?php

error_reporting(0);

 class cul{
     public $a,$b;

     function __construct($m,$n){
        $this->a=$m;
        $this->b=$n;
     }
    
     function show(){

        if(isset($_POST['a']))
        {
         $e=$this->a+$this->b;
         echo "a+b = " .$e;
        }
        else if(isset($_POST['s'])){
            $e=$this->a-$this->b;
            echo "a-b = " .$e;         
        }
        else if(isset($_POST['m'])){
            $e=$this->a*$this->b;
            echo "a*b = " .$e;         
        }
        else if(isset($_POST['d'])){
            $e=$this->a/$this->b;
            echo "a/b = " .$e;        
        }      
     }
 };
 
 $x=$_POST['x'];
 $y=$_POST['y'];

 $obj=new cul($x,$y);
 $obj->show();
 ?>

</body>
 </html>