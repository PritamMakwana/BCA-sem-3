#include<conio.h>
#include<iostream.h>
class mildemo
{
	int x,y;
	public:
	  mildemo(int,int);
	  void display();
};
mildemo::mildemo(int a,int b):x(a),y(b)
{
}
void mildemo::display()
{
	cout<<"value of x="<<x<<endl;
	cout<<"vlaue of y="<<y<<endl;
}
void main()
{
	mildemo m(100,200);
	m.display();
	getch();

}