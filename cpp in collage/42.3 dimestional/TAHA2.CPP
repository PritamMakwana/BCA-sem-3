#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k,a[3][3][2],b[3][3][2],c[3][3][2],d[3][3][2];
	clrscr();
	cout<<"Enter First matrix...";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				cin>>a[i][j][k];
				}
		}
		cout<<endl;
	}
	cout<<"Enter Second Martix..";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				cin>>b[i][j][k];
				}
		}
		cout<<endl;
	}
	cout<<"Matrix is...";
	cout<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
			c[i][j][k]=a[i][j][k]+b[i][j][k];
			cout<<"The Matrix is="<<c[i][j][k];
			cout<<endl;
			}
		}

	}
	getch();
}