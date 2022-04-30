#include<conio.h>
#include<iostream.h>
class B;
class A
{
	int x;
	public:
	   void getdata()
	   {
		cout<<"enter value of x=";
		cin>>x;
	   }
	   friend void max(A,B);

};
class B
{
	int y;
	public:
	  void getdata()
	  {
		cout<<"enter value of y=";
		cin>>y;
	  }
	  friend void max(A,B)
};
void max(A a,B b)
{
	if(a.x>b.y)
	   cout<<"max value="<<a.x;
	else
	   cout<<"max value="<<b.y;
}
void main()
{
	A a;
	a.getdata();
	B b;
	b.getdata();
	max(a,b);
	getch();
}