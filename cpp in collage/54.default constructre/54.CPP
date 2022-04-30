#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	test()
	{
		a=10;
		b=10;
	}
	void display();
};
void test::display()
{
	cout<<"value of a="<<a;
	cout<<"value of b="<<b;
}
void main()
{
	test t;
	t.display();
	getch();
}