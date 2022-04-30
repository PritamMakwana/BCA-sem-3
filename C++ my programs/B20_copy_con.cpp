// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;
//copy contructor 

class box{

float h,w,d;
public:

box(){
    h=w=d=0;
}

box(float h1,float w1, double d1){
    h=h1;
    w=w1;
    d=d1;
}

box(box &b){
    h=b.h;
    w=b.w;
    d=b.d;
}


void display(){
    cout<<" Height "<<h;
    cout<<" Width "<<w;
    cout<<" Depth "<<d;
    cout<<" Volume "<<h*w*d<<endl;
}


};

int main(){
    box b1;
    box b2(10,20,30);
    box b3(b2);
    cout<<" Box 1";
    b1.display();
    cout<<" Box 2";
    b2.display();
    cout<<" Box 3";
    b3.display();
    //getch();

}