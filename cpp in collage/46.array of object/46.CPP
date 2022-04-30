#include<conio.h>
#include<iostream.h>
class student
{
	int age;
	char name[30];
	public:
		void getdata();
		void display();
};
void student::getdata()
{
	cout<<"enter name=";
	cin>>name;
	cout<<"enter age=";
	cin>>age;

}
void student::display()
{
	cout<<"name is="<<name;
	cout<<endl;

	cout<<"age is="<<age;
	cout<<endl;

}
void main()
{
	student s[5];
	for(int i=0;i<5;i++)
	  s[i].getdata();
	for(int j=0;j<5;j++)
	  s[j].display();
	getch();
}