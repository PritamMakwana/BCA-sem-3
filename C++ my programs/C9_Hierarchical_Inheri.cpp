//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;

//Hierarchical inheritance

class A{
    public:
    int x,y;
    void getdata(){
        cout<<endl<<"Enter x and y ";
        cin>>x>>y;
    }
};


class B :public A{
    public:
    void product(){
        cout<<"Product is "<<x*y;
    }
};

class C :public A{
    public:
    void sum(){
        cout<<"sum is "<<x+y;
    }
};

int main(){
    B objb;
    C objc;

    objb.getdata();
    objb.product();
    objc.getdata();
    objc.sum();

    // getch();

}