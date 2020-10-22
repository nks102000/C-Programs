/*3 (Function Template) Write a template function to search for a given key
element from an array. Illustrate how you perform search in integer,
character as well as double arrays using the same template function.*/
#include<iostream>
using namespace std;

template <class T>
int search(T a[],T key,int size){
    for(int i=0;i<size;i++){
        if(a[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int a[5]={1,2,3,4,5};
    char c[5]={'a','b','c','d','e'};
    double d[5]={10.2,20.5,30.4,30.8,40.9};
    int x=-1;
    x=search(a,3,5);
    if(x==0){
        cout<<"Element Not Found in int array"<<endl;
    }
    else if(x==1){
        cout<<"Element Found in int array"<<endl;
    }

    x=search(c,'n',5);
    if(x==0){
        cout<<"Element Not Found in char array"<<endl;
    }
    else if(x==1){
        cout<<"Element Found in char array"<<endl;
    }

    x=search(d,60.5,5);
    if(x==0){
        cout<<"Element Not Found in double array"<<endl;
    }
    else if(x==1){
        cout<<"Element Found in double array"<<endl;
    }

    return 0;
}