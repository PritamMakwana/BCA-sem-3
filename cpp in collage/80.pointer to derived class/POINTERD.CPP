#include<conio.h>
#include<iostream.h>
class alpha
{
	public:
	int a;
	void displaya()
	{
	cout<<"a"<<a;
	}
};
class beta:public alpha
{
	public:
	int b;
	void displayb()
	{
	cout<<"b"<<b;
	}
};
void main()
{
	alpha a1;
	alpha *ptr=&a1;
	ptr->a=100;
	ptr->displaya();
	beta b1;
	ptr=&b1;
	((beta *)ptr)->b=200;
	((beta *)ptr)->displayb();
	getch();
}
