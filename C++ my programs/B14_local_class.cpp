// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class test{
    public:
    void demo();
};

void test::demo(){
    class xyz
    {
        public:
        void show(){
            cout<<"This is show ";
        
        }
    };
cout<<"Calling function ";
xyz x;
x.show();
}

int main(){
    // clrscr()
    test t;
    t.demo();
    // getch();

}
