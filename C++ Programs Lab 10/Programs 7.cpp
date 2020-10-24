/*(Class Template) Write a program to explain class template by creating a
template T for a class named pair having two data members of type T which
are inputted by a constructor and a member function get-max() return the
greatest of two numbers to main. Note: the value of T depends upon the data
type specified during object creation.*/
#include<iostream>
using namespace std;

template <class T>
class pair1{
    T a;
    T b;
    public:
        pair1(T x,T c){
            a=x;
            b=c;
        }
        T get_max(){
            if(a>b){
                return a;
            }
            else
            {
                return b;
            }
            
        }
};


int main(){
    int a=20;
    int b=35;
    char c='a';
    char d='A';
    double e=10.25;
    double f=20.56;
    pair1<int>in(a,b);

}