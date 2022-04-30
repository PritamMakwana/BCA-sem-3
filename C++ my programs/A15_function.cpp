// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class computer{
    public:
    void printdata();  //declaration or pototype
    void getdata();    
};
void computer::printdata(){
    cout<<"Hello"<<endl;
    cout<<"We are here to define function "<<endl;
    cout<<"Thank you "<<endl;
}
void computer::getdata(){  //defintion
    cout<<"Bye";
}
int main(){
    //clrscr();
    computer c;
    c.printdata();
    c.getdata();
   // getch();
}
