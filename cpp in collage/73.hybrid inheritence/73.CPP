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
		cout<<"roll no is="<<rno;
	  }
};
class test:public student
{
	protected:
	  int m1;
	  int m2;

	public:
	  void getmarks(int x,int y)
	  {
		m1=x;
		m2=y;


	  }
	  void putmarks()
	  {
		cout<<"sub1 marks="<<m1;
		cout<<"sub2 marks="<<m2;
	  }
};
class sports
{
	protected:
	 int score;
	public:
	  void getscore(int s)
	  {
		score=s;
	  }
	  void putscore()
	  {
		cout<<"weightage of sports="<<score;
	  }
};
class result:public test,public sports
{
	public:
	int total;
	 void display()
	 {
	       total=m1+m2+score;
		cout<<"total is="<<total;
	 }
};
void main()
{
	clrscr();
	result r;
	r.getno(25);
	r.putno();
	r.getmarks(95,99);
	r.putmarks();
	r.getscore(70);
	r.putscore();
	r.display();
	getch();
}