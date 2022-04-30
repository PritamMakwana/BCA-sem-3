#include<conio.h>
#include<iostream.h>
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"value of x="<<x<<endl;
	cout<<"value of y="<<y<<endl;
}
int main()
{
	int a,b;
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;
	swap(a,b);
	return 0;
}