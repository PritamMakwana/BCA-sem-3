#include<conio.h>
#include<iostream.h>
class base
{
	public:
	 base()
	 {
		cout<<"constructor of base class";
	 }
	 virtual~base()
	 {
		cout<<"destructor of base class";
	 }
};
class derived:public base
{
	public:
	 derived()
	 {
		cout<<"constuctor of base class";
	 }
	 ~derived()
	 {
		cout<<"destructor of derived class";
	 }

};
void main()
{
	base *ptr;
	ptr=new derived;
	delete ptr;
	getch();
}