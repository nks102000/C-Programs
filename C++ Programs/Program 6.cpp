/*WAP to add two objects of distance class. Overload the operator ‘&gt;’ to
compare two objects and return the object with larger time value and
display it. Overload the ‘==’ operator to compare and display whether two
given objects contain same distance value.*/
#include<iostream>
using namespace std;

class DF{
    float feet;
    float inches;
    public:
        DF(){
            inches=0.0;
            feet=0.0;
        }
        DF(float x,float y){
            feet=x;
            inches=y;
        }
        DF(const DF &d){
            inches=d.inches;
            feet=d.feet;
        }
        void get(){
            cout<<"Feet= "<<feet<<endl;
            cout<<"Inches= "<<inches<<endl;
        }
        DF operator >(DF &d){
            if(feet>d.feet && inches>d.inches){
                return *this;
            }
            else{
                return d;
            }
        }
        bool operator ==(DF &t){
        if(feet==t.feet && inches==t.inches){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    DF d(2,6),d1(10,5),d2,d3(d1);
    d2=d>d1;
    bool c=d3==d1;
    cout<<c<<endl;
    d.get();
    d1.get();
    d2.get();
    d3.get();
    return 0;
}