#include<conio.h>
#include<iostream.h>
class student
{
	protected:
	  int rno;
	public:
	  void getno(int a)
	  {
		rno=a;
	  }
	  void putno()
	  {
		cout<<"roll no="<<rno;
	  }
};
class test:public student
{
	protected:
	  int m1,m2;
       public:
	void getmarks(int x,int y)
	{
		m1=x;
		m2=y;
	}
	void putmarks()
	{
		cout<<"marks1="<<m1;
		cout<<"marks2="<<m2;
	}
};
class result:public test
{
	int total;
	public:
	  void display()
	  {
		total=m1+m2;
		cout<<"total is="<<total;
	  }
};
void main()
{
	result r;
	r.getno(10);
	r.putno();
	r.getmarks(92,93);
	r.putmarks();
	r.display();
	getch();
}