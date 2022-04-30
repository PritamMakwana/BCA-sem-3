//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;

//Hybrid Inheritance

class A{                         //hierarchical
    public:
    int x;
};

class B:public A{
    public:

    B(){
        x=10;
    }
};

class C{
    public:
       int y;
    C(){
        y=4;
    }
};

//multiple
class D: public B,public C
{
    public:

    void sum(){
        cout<<"sum "<<x+y;
    }

};

int main(){
    D obj;

    obj.sum();

    // getch();
}
