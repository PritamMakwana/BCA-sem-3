// #include<iostream.h>
// #include<conio.h>

#include<iostream>
using namespace std;

class clg
{
       public:
       int a;
       void getdata()
       {
	 cout<<"Enter value for a: "<<endl;
	 cin>>a;
       }

       void print()
       {
       cout<<"Value of a is: "<<a;
       }
};

int main(){
//clrscr();
clg c;
c.getdata();
c.print();
//getch();
}






