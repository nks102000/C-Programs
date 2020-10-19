/*Create a class which stores employ name, id and salary. Derived two classes
from Employee class: Regular and Part-time. Regular class stores DA, HRA
and basic salary the part time class stores the number of hours and pay per
hour. Calculate the salary of regular employee and part time employ using
virtual function. Display salary.*/
#include<iostream>
#include<string.h>
using namespace std;

class employee{
    protected:
        float salary;
    public:
        virtual void cal()=0;
        virtual void get()=0;
};

class regular:public
 employee{
    protected:
        float da;
        float hra;
        float BasicSalary;
    public:
        regular(float d,float h,float b){
            da=d;
            hra=h;
            BasicSalary=b;
        }
        void cal(){
            salary=BasicSalary+da+hra;
        }
        void get(){
            cout<<"Salary(Regular):"<<salary<<endl;
        }

};

class Part_Time:public employee{
    protected:
        int num;
        float pay;
    public:
        Part_Time(int n,float p){
            num=n;
            pay=p;
        }
        void cal(){
            salary=pay*num;
        }
        void get(){
            cout<<"Salary(Part time):"<<salary<<endl;
        }

};

int main(){
    employee *e;
    regular r(2056,6548,200000);
    Part_Time p(20,2000);

    e=&r;
    e->cal();
    e->get();

    e=&p;
    e->cal();
    e->get();

    return 0;
}