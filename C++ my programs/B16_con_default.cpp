// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;
//default_constructor
class test{
    int a,b;                 
    public:

    test(){
        a=0;
        b=0;
    }
    void show(){
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b;

    }
};

 int main(){
     //clrscr();

    test t;
    t.show();
    // getch();

 }