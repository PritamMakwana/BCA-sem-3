#include<conio.h>
#include<iostream.h>
class explicitdemo
{
	int a;
	public:
	  explicitdemo(int n)
	  {

		a=n;
	  }
	  void display()
	  {
		cout<<"value of a="<<a;
	  }
};
void main()
{
	clrscr();
	explicitdemo e(100);
	explicitdemo e1=200;
	explicitdemo e2='a';
	e.display();
	e1.display();
	e2.display();
	getch();

}
