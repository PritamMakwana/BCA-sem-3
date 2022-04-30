#include<conio.h>
#include<iostream.h>
class wife;
class husband
{
	int sal_1,sal_2;
	public:
	  void getsal(int,int);
	  friend class wife;
};
class wife
{
	int sal;
	public:
	  void getsal(int);
	  void dispsal(husband);
};
void husband::getsal(int s1,int s2)
{
	sal_1=s1;
	sal_2=s2;
}
void wife::getsal(int s)
{
	sal=s;
}
void wife::dispsal(husband obj_h)
{
	cout<<"hubby's salary 1="<<obj_h.sal_1;
	cout<<"hubby's salary 2="<<obj_h.sal_2;
	cout<<"wife's salary="<<sal;
}
void main()
{
	husband h;
	wife w;
	h.getsal(15000,5000);
	w.getsal(15000);
	w.dispsal(h);
	getch();
}