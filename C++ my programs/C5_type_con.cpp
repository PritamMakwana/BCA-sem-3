//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;
//Basic type to class type convertion used contructor

class time{
    int hours,minutes;
    public:

    time(){
        hours=minutes=0;
    }

    time(int t){
        hours=t/60;
        minutes=t%60;
    }
  
     void display(){
          cout<<"hours= "<<hours<<endl;
          cout<<"minutes= "<<minutes<<endl;
      }

};

int main(){
    // clrscr();
    int t;
    cout<<"Enter time in minutes ";
    cin>>t;
    time t1=t;   //time t1(t);
    t1.display();
    // getch();
}