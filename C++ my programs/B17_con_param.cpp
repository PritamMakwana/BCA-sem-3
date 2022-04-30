// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;
//paramaterize constructors
class test{
    int a,b;
    public:

    test(int x,int y){
        a=x;
        b=y;
    }
  
  void show(){
      cout<<a<<endl<<b<<endl;
  }

};

int main(){
    // clrscr();
    test t1=test(10,20); //exptict call
    t1.show();

    test t2(111,222); //Implicit call
    t2.show();
    // getch();

}
