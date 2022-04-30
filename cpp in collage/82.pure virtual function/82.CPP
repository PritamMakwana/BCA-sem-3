#include<conio.h>
#include<iostream.h>
class base
{
	public:
	 virtual void display()=0;
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
class c:public base
{
	public:
	 void display()
	 {
		cout<<"display fun of c";
	 }
};
void main()
{

	base *ptr;
	derived d;
	ptr->show();
	ptr=&d;
	ptr->display();
	ptr->show();
	c c1;
	ptr=&c1;
	ptr->display();
	getch();
}