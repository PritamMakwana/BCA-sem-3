#include<conio.h>
#include<iostream.h>
#include<typeinfo.h>
class B
{
	public:
	  virtual void fun()
	  {

	  }
};
class D:public B
{

};
void main()
{
	D *dptr=new D;
	B *bptr=dptr;
	int a,*p;
	cout<<typeid(a).name();
	cout<<typeid(*p).name();
	cout<<typeid(bptr).name();
	cout<<typeid(dptr).name();
	getch();
}