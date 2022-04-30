//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;
//single Inheritance

class base{
    public:
    int x;

    void getdata(){
        cout<<"Enter value of x ";
        cin>>x;
    }
};

class derived : public base{
int y;
public:

void get(){
    cout<<"Enter value of y ";
    cin>>y;
}
void product(){
    cout<<"product is "<<x*y;
}

};

int main(){
    derived d;
    d.getdata();
    d.get();
    d.product();
    // getch();
}