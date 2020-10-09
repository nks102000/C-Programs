#include<iostream>
using namespace std;

class complex{
    float real,img;
    public:
    complex(){
        real=img=0;
    }
    complex(int a,int b){
        real=a;
        img=b;
    }
    complex(const complex &x){
        real=x.real;
        img=x.img;
    }
    void show() {
        cout<<real<<"+i"<<img<<endl;
    }
    ~complex(){
        cout<<"Destructor Called"<<endl;
    }

    complex operator +(complex &c2){
        complex c;
        c.real=real+c2.real;
        c.img=img+c2.img;
        return c;
    }

    complex operator ++(){
        complex c;
        c.real=++real;
        c.img=++img;
        return c;
    }

    complex operator ++(int){
        complex c;
        c.real=real++;
        c.img=img++;
        return c;
    }

    complex operator --(){
        complex c;
        c.real=--real;
        c.img=--img;
        return c;
    }

    complex operator --(int){
        complex c;
        c.real=real--;
        c.img=img--;
        return c;
    }
};
int main(){
    complex c,c1(10,12),c2(c1);
    c=++c1;
    c1++;
    c2=c1++;
    c.show();
    c1.show();
    c2.show();
    return 0;
}