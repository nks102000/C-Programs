#include<iostream>
using namespace std;

class integer
{
    int *arr;
    int num;
public:
    friend istream& operator>>(istream&, integer&);
    friend ostream& operator<<(ostream&, const integer&);
    ~integer()
    {
        delete(arr);
    }
};

istream& operator>>(istream &in, integer &i)
{
    int j,n;
    cout<<"Enter no of element in the array: ";
    cin>>i.num;
    i.arr = new int[i.num];
    cout<<"Enter "<<i.num<<" integers \n";
    for(j=0; j<i.num;j++)
        in>>i.arr[j];
    return in;
}

ostream& operator<<(ostream &out, const integer &i)
{
    cout<<"The array is : ";
    for(int j=0;j<i.num;j++)
        out<< i.arr[j]<<"\t";
    return out;
}

int main()
{
    integer a;
    cin>>a;
    cout<<a;
}