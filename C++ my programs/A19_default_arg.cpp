// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

void sum(int a, int b, int c=0,int d=0);
void mul(int a,int b,int c=1);

int main(){
    //clrscr();
    sum(10,20,30,40);
    sum(30,40,50);
    sum(100,200);
    mul(2,3,4);
    mul(4,5);
    //getch();

}

void sum(int a,int b,int c,int d){
    int s=a+b+c+d;
    cout<<"Sum = "<<s<<endl;
}
void mul(int a,int b,int c){
    int m=a*b*c;
    cout<<"Multiplication = "<<m<<endl;
}

