#include<conio.h>
#include<iostream.h>
class check

{
	int i=1;
	public:
	void checking()
	{
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