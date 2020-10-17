//Write a c++ program to demonstrate the concept of Virtual function. 
#include<iostream>
using namespace std;

class Base{
    public:
        virtual void print(){
        cout<<"PRINT-BASE CLASS "<<endl;
        }
        virtual void show(){
            cout<<"SHOW-BASE CLASS "<<endl;
        }
};

class Derived: public Base{
    public:
        void show(){
            cout<<"SHOW-DERIVED CLASS"<<endl;
        }
};

int main(){
    Base  *b=new Derived();
    b->print();
    b->show();
    return 0;
}
