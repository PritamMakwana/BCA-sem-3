//  #include<iostream.h>
//  #include<conio.h>
 #include<iostream>
 using namespace std;
 //constructor in derived class

 class grandparent{
     public:
     grandparent()
     {
         cout<<"Grandparent"<<endl;
     }
 };
 class parent:public grandparent
 {
     public:
     parent(){
         cout<<"Parent"<<endl;
     }
 };
 class child:public parent{
     public:
     child(){
         cout<<"child class"<<endl;
     }
 };
 int main(){
    //  clrscr()
     child c;
    //  getch();
 }
