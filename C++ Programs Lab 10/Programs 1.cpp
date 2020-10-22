/*1.(Function Template) Define a function template for finding the minimum
value contained in an array. Write main() function to find the minimum
value of integer array and minimum value of floating point numbers in an
array.*/
#include<iostream>
using namespace std;
template< class T>
T find_min (T a[], int n)
{
int i=0;
T min=a[0];
for(int i=1; i<n; i++)
if ( a[i] < min )
min=a[i];
return min;
}
int main(){
float p[5]={3.5, 2.3, 1.6, 5.4, 4.4};
int m[5] ={4, 6, 2, 5, 1};
char x[5]={'A','J','k','+','%'};
int int_min=find_min(m, 5);
float float_min=find_min(p, 5);
char char_min=find_min(x, 5);
cout<<"\nThe min of integer array is :";
cout<<int_min;
cout<<"\nThe min of float array is :";
cout<<float_min;
cout<<"\nThe min of char array is :";
cout<<char_min;
return 0;
}