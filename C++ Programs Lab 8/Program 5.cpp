/*WAP to add two objects of time class. Overload the operator ‘==’ to
compare two objects and display whether they are equal or not. Overload the
assignment operator.*/
#include<iostream>
using namespace std;

class time1{
    float hh,mm,ss;
    public:
    time1(){
        hh=mm=ss=0;
    }
    time1(int a,int b,int c){
        hh=a;
        mm=b;
        ss=c;
    }
    time1(const time1 &x){
        hh=x.hh;
        mm=x.mm;
        ss=x.ss;
    }
    void show() {
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
    ~time1(){
        cout<<"Destructor Called"<<endl;
    }
    bool operator ==(time1 &t){
        if(ss==t.ss && mm==t.mm && hh==t.hh){
            return true;
        }
        else{
            return false;
        }
    }

    time1 operator =(const time1 &x){
        hh=x.hh;
        mm=x.mm;
        ss=x.ss;
        return *this;
    }
};
int main(){
    time1 c,c1(10,12,20),c2(20,42,50),c3,c4(c2),c5,c6;
    c3=c1;
    bool s=c1==c3;
    c.show();
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    cout<<s<<endl;
    return 0;
}