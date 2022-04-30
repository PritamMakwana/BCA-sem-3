#include<conio.h>
#include<iostream.h>
class sum
{
	int a,b,c;

	public:
	  void getdata();
	  void calculation();
};
void sum::getdata()
{
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;

}
void sum::calculation()
{
	c=a+b;
	cout<<"sum is"<<c;
}
void main()
{
	sum s;
	s.getdata();
	s.calculation();
	getch();
}
