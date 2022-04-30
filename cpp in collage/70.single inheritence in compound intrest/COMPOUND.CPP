#include<iostream.h>
#include<conio.h>
class a
{
	public:
	  int r,n;
	  void getdata()
	   {

		cout<<"enter r=";
		cin>>r;
		cout<<"enter n=";
		cin>>n;
	   }

};
class b:public a
{
	public:
	 float i;
	 void simple()
	 {
		i=(1+r/n);
	 }
	 void disp()
	 {
		cout<<"ans is=";
		cout<<i;
	 }
};
void main()
{
	clrscr();
	b B;
	B.getdata();
	B.simple();
	B.disp();
	getch();
}