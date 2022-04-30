#include<conio.h>
#include<iostream.h>
class div
{
	int a,b,c;

	public:
	  void getdata();
	  void calculation();
};
void div::getdata()
{
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;

}
void div::calculation()
{
	c=a/b;
	cout<<"ans is="<<c;
}
void main()
{
	div s;
	s.getdata();
	s.calculation();
	getch();
}
