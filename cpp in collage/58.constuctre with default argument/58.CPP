#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	  test(int x,int y=5);
	  void display();
};
test::test(int x,int y)
{
	a=x;
	b=y;
}
void test::display()
{
	cout<<a<<b;
}
void main()
{
	test t1(10);
	t1.display();
	getch();
}