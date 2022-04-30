#include<conio.h>
#include<iostream.h>
void main()
{
	char number();
	ofstream outf("item");
	cout<<"enter item name";
	cin>>name;
	outf<<name<<endl;
	cout<<"enter item cost";
	float cost;
	cin>>cost;
	outf<<cost<<endl;
	outf.close();
	ifstream inf("item");
	inf>>name;
	inf>>cost;
	cout<<"item name"<<name;
	cout<<"item cost"<<cost;
	inf.close();
	getch();
}