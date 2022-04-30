//  #include<iostream.h>
//  #include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;
// manipulation of string using operators
// overload + and == operator in string data type

class string1{

 char *s;
 int length;
  public:
 string1(){
     length=0;
     s=0;
 }

string1(char *a){
    length=strlen(a);
    s=new char[length+1];
    strcpy(s,a);
}

void display(){
    cout<<"String= "<<s<<endl;
}

friend string1 operator == (string1 s1,string1 s2);
friend string1 operator + (string1 s1,string1 s2);


};

string1 operator ==(string1 s1,string1 s2){
    if(strcmp(s1.s,s2.s)==0){
        cout<<"same string "<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }

}

string1 operator +(string1 s1,string1 s2){
    string1 s3;
    s3.s=new char[s1.length+s2.length+1];
    strcpy(s3.s,s1.s);
    strcat(s3.s,s2.s);
    return s3;    //error
}

int main(){
  //  clrscr();
    string1 s1("Leeza ");
    string1 s2("Patel ");
    string1 s3("Leeza ");

    cout<<"comparing s1 ,s2"<<endl;
    s1==s2;

    cout<<"comparing s1 ,s3"<<endl;
    s1==s3;

    string1 s4;
    s4=s1+s2;              
    s4.display();
  //  getch();

}