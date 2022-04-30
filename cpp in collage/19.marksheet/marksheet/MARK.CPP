#include<conio.h>
#include<iostream.h>
class student
{
	int m1,m2,m3,tot;
	float pr;
	char name[30];
	public:
	   void getdata();
	   void calculation();
};
void student::getdata()
{
	cout<<"enter your name=";
	cin>>name;
	cout<<"enter m1 marks=";
	cin>>m1;
	cout<<"enter m2 marks=";
	cin>>m2;
	cout<<"enter m3 marks=";
	cin>>m3;
}
void student::calculation()
{
	tot=m1+m2+m3;
	pr=tot/3;
       cout<<"\nhello\n"<<name<<"\nyour percantage is="<<pr;
       if(pr>70)
	 cout<<"\nyou got distriction";
       else if(pr>60 && pr<70)
	 cout<<"\n1 st class";
       else if(pr>50 && pr<60)
	 cout<<"\n2 nd class";
       else if(pr>40 && pr<50)
	 cout<<"\n3 rd class";
       else
       cout<<"\n sorry,you are fail";
}
void main()
{
	student s;
	s.getdata();
	s.calculation();
}
