#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	clrscr();
	cout<<"Enter First matrix...";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter Second Martix..";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>b[i][j];
		}
		cout<<endl;
	}
	cout<<"Matrix is...";
	cout<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<"The Matrix is="<<c[i][j];
			cout<<endl;
		}

	}
	getch();
}