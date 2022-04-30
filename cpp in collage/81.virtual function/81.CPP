#include<conio.h>
#include<iostream.h>
class base
{
	public:
	 virtual void display()
	 {
		cout<<"base class";
	 }
	 void show()
	 {
		cout<<"base class 2 ";
	 }
};
class derived:public base
{
	public:
	 void display()
	 {
		cout<<"derived class";
	 }
	 void show()
	 {
		cout<<"derived class 2";
	 }
};
void main()
{
	clrscr();
	base b;
	base *ptr;
	derived d;
	ptr=&b;
	ptr->display();
	ptr->show();
	ptr=&d;
	ptr->display();
	ptr->show();
	getch();
}