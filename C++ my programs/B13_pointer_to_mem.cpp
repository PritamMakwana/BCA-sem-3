//  #include<iostream.h>
//  #include<conio.h>
 #include<iostream>
 using namespace std;

class pointer{
    int a,b;
    public:
    void set(int p, int q ){
        a=p;   //50
        b=q;   //20
    }

    void display(){
        cout<<a<<endl<<b;
    }
    friend void add(pointer p);
    friend void sub(pointer p);
};

void add(pointer p)
{
    int pointer::*p1=&pointer::a; //int *p1=&a;
    int pointer::*p2=&pointer::b; //int *p2=&b;

    int s=p.*p1+p.*p2;
    cout<<"Addition is "<<s;

}

void sub(pointer p){
    int  pointer::*p1=&pointer::a;
    int pointer::*p2=&pointer::b;
    
    pointer *ptr=&p; //pointer to object;
    int s=ptr->*p1-ptr->*p2;
    cout<<"Substration is "<<s;

}

int main(){
     //clrscr()
    pointer p;
    p.set(50,20);

    add(p);
    sub(p);

    // getch();
}