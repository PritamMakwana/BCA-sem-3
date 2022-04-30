#include<conio.h>
#include<iostream.h>
class compare
{
	int a,b,c;
	public:
	 void getdata()
	 {
		cout<<"enter a=";
		cin>>a;
		cout<<"enter b=";
		cin>>b;
		cout<<"enter c=";
		cin>>c;

		if(a>b)
		{
			if(a>c)
			{
				cout<<"a is big";
			}
			else
			{
				cout<<"c is big";

			}
		}
		else
		{
			if(c>b)
			{
				cout<<"c is big";
			 }
			 else
			 {
				cout<<"b is big";
			 }
	 }	}

 };
 void main()
 {
	compare c;
	c.getdata();
	getch();
 }

