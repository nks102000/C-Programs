//Exception Handeling Of Array Index Out Of Bound
#include <iostream>
using namespace std;
int main()
{
    int num1[10]={1,2,3,4,5,6,7,8,9,10}, num2 ;
   cout << "\n Enter the index of which the value is to given : ";
    cin>>num2;
   try
   {
       if ( num2>0 && num2<=10) 
       {
           cout << " \n Result =  " << num1[num2];
       }
       else
      
            throw (num2);
    }
       catch ( int num2 )
       {
           cout << " Array Index Out Of Bound error encountered " <<endl;
       }
          cout << " Exiting main " <<endl;   
}
