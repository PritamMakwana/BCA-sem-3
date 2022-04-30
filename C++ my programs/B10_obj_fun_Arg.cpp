// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class numbers{
    int a,b;

    public:
   void input(int x,int y){
       a=x;  //100 10
       b=y;  //200 20
   }

   void sum(numbers n1,numbers n2){
       a=n1.a+n2.a;
       b=n1.b+n2.b;
   }

   void output(){
       cout<<a<<"  "<<b<<endl;
   }
};


int main(){
    numbers n1,n2,n3;
   
   n1.input(100,200);
   n2.input(10,20);
   n3.sum(n1,n2);
 
 n1.output();
 n2.output();
 n3.output();


}

