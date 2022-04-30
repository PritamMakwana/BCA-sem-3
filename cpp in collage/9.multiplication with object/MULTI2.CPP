#include<conio.h>
#include<iostream.h>
class multiplication
{
	int a,b,c;

	public:
	  void getdata();
	  void calculation();
};
void multiplication::getdata()
{
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;

}
void multiplication::calculation()
{
	c=a*b;
	cout<<"ans is="<<c;
}
void main()
{
	multiplication s;
	s.getdata();
	s.calculation();
	getch();
}
