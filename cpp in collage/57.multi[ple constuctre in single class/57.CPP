#include<conio.h>
#include<iostream.h>
class test
{
	int m,n;
	public:
	  test();
	  test(int,int);
	  test(test&t);
	  void display();
};
test::test()
{
	m=0;
	n=0;
}
test::test(int x,int y)
{
	m=x;
	n=y;
}
test::test(test&t)
{
	m=t.m;
	n=t.n;
}
void test::display()
{
	cout<<m<<n;
}
void main()
{
	test t1;
	t1.display();
	test t2(10,20);
	t2.display();
	test t3(t1);
	t3.display();
	getch();
}