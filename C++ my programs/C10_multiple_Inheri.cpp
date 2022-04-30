//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;

//multiple inheritance

class A{
    public:
    int a;
    A(){
          a=5;
          cout<<"Constructor of A "<<endl;
    }
};

class B{
    public:
    int b=10;
    B(){
          cout<<"Constructor of B "<<endl;
    }
};

class C: public B,public A{
    public:
    int c=20;
    C(){
        cout<<"Constructor of C "<<endl;
    }
};

int main(){
    C obj;

    cout<<"a = " <<obj.a<<endl;
    cout<<"b = " <<obj.b<<endl;
    cout<<"a = " <<obj.c<<endl;
    // getch();

}