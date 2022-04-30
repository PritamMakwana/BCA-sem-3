#include<conio.h>
#include<iostream.h>
class base
{
	public:
	 virtual void func(int x=0)
	 {
		cout<<"base fuction called,x="<<x;
	 }
};
class derived:public base
{
	public:
	 virtual void func(int x)
	 {
		cout<<"derived function called,x="<<x;
	 }
};
void main()
{
	clrscr();
	derived d;
	base *ptr=&d;
	ptr->func();
	getch();
}