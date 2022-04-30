#include<conio.h>
#include<iostream.h>
class base
{
	public:
	 void diplay()
	 {
		cout<<"base class function";
	 }
};
class derived:public base
{
	public:
	  void display()
	  {
		cout<<"derived class function";
	  }
};
void main()
{
	derived d;
	d.display();
	getch();2
}