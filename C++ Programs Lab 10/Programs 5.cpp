/*(Class Template) Write a program to define a class template for reading
two data items from the keyboard and find out their sum.*/
#include<iostream>
using namespace std;

template< class T>
class Test{
    T a;
    T b;
    public:
        Test (T x, T y){
            a=x;
            b=y;
        }
        void show(){
            cout<<a<<" and "<<b<<endl;
        }
        T add(){
            T x;
            x=a+b;
            return x;
        }
};

int main(){
    Test<int>i(10,20);
    Test<float>f(10.23,20.45);
    i.show();
    f.show();
    cout<<i.add()<<endl;
    cout<<f.add();
    return 0;
}