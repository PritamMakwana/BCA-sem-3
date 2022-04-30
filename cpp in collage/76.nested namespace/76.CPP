#include<conio.h>
#include<iostream.h>
using namespace std;
namespace first_space
{
	void func()
	{
		cout<<"first namespace";
	}
	namespace second_space
	{
		void func()
		{
			cout<<"second namespace":
		}
	}
}
using namespace first_space::second_space
void main()
{
	func();
	getch();
}
