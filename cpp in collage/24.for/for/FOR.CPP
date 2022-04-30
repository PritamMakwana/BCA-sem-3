#include<conio.h>
#include<iostream.h>
class test
{

	public:
	  void testing()
	  {
		int i=1,fact=1,no=0;
		cout<<"enter any number=";
		cin>>no;
		for(i=1;i<=no;i++)
		{
			fact=fact*i;
		}
		cout<<"factorial of a given num is"<<fact;
	   }
};
void main()
{
	test t;
	t.testing();
	getch();
}