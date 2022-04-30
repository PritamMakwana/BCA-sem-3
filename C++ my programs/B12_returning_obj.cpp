// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class time{
    int h,m;
    public:

    void settime(int hrs ,int mnt){
        h=hrs;
        m=mnt;
    }

    void display(){
        cout<<"Hours "<<h<<endl;
        cout<<"Min "<<m<<endl;
    }
    friend time add(time t1,time t2);

};

time add(time t1,time t2 ){
    time t;
    t.m=t1.m+t2.m;
    t.h=t.m/60;
    t.m=t.m%60;
    t.h=t.h+t1.h+t2.h;
    return t;
}
int main(){
    time t1,t2,t3;

    t1.settime(1,30);
    t2.settime(2,40);
    t3=add(t1,t2);

    t1.display();
    t2.display();
    t3.display();

    //getch();
}