#include<conio.h>
#include<iostream.h>
class test
{
	public:
	test()
	{
		cout<<"this is my constrctor";
		cout<<endl;
	}
	~test()
	{
		cout<<"this is my destrctor";
		cout<<endl;
	}

};
void main()
{
	test t;
	int a=1;
	if(a)
	{
		test t1;
	}
}