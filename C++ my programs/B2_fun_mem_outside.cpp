// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class Example{
    public:
    void print();
};

void Example::print(){

    cout<<"hello";
}
int main(){
    //clrscr();
    Example e;
    e.print();
    //getch();
    return 0;
}
