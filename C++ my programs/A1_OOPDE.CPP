#include<iostream>
using namespace std;
//#include<conio.h>

class student
{
    public:
	   int a;
	   void print()
	   {
	    cout<<"Value of a is "<<a;
	   }
};
int main()
{
  student s;
  s.a=10;
  s.print();
 // getch();
}
