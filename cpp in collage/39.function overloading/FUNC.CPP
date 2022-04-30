#include<conio.h>
#include<iostream.h>
void show(int a,int b)
{
	cout<<"we are in int show function";
	cout<<(a+b)<<endl;
}
void show()
{
	cout<<"we are in no parameter";
}
void main()
{
	show(10,20);
	show();
	getch();
}
