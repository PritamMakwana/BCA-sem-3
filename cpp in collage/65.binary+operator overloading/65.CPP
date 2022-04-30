#include<conio.h>
#include<iostream.h>
class complex
{
	float x,y;
	public:
	 complex()
	 {

	 }
	 complex(float real,float img)
	 {
		x=real;
		y=img;
	 }
	 complex operator+(complex c);
	 void display();
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.x=y+c.x;
	temp.y=y+c.y;
	return(temp);
}
void complex::display()
{
	cout<<x<<"+"<<y;
	cout<<endl;
}
void main()
{
	clrscr();
	complex c1,c2,c3;
	c1=complex(2.5,3.5);
	c2=complex(1.6,2.7);
	c3=c1+c2;
	c1.display();
	c2.display();
	c3.display();
}