#include<conio.h>
#include<iostream.h>
class test
{
	int i;
	public:
	  void testing()
	  {


		for(i=1;i<=10;i++)
		{
			if(i==6)
			break;
		}
		cout<<i;
	   }
};
void main()
{
	test t;
	t.testing();
	getch();
}