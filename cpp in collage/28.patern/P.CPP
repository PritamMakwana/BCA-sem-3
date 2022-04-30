#include<conio.h>
#include<iostream.h>
void main()
{
	int size,i,j,s=1;
	for(size=5;size>=1;size--)
	{
		for(i=1;i<=size;i++)
		{
			cout<<"*";
		}
		for(j=s;j>1;j--)
		{
			cout<<"  ";
		}
		for(i=size;i>=1;i--)
		{
			cout<<"*";
		}
		cout<<endl;
		s++;
	}
}