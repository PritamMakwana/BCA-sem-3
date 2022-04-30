#include<conio.h>
#include<iostream.h>
float perimeter(const float l,const float w)

{
	return(2*(l+w));
}
int main()
{
	float length,width;
	cout<<"enter length of rectengle=";
	cin>>length;
	cout<<"enter width=";
	cin>>width;
	cout<<"perimeter of a rectengle is="<<perimeter(length,width);
	return 0;
}