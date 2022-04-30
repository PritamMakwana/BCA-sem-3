#include<conio.h>
#include<iostream.h>
void main()
{
	int a,b;
	cout<<"enter value of a&b=";
	cin>>a;
	cin>>b;
	int x=a-b;
	try
	{
		if(x!=0)
		{
			cout<<"result is="<<a/x;
		}
		else
		{
			throw(x);
		}
	}
	catch(int i)
	{
		cout<<"exception cought,x="<<x;
	}
	getch();
}
