//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;
//class type to basic type convertion used function

class product{
    int qty;
    float price;

    public:
    product (int q,float p){
        qty =q;
        price =p;
    }
  
  void display(){
      cout<<" quantity is "<<qty<<endl;
      cout<<"price is "<<price<<endl;
  }

  operator float(){
      return qty*price;
 }
    
};

int main(){
    product p(10,20);
    p.display();
    float amount;
    amount=p;//p
    cout<<" total amount ="<<amount ;
    // getch();

}