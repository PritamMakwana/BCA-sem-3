#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	  test(int,int);
	  test(test&);
	  void display();
};
test::test(int x,int y)
{
	a=x;
	b=y;
}
test::test(test &temp)
{
	a=temp.a;
	b=temp.b;
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
	test t2(t1);
	t2.display();
	getch();
}