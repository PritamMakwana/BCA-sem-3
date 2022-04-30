// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;
// overloading Binary Operator

class numbers
{
    float a,b;
    public:
    void input(int x,int y){
        a=x;
        b=y;
    }

    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

    numbers operator + (numbers n1);

};

numbers numbers :: operator +(numbers n1){
    numbers n;
    n.a=a+n1.a;
    n.b=b+n1.b;
    return n;
} 

int main(){
    numbers n1;
    n1.input(10,20);
    n1.show();

    numbers n2;
    n2.input(100,200);
    n2.show();
    numbers n3= n1 +n2 ;
    cout<<"After adding n1 and n2 "<<endl;
    n3.show();
    // getch();

}

