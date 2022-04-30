#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	 void getdata();
	 void display();
	 void sum(test,test);
};
void test::getdata()
{
	cout<<"enter a=";
	cin>>a;
	cout<<endl;
	cout<<"enter b=";
	cin>>b;
	cout<<endl;
}
void test::display()
{
	cout<<"a="<<a;
	cout<<"b="<<b;
}
void test::sum(test t1,test t2)
{
	a=t1.a+t2.a;
	b=t2.b+t2.b;
}
void main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3.sum(t1,t2);
	t1.display();
	t2.display();
	t3.display();
	getch();
}