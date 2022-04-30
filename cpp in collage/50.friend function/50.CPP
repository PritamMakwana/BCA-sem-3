#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	  void getdata();
	  friend int sum(test);
};
void test::getdata()
{
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;

}
int sum(test t1)
{
	return(t1.a+t1.b);
}
void main()
{
	int c;
	test t1;
	t1.getdata();
	c=sum(t1);
	cout<<"sum is="<<c;
	getch();
}