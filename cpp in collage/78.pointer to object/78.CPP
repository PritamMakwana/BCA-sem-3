#include<conio.h>
#include<iostream.h>
class test
{
	int a,b;
	public:
	 test(int x,int y)
	 {
		a=x;
		b=y;
	 }
	 void display()
	 {
		cout<<"a="<<a<<endl;
		cout<<"b="<<b;
	 }
};
void main()
{
	test t1(10,20);
	test *objptr=&t1;
	objptr->display();
	(*objptr).display();
	getch();
}