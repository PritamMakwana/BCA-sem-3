#include<conio.h>
#include<iostream.h>
class simpleint
{
	float p,r,n,si;
	public:
	  void getdata();
	  void calculation();
};
void simpleint::getdata()
{
	cout<<"enter value of p=";
	cin>>p;
	cout<<"enter value of r=";
	cin>>r;
	cout<<"enter value of n=";
	cin>>n;
}
void simpleint::calculation()
{
	si=p*r*n/100;
	cout<<"si is="<<si;
}
void main()
{
	simpleint s;
	s.getdata();
	s.calculation();
	getch();
}
