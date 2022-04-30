#include<conio.h>
#include<iostream.h>
void test(int x)
{
	try
	{
		if(x==1)
		 throw x;
		else if(x==0)
		 throw 'x';
		else if(x==-1)
		 throw 1.0;
		 cout<<"end of try block";
	}
	catch(char c)
	{
		cout<<"cought a character";
	}
	catch(int m)
	{
		cout<<"cought an int";
	}
	catch(double d)
	{
		cout<<"cought a double";
	}
	cout<<"end of try-catch";
}
void main()
{
	cout<<"multiple catch";
	cout<<"x==1";
	test(1);
	cout<<"x==0";
	test(0);
	cout<<"x==-1";
	test(-1);
	cout<<"x==2";
	test(2);
	getch();
}