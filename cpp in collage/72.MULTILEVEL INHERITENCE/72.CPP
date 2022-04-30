#include<conio.h>
#include<iostream.h>
class m
{
	protected:
	 int m;
	public:
	 void getm(int x)
	 {
		m=x;
	 }
};
class n
{
	protected:
	  int n;
	public:
	  void getn(int y)
	  {
		n=y;
	  }
};
class p:public m,public n
{
	public:
	  void display()
	  {
		cout<<"m="<<m<<endl;
		cout<<"n="<<n<<endl;
		cout<<"m*n="<<m*n;
	  }
};
void main()
{
	clrscr();
	p objp;
	objp.getm(10);
	objp.getn(5);
	objp.display();
	getch();
}