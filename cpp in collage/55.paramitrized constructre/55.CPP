#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	  test(int,int);
	  void display();
};
test::test(int x,int y)
{
	a=x;
	b=y;
}
void test::display()
{
	cout<<"value of a is="<<a;
	cout<<"value of b is="<<b;
}
void main()
{
	clrscr();
	test t1(10,20);
	t1.display();
	test t2=test(5,15);
	t2.display();
	getch();
}