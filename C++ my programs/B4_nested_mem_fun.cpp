// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class member{
    public:
    int a;
    void get();
    int square(int a);
    void display();
};

void member::get(){
    cout<<"Enter no: ";
    cin>>a;
}

int member::square(int a){
    return a*a;
}

void member::display(){
    int s=square(a);
    cout<<"square: "<<s;
}
int main(){
    //clrscr();
    int x;
    member m;
    m.get();
    m.square(x);
    m.display();
    //getch();
}
