#include<conio.h>
#include<iostream.h>
class test
{
	int a;
	public:
	 test()
	 {
		a=0;

	 }
	 test(int x=5)
	 {
		a=x;
	 }
	 void disp()
	 {
		cout<<"a is="<<a;
	 }
};
void main()
{
	test t1;
	t.disp();
	getch();
}