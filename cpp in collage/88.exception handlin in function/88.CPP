#include<conio.h>
#include<iostream.h>
void test(int x,int y,int z)
{
	cout<<"we are inside function";
	if((x-y)!=0)
	{
		int r=z/(x-y);
		cout<<"result="<<r;
	}
	else
	{
		throw(x-y);
	}
}
void main()
{
	try
	{
		cout<<"we are inside try block";
		test(10,20,30);
		test(10,10,20);
	}
	catch(int i)
	{
		cout<<"cought the exception";
	}
	getch();

}