// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class friendex
{
    int a,b;
    public:
    void setvalue(int x,int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<a<<endl<<b<<endl;
    }

    friend void sum(friendex f);
    };

    void sum(friendex f){
        int s= f.a + f.b;
        cout<<"Sum = "<<s;
     }

    int main(){
        friendex f;
        f.setvalue(100,200);
        f.display();
        sum(f);
        //getch();
    }