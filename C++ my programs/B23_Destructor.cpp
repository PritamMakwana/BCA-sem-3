// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;
//Destructors

class test{
    public:
    test()
    {
        cout<<"Object created"<<endl;
    }

    ~test(){
        cout<<"object Deleted "<<endl;
    }

};

int  main(){
    test t1,t2;
    {
        cout<<"creating object in a block "<<endl;
        test t3;
        cout<<"object will be destroyed when block ends "<<endl;
        cout<<"press any key to exit "<<endl;
        //getch();
   }
    //getch();
}