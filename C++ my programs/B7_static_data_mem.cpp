// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class staticex
{
    int a;
    static int b;  //0
    public:
    void getval(int x){
     a=x;
     b++;   //2
     cout<<a<<endl;
    }
    void getstatic(){
        cout<<b<<endl;     //2
    }
};
int staticex::b;
int main(){
    //clrscr();
    staticex s1,s2;
    cout<<"static value for s1"<<endl;
    s1.getstatic();     //0
    cout<<"static value for s2"<<endl;
    s2.getstatic();      //0
    cout<<"value of s1"<<endl;
    s1.getval(111);
    cout<<"value of s2"<<endl;
    s2.getval(222);
    cout<<"static value for s1"<<endl;
    s1.getstatic();
    cout<<"static value for s2"<<endl;
    s2.getstatic();
    //getch();


}