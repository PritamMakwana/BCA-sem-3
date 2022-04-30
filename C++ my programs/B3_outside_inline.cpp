// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;
 
 class demoinline{
    int a;
    public:
    void getdata();
    void show();
};

inline void demoinline::getdata(){
    int n;
    a=n;
}
inline void demoinline::show(){
    cout<<"value of a="<<a;
}

int main(){
    //clrscr();
    demoinline obj;
    obj.getdata();
    obj.show();
    //getch();
}