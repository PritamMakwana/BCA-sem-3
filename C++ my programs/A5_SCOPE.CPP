// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class bca{

public:
void printdata();
};
void bca::printdata()
{
cout<<"This is the use of scope resolution operator"<<endl;
cout<<"This is the another use with function"<<endl;
}

int main(){
//clrscr();
bca abc;
abc.printdata();
//getch();
}