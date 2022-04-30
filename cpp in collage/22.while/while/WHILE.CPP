#include<conio.h>
#include<iostream.h>
class check

{

	public:
	void checking()
	{
		int i=1;
		while (i<=5)
		{
			cout<<"this is while loop structure";
			i++;
		}
	}
};
void main()
{
	check ch;
	ch.checking();
	getch();
}