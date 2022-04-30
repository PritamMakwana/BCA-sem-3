#include<conio.h>
#include<iostream.h>
class b
{
	virtual void fun()
	{

	}
};
class d:public b
{

};
void main()
{
	B *b new D;
	D *d=dyanmic_cast<D*>(b);
	if(d!=NULL)
	{
		cout<<"success";
	}
	else
	{
		cout<<"can not cast B* to D*";
	}
	getch();
}