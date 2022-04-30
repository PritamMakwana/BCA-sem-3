#include<conio.h>
#include<iostream.h>
class test
{
	static int a,b,sum;
	public:
	static void display();
};
void test::display()
{
	cout<<"enter a=";
	cin>>a;
	cout<<"enter b=";
	cin>>b;
	sum=a+b;
	cout<<"sum is="<<sum;
}
int test::a;
int test::b;
int test::sum;
void main()
{
	test t;
	test::display();
	getch();
}