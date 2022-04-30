//  #include<iostream.h>
//  #include<conio.h>
#include<iostream>
using namespace std;

//Virtual Base class

class book{
    protected:

    int b_id;
    char name[10];

    public:

    void getbook(){
      cout<<"Enter book id "<<endl;
      cin>>b_id;
      cout<<"Enter book name "<<endl;
      cin>>name;

    }
  
    void showbook(){
        cout<<"Book id "<<b_id<<endl;
        cout<<"Book name "<<name<<endl;
    }

};

class bookprice: public virtual book {

    protected:

    double price;

    public:

    void getprice(){
        cout<<"Enter book price "<<endl;
        cin>>price;
    }

    void showprice(){
        cout<<"Book price "<<price<<endl;
    }

};

class discount: public virtual book {

    protected:

    double d;

    public:

    void getdiscount(){
        cout<<"Enter discount % "<<endl;
        cin>>d;
    }

    void showdiscount(){
        cout<<"discount "<<d<<"%"<<endl;
    }

};

class publisher : public bookprice,public discount {

         double fp;
         char pub[20];
         public:

         void getdetail(){
            getbook();
            getprice();
            getdiscount();

          cout<<"Enter publisher name "<<endl;
          cin>>pub;
         }


        void showdetail(){
            showbook();
            showprice();
            showdiscount();

        fp=price-(price*d/100);
        cout<<"final price " <<fp<<endl;
        cout<<"Book publisher "<<pub<<endl;

        }

};

int main(){
    // clrscr();
    publisher p;
    p.getdetail();
    p.showdetail();
    // getch();
}







