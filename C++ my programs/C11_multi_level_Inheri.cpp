//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;

//multi-level Inheritance

class A{
    public:
    void dispA(){
        cout<<"display of A"<<endl;
    }
};

class B:public A{
    public:
    void dispB(){
        cout<<"display of B"<<endl;
    }
};

class C:public B{
    public:
    void dispC(){
        cout<<"display of C"<<endl;
    }
};

int main(){
    C obj;

    obj.dispA();
    obj.dispB();
    obj.dispC();

    // getch();
}