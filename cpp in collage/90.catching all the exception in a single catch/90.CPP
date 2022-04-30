#include<conio.h>
#include<iostream.h>
void test(int x)
{
	try
	{
		if(x==0)
		  throw x;
		if(x==-1)
		 throw'x';
		if(x==1)
		 throw 10;
	}
	catch(...);
	{
		cout<<"caught an exception";
	}
}
void main()
{
	cout<<"testing single catch";
	test(-1);
	test(0);
	test(1);
	getch();
}