#include<conio.h>
#include<iostream.h>
class shape
{
	protected:
	  int height;
	  int width;
	public:
	  void getwidth(int w)
	  {
		width=w;
	  }
	  void getheight(int h)
	  {
		height=h;
	  }
};
class rectengle:public shape
{
	public:
	  int getarea()
	  {
		return(height*width);
	  }
};
void main()
{
	clrscr();
	rectengle r;
	r.getwidth(5);
	r.getheight(7);
	cout<<"ans is="<<r.getarea();
	getch();
}