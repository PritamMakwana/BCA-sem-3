#include<conio.h>
#include<iostream.h>
class areaofcircle
{
	float area;
	int radius;
	public:
	  void getdata();
	  void calculation();
};
void areaofcircle::getdata()
{
	cout<<"\nenter value of radius=";
	cin>>radius;

}
void areaofcircle::calculation()
{
	area=3.14*radius*radius;
	cout<<"\narea of circle is="<<area;
}
void main()
{
	areaofcircle s;
	s.getdata();
	s.calculation();
	getch();
}
