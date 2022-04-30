#include<iostream.h>
#include<conio.h>
class si
{
	int m1,m2,m3,tot;
	char name[30];
	float per;
	public:
		void si::getdata()
		{
			cout<<"Enter your name : ";
			cin>>name;
			cout<<"Enter CPP marks : ";
			cin>>m1;
			cout<<"Enter Oracle marks : ";
			cin>>m2;
			cout<<"Enter PHP marks : ";
			cin>>m3;
		}
		void si::calc()
		{
			tot=m1+m2+m3;
			per=tot/3;
		}
		void si::dis()
		{
			cout<<"Hello!"<<name<<"Your total marks is : "<<tot<<endl;
			cout<<"Your percentage is : "<<per<<endl;
			if(m1>=40&&m2>=40&&m3>=40)
			{
				if(per>80)
					cout<<"You got destination";
				else if(per>70&&per<80)
					cout<<"First class";
				else if(per>55&&per<70)
					cout<<"Second class";
				else if(per>40&&per<55)
					cout<<"Pass";
				else
					cout<<"Please fill right information";
			}
			else
			{
				cout<<"Sorry you are fail";
			}
		}
};
void main()
{
	si ma;
	ma.getdata();
	ma.calc();
	ma.dis();
	getch();
}