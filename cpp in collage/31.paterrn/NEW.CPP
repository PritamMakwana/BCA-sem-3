#include<conio.h>
#include<iostream.h>
class test
{
       int i,j;
	public:
	  void testing()
	   {



		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
			   cout<<"1";
			}
		 cout<<endl;
		}
	 }
};
void main()
{
	test t;
	t.testing();

}