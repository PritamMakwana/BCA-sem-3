// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

double area(double r);
double area(double b,double h);

int main(){
  double r,b,h;
    //clrscr()
 cout<<"Enter radius :";
 cin>>r;
 cout<<"Area of circle "<<area(r)<<endl;
 cout<<"Enter b & h :";
 cin>>b>>h;
 cout<<"Area of triangle "<<area(b,h);
 //getch();
}

double area(double r){
    double a=3.14*r*r;
    return a;
}

double area(double b,double h){
    double a=0.5*b*h;
    return a;
}


