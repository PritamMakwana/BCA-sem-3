// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;

class demo
{
   public:
     int a,b,c;
     void getdata(){
     cout<<"Enter a: "<<endl;
     cin>>a;
     cout<<"Enter b: "<<endl;
     cin>>b;
     }
     void sum(){
     c=a+b;
     cout<<"Sum of a & b is: "<<c;
     }

};
int main(){
  //clrscr();
  demo d;
  d.getdata();
  d.sum();
  //getch();
  }















