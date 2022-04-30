#include<conio.h>
#include<iostream.h>
class test
{
	int a;
	public:
	  void getdata();
	  void display();
	  void update()const;

};
void test::getdata()
{
	cout<<"enter a=";
	cin>>a;
}
void test::display()
{
	cout<<"value of a="<<a;
	a=a+10;
}
void test::update()const
{
	cout<<"now a="<<a;
}
void main()
{
	test t1;
	t1.getdata();
	t1.display();
	t1.update();
	t1.display();
	getch();
}