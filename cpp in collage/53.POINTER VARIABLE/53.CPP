#include<conio.h>
#include<iostream.h>
class test
{
	int i;
	public:
	 void show();
};
void test::show()
{
	test t;
	int test::*ip=&test::i;
	cout<<"enter value of i=";
	cin>>t.*ip;
	cout<<"your have entered="<<t.*ip;
}
void main()
{
	test t1;
	t1.show();
	getch();
}