#include<conio.h>
#include<iostream.h>
class areaofrectengle
{
	clrscr();
	int area,length,breadth;
	public:
	  void getdata();
	  void calculation();
};
void areaofrectengle::getdata()
{
	cout<<"\nenter value of length=";
	cin>>length;
	cout<<"\nenter value of breadth=";
	cin>>breadth;

}
void areaofrectengle::calculation()
{
	area=length*breadth;
	cout<<"\narea of rectengle is="<<area;
}
void main()
{
	areaofrectengle s;
	s.getdata();
	s.calculation();
	getch();
}
