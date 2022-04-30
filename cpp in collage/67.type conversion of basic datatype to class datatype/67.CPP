#include<iostream.h>
#include<conio.h>
class test
{
	int x,f;
	public:
	 test()
	 {
		x=0;
		f=0;
	 }
	 test(float m)
	 {
		x=2;
		f=m;
	 }
	 void show()
	 {
		cout<<"x="<<x<<endl;
		cout<<"f="<<f;
	 }
};
void main()
{
	clrscr();
	test t;
	t=1;
	t.show();
	t=2.5;
	t.show();
	getch();
}