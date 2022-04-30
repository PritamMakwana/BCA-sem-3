#include<conio.h>
#include<iostream.h>
class space
{
	int x,y,z;
	public:
	  void getdata(int,int,int);
	  void display();
	  void operator-();
};
void space::getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space::display()
{
	cout<<"x="<<x;
	cout<<"y="<<y;
	cout<<"z="<<z;
}
void space::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
void main()
{
	clrscr();
	space s;
	s.getdata(10,-20,30);
	s.display();
	-s;
	s.display();
	getch();
}