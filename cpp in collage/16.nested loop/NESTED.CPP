#include<conio.h>
#include<iostream.h>
class compare
{
	int a,b;
	public:
	 void getdata()
	 {
		cout<<"enter a=";
		cin>>a;
		cout<<"enter b=";
		cin>>b;
		if(a>b)
		   cout<<"a is big";
		else if(b>a)
		   cout<<"b is big";
		else
		   cout<<"both are equal";
	 }
 };
 void main()
 {
	compare c;
	c.getdata();
	getch();
 }
