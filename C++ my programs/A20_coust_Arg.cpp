// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

int test(const int a,int b);

int  main(){
    //clrscr();
    cout<<"Sum = "<<test(10,20);
    //getch();
}

int test(const int a,int b){
    b=a+b;
    //a=a+b   error
    return b;
}