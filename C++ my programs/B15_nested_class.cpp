// #include<iostream.h>
// #include<conio.h>
#include<iostream>
using namespace std;

class outer{
public:
  class inner{
      public:
      void showinner(){
          cout<<"inner "<<endl;
      }
  };
  void showouter(){
      cout<<"outer "<<endl;
      inner i;
      i.showinner();
   }
};

int main(){
    outer o1;
    o1.showouter();
    // getch()
}

