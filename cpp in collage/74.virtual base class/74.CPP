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
class test:public virtual student
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
		cout<<"sub1 marks="<<m1;
		cout<<"sub2 marks="<<m2;
	  }

};
class sports:public virtual student
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
		cout<<"sports weightage="<<score;
	 }
};
class result:public test,public sports
{
	int total;
	public:
	  void display()
	  {
		total=m1+m2+score;
		cout<<"total="<<total;
	  }
};
void main()
{
	clrscr();
	result r;
	r.getno(5);
	r.putno();
	r.getmarks(98,98);
	r.putmarks();
	r.getscore(99);
	r.putscore();
	r.display();
	getch();
}