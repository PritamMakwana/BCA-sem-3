#include<conio.h>
#include<iostream.h>
int m=10;
void main()
{
	int m=20;
	{
		int k=m;
		int m=30;
		{
			cout<<"k is="<<k<<endl;
			cout<<"m is="<<m<<endl;
			cout<<"::m is="<<::m<<endl;
		}
		cout<<"m="<<m<<endl;
		cout<<"::m="<<m<<endl;
	}
}