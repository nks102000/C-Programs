#include<iostream>
#include<string.h>
using namespace std;

class str{
    int len;
    char *st;
    public:
        str(){}
        str(char *s){
            len=strlen(s);
            st=new char[len+1];
            strcpy(st,s);
        }
        
        str(const str &s){
            len=strlen(s.st);
            st=new char[s.len+1];
            strcpy(st,s.st);
        }

        void display(){
            cout<<st<<endl;
        }

        str operator +(str &s){
            str a;
            a.len=len+s.len;
            delete(a.st);
            a.st=new char[len+1];
            strcpy(a.st,st);
            strcat(a.st,s.st);
            return a;
        }

        str operator =(const str &s){
            //str a;
            //a.len=s.len;
            delete(st);
            len=s.len;
            st=new char[len+1];
            strcpy(st,s.st);
            return *this;
        }
        ~str(){
            delete st;
        }
};

int main(){
    str s("ABC"),s1("XYZ"),s2,s3,s4;
    s2=(s+s1);
    s3=s2;
    s.display();
    s1.display();
    s2.display();
    s3.display();
    return 0;
}