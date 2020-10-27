//Exception Handeling Of Divisible By Zero
#include <iostream>
using namespace std;
int main()
{
    int num1, num2 ;
   cout << "\n Enter the two numbers : ";
    cin>>num1>>num2;
   try
   {
       if ( num2!=0) 
       {
           float rem = (float) num1/num2;
           cout << " \n Result =  " << rem;
       }
       else
      
            throw (num2);
    }
       catch ( int num2 )
       {
           cout << " Division by Zero error encountered " <<endl;
       }
          cout << " Exiting main " <<endl;   
}
