// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;
//concept of operator overloading
// To overload Unary-operator

class number 
{
    int a,b;
    public:

    void input(int x,int y){
        a=x;
        b=y;
    }

    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
   void operator -();
};

void number::operator-(){
    a=-a;
    b=-b;
}

int main(){

    number n1;
    n1.input(10,-20);
    n1.show();
    cout<<"After overloading"<<endl;
    -n1;  //-function call
    n1.show();
    //getch();
}