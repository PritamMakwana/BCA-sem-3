// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class number{
    int a;
    static int count;
    public:
    void shownum(){
    count++; //3
    a=count;
    cout<<a<<endl; //3
    }
   static void showcout(){
       cout<<count<<endl;
   }
};

int number::count;

int main(){
    //clrscr();
    number n1,n2,n3;
    number::showcout();  //0
    n1.shownum();        //1
    n2.shownum();        //2
    n3.shownum();        //3
    number::showcout();  //3
    number::showcout();  //3
    number::showcout();  //3
    //getch();
}



