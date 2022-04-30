#include<conio.h>
#include<iostream.h>
inline int sum(int a,int b)
{
	return(a+b);
}
void main()
{
	int a,b,c;
	cout<<"enter value of a=";
	cin>>a;
	cout<<"enter value of b=";
	cin>>b;
	c=sum(a,b);
	cout<<"sum is = "<<c<<endl;
	getch();
}