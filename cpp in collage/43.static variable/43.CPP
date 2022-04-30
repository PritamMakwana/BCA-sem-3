#include<conio.h>
#include<iostream.h>
void counter()
{
	int count=0;
	cout<<count++;
}
void main()
{
	for(int i=0;i<5;i++)
	counter();
	getch();
}
