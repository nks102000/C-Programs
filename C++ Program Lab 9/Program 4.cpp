/*Create a class shape. Derived 3 classes from it: Circle, Square, Triangle. Find
area of each shape and display it. Using pure virtual function and abstract base
class.*/
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class shape{
    protected:
        float area;
    public:
        virtual void cal()=0;
        virtual void get()=0;
};

class circle:public shape{
    float radius;
    public:
        circle(float r){
            radius=r;
        }
        void cal(){
            area=3.14*radius*radius;
        }
        void get(){
            cout<<"Area of circle: "<<area<<endl;
        }
};

class trinagle:public shape{
    float s1;
    float s2;
    float s3;
    public:
        trinagle(float sd1,float sd2,float sd3){
            s1=sd1;
            s2=sd2;
            s3=sd3;
        }
        void cal(){
            float sp=(s1+s2+s3)/2.0;
            area=sqrt((sp*(sp-s1)*(sp-s2)*(sp-s3)));
        }
        void get(){
            cout<<"Area of triangle: "<<area<<endl;
        }
};

class rectangle:public shape{
    int l;
    int b;
    public:
        rectangle(int ln,int bh){
            l=ln;
            b=bh;
        }
        void cal(){
            area=l*b;
        }
        void get(){
            cout<<"Area of rectangle: "<<area<<endl;
        }
};

int main(){
    shape *s;
    circle c(2.5);
    trinagle t(3.2,4.1,5.2);
    rectangle r(10,20);

    s=&c;
    s->cal();
    s->get();

    s=&t;
    s->cal();
    s->get();

    s=&r;
    s->cal();
    s->get();
    return 0;
}
