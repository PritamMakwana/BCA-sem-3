#include<conio.h>
#include<iostream.h>
void show(float a,float b)
{
	cout<<"we are in float show function";
	cout<<(a+b)<<endl;
}
void show1(int a,int b)
{
	cout<<"we ARE in int show function";
	cout<<(a+b)<<endl;
}

void show()
{
	cout<<"we are in no parameter";

}
void show1()
{
	cout<<"we are in no parameter";
}
void main()
{
	show(10,20);
	show(5.2,5.3);
	getch();
}
