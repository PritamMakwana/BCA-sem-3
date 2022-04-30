// #include<iostream.h>
// #include<conio.h>
#include<string.h>

#include<iostream>
using namespace std;
// Dyanamic contructor

class text{
    char *name;
    int len;
    public:
    text(){
        len=0;
        name=new char[1];
    }

    text(char *n){
        len=0;
        name=new char[len+1];
        strcpy(name,n);
    }
    
    void show(){
        cout<<"Name is "<<name;
    }
};   

int main(){
    char *name="kscpsc";
    text t1;
    t1=text (name);
    t1.show();
    text t2("abcd");
    t2.show();
    //getch();
}