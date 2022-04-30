// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

int &min(int &,int &);

int main(){

    //clrscr();
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    min(a,b);
    //  cout<<"A = "<<a<<endl;
    //  cout<<"B = "<<b<<endl;
    if(a<b){
     cout<<"A = "<<a<<endl;
    }
    else{
      cout<<"B  = "<<b<<endl;
    }
    //getch();
}

int &min(int &x,int &y){
   if(x<y)
   return x;
   else
   return y;
}

