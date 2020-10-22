/*2 (Function Template) Write a program to define the function template for
swapping the two items of various data types such as integers, float and
characters etc.*/
#include<iostream>
using namespace std;

template< class T>
void swap1(T &x, T &y){
    T temp=x;
    x=y;
    y=temp;
}

int main()
{
float p,q;
int m, n;
cout<<"\n Enter two integers: ";
cin >>m>>n;
cout<<"\nThe values before swapping are: "<<m<<" "<<n;
swap1(m,n);
cout<<"\nThe values after swapping are: "<<m<<" "<<n;
cout<<"\n Enter two floats: ";
cin >>p>>q;
cout<<"\nThe values before swapping are:" <<p<<" "<<q;
swap1(p,q);
cout<<"\nThe values after swapping are:"<<p<<" "<<q;
return 0;
}