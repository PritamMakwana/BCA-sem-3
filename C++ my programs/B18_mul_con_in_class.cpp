// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;
//multiple contructor in a class

class box{

double height,width,depth;
public:
box(){
    height=width=depth=0;
}

box(double lenght){
    height=width=depth=lenght;
}

box(double h,double w, double d){
    height=h;
    width=w;
    depth=d;
}

void show(){
    cout<<" height "<<height;
    cout<<" width "<<width;
    cout<<" depth "<<depth<<endl;
}


};

int main(){
    box b;
    box b1(16);
    box b2(5,7,9);
    b.show();
    b1.show();
    b2.show();
    //getch();


}