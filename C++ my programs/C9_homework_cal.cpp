//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;


class cal{

public:
int a,b;
void setdata(){
cout<<endl;
cout<<" Enter A value: ";
cin>>a;
cout<<" Enter B value: ";
cin>>b;

cout<<endl<<"\t \t === CALCULETER ==="<<endl<<endl;
 }
};

class sum:public cal{
public:
void getdata(cal c){
cout<<"\t \t sum of A and B is : ";
cout <<c.a+c.b<<endl;
}
};

class sub:public cal{
public:
void getdata(cal c){
cout<<"\t \t subtraction of A and B is: ";
cout<<c.a-c.b<<endl;
}
};

class mul:public cal{
public:
void getdata(cal c){
cout<<"\t \t multipl of A and B is: ";
cout<<c.a*c.b<<endl;
}
};

class diva:public cal{
public:
void getdata(cal c){
cout<<"\t \t divition of A and B is: ";
cout<<c.a/c.b<<endl;
}
};


int main(){
// clrscr();
cal c;
sum objs1;
sub objsb2;
mul objm3;
diva objd4;

c.setdata();
objs1.getdata(c);
objsb2.getdata(c);
objm3.getdata(c);
objd4.getdata(c);

// getch();
}