// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

void change(int &x,int &y);

int main(){

    //clrscr();
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Before swap: ";
    cout<<a<<","<<b<<endl;
    change(a,b);
    cout<<"After swap: ";
    cout<<a<<","<<b<<endl;
    //getch();
}


void change(int &x,int &y){
    x=x=10;
    y=y+10;
}

