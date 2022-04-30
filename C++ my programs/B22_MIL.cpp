// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;
//Member Initialization List (MIL)
class test{
    int a,b;
    public:

    test(int x,int y):a(x),b(y)
    {
      cout<<"This is MIL "<<endl;
    }
   
   void display(){
       cout<<" a="<<a<<endl;
       cout<<" b="<<b;
   }
};

int main(){
    // clrscr();
    test t(11,22);
    t.display();
    // getch();
}