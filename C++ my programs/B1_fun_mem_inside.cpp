// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class book{
    int id;
    char nm[20];
    float price;
    
    public:
    void input(){
        cout<<"Enter book id ";
        cin>>id;
        cout<<"Enter book name";
        cin>>nm;
        cout<<"enter book price";
        cin>>price;
    }
    
    void display(){
        cout<<"book deltail"<<endl;
        cout<<"book  id "<<id<<endl;
        cout<<"book name "<<nm<<endl;
        cout<<"book price "<<price<<endl;
    }

};

int main(){
    //clrscr();
    book b;
    b.input();
    b.display();
    //getch();
    return 0;


}