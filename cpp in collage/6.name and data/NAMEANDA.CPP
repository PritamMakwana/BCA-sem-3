#include<conio.h>
#include<iostream.h>
class person
{
	clrscr();
	int age;
	char name[30];
	public:
	  void getdata();
	  void display();
};
void person::getdata()
{
	cout<<"enter your age=";
	cin>>age;
	cout<<"enter name=";
	cin>>name;
}
void person::display()
{
	cout<<"\n name is="<<name;
	cout<<"\n age is="<<age;
}
void main()
{
	person p;
	p.getdata();
	p.display();
	getch();
}