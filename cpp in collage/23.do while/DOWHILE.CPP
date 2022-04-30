#include<conio.h>
#include<iostream.h>
class check
{
	int i=1,sum=0;
	public:
	  void checking()
	  {
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
	check ch;
	ch.checking();
	getch();
}
