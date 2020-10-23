/*6.(Class Template) Write a class template to represent a generic vector.
Include member functions to perform the following tasks:
 To create the vector.
 To modify the value of a given element.
 To multiply the vector by a scalar value.
 To display the vector in the form (10, 20, 30,…..)*/
#include<iostream>
using namespace std;
template<class T>
class vector_v{
    T *v;
    int s;
    public:
        vector_v(T *a,int size){
            v=new T[size];
            s=size;
            for(int i=0;i<s;i++){
                v[i]=a[i];
            }
        }
        void modify(T newv , int index){
            v[index]=newv;
        }
        void operator*(T y){
            for(int i=0;i<s;i++){
                v[i]=v[i]*y;
            }
        }
        void display(){
            cout<<"(";
            for(int i=0;i<s-1;i++){
                cout<<v[i]<<",";
            }
            cout<<v[s-1]<<")"<<endl;
        }
};
int main(){
    float f[5]={2.3,4.0,3.2,8.0,5.5};
    int i[5]={3,4,5,2,9};

    vector_v<float> v1(f,5);
    vector_v<int> v2(i,5);

    v2.display();
    v2.modify(1000,0);
    v2.display();
    cout<<endl;

    v1.display();
    v1*2.1f;
    v1.display();
}