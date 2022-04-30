// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class book{
    int id;
    char name[10];
    float price;
   
   public:

   void input(){
       cout<<"Enter book id "<<endl;
       cin>>id;
       cout<<"Enter book name "<<endl;
       cin>>name;
       cout<<"Enter book price "<<endl;
       cin>>price;
   }
        

        void show(){
            cout<<"Book id is "<<id<<endl;
            cout<<"Book name is "<<name<<endl;
            cout<<"Book price is "<<price;
        }

};
        int main(){
            book b[3];


            for (int i=0;i<3;i++){
                b[i].input();
            }

            cout<<"Book information "<<endl;
          
          for(int i=0;i<3;i++){
              cout<<endl;
              b[i].show();
          }
          //getch();
        }
