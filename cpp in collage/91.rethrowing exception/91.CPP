#include<conio.h>
#include<iostream.h>
void divide(double x,double y)
{
	cout<<"inside the function";
	try
	{
		if(y==0.0)
		 throw y;
		else if
		 cout<<"division="<<x/y;
	}
	catch(double)
	{
		cout<<"cought double inside function";
		throw;
	}
	cout<<"end of function":
}
void main()
{
	cout<<"inside main";
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
	}
	catch(double)
	{
		cout<<"caught inside main";
	}
   }	getch();
}