#include<conio.h>
#include<iostream.h>
class check
{

	public:
	  void checking()
	  {
		int i=1,sum=0;
		do
		{
			sum=sum+i;
			i++;
		}while(i<=10);
		cout<<"sum is:"<<sum;
	  }
};
void main()
{
	clrscr();
	check ch;
	ch.checking();
	getch();
}
