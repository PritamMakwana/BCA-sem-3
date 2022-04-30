#include<conio.h>
#include<iostream.h>
class areaofsquare
{
	clrscr();
	int area,side;
	public:
	  void getdata();
	  void calculation();
};
void areaofsquare::getdata()
{
	cout<<"\nenter value of side=";
	cin>>side;


}
void areaofsquare::calculation()
{
	area=side*side;
	cout<<"\narea of square is="<<area;
}
void main()
{
	areaofsquare s;
	s.getdata();
	s.calculation();
	getch();
}
