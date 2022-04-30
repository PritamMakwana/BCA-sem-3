// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;
// overloading of operators using friend function
// overload binary * Operator


class numbers
{
    float a,b;
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

    friend numbers operator * (numbers n1,numbers n2);

};

numbers operator *(numbers n1,numbers n2){
    numbers n;
    n.a=n1.a*n1.a;
    n.b=n1.b*n1.b;
    return n;
} 

int main(){
    numbers n1;
    n1.get(5,7);
    n1.display();

    numbers n2;
    n2.get(2,3);
    n2.display();

    numbers n3 = n1 * n2 ; //n3= n1. * (n2);
    cout<<"After multiplying n1 and n2 "<<endl;
    n3.display();
    // getch();

}

