// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class student{
  int id;
  char name[10];
  int marks[3];
  float per;

  public:
  void getdata();
  void calculate();
  void display();
};

void student::getdata(){
    cout<<"Enter Rollno ";
    cin>>id;
    cout<<"Enter student name ";
    cin>>name;
    cout<<"Enter marks of 3 subject ";
    for(int i=0;i<3;i++){
        cin>>marks[i];
    }
    }

    void student::calculate(){
        int total =0;
        for(int i=0;i<3;i++){
            total=total+marks[i];
        }
        per=total/3;
    }

    void student::display(){
        cout<<" \n student information"<<endl;
        cout<<"id = "<<id<<endl;
        cout<<"name = "<<name<<endl;
        cout<<"Percentage = "<<per;
    }

    int main(){
        //clrscr();
        student s;
        s.getdata();
        s.calculate();
        s.display();
        //getch();
    }