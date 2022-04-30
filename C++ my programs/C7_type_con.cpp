//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;
//one class to another class type convertion used contructor (copy)

class shop1{
    int code,qty;
    float price;
    public:

    shop1(int c,int q,float p){
        code=c;
        qty=q;
        price=p;
    }

    int getcode(){
        return code;
    }
   
   int getqty(){
       return qty;
   }
  float getprice(){
      return price;
  }


   void display(){
       cout<<"shop1 details "<<endl;
       cout<<"item code "<<code<<endl;
       cout<<"quantity "<<qty<<endl;
       cout<<"price "<<price<<endl;
   }
};

class shop2{
  int code;
  float amount;
  public:

  shop2(int c,float a){
      code=c;
      amount=a;
  }
  void display(){
      cout<<"shop2 details"<<endl;
      cout<<"item code "<<code<<endl;
      cout<<"total amount "<<amount<<endl;
  }
 
 shop2(shop1 s1){
     code=s1.getcode();
     amount=s1.getqty()*s1.getprice();
 }

};

int main(){
    shop1 s1(111,5,24.5);
    shop2 s2=s1; //shop2 s2(s1);
  s1.display();
  s2.display();
//   getch();
}

