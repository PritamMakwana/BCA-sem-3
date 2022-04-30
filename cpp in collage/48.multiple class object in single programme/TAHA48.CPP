#include<conio.h>
#include<iostream.h>
class a
{
	int a1,a2;
	public:
	  void getdata();
	  void display();
};
class b
{
	int b1,b2;
	public:
	  void getdata();
	  void display();
};
void a::getdata()
{
	cout<<"enter a1=";
	cin>>a1;
	cout<<"enter a2=";
	cin>>a2;
}
void a::display()
{
	cout<<"a1 is="<<a1;
	cout<<"a2 is="<<a2;
}
void b::getdata()
{
	cout<<"enter b1=";
	cin>>b1;
	cout<<"enter b2=";
	cin>>b2;
}
void b::display()
{
	cout<<"b1 is="<<b1;
	cout<<"b2 is="<<b2;
}
void main()
{
	a obja;
	b objb;
	obja.getdata();
	objb.getdata();
	obja.display();
	objb.display();
	getch();
}
