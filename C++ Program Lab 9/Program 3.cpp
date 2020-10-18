/*Create a class media having data members title and price. Derived two classes
Book, Tape from it. Book class has number of pages as a data member and Tape
class has time to play as data member. Using Virtual function, display the
information to a particular type of media.*/
#include<iostream>
#include<string.h>
using namespace std;

class media{
    protected:
        char title[50];
        float price;
    public:
        media(char *s,float a){
            strcpy(title,s);
            price=a;
        }
        virtual void show(){}
};

class book:public media{
    int pages;
    public:
        book(char *s,float a,int p):media(s,a){
            pages=p;
        }
        void show(){
            cout<<"Title:"<<title<<endl;
            cout<<"Price:"<<price<<endl;
            cout<<"Pages:"<<pages<<endl;
        }
};

int main(){
    media *m;
    book b("ABC",2000.5,100);

    m=&b;
    m->show();
    return 0;
}