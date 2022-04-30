#include<conio.h>
#include<iostream.h>
class minus
{
	int a,b,c;

	public:
	  void getdata();
	  void calculation();
};
void minus::getdata()
{
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;

}
void minus::calculation()
{
	c=a-b;
	cout<<"ans is="<<c;
}
void main()
{
	minus s;
	s.getdata();
	s.calculation();
	getch();
}
