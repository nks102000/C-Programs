#include<iostream>
#include<iomanip>
using namespace std;

class number{
   protected:
      int val;
   public:
      void setval(int i)
      {
         val=i;
      }
      virtual void show(){}
};

class hextype : public number{
   public:
      void show() {
      cout<<hex<<val<<endl;
      }
};

class dectype : public number{
   public:
      void show(){
      cout<<val<<endl;
      } 
};

class octtype : public number{
   public:
      void show() {
      cout<<oct<<val<<endl;
      } 
};

int main(){
   number *ptr;
   dectype d;
   hextype h;
   octtype o;
   ptr=&h;
   ptr->setval(20);
   ptr->show();
   return 0;
}

