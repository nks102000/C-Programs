//Multiple Exception Handelling Of know type
#include <iostream>
using namespace std;
int main()
{
    int num ;
   cout << "\n Enter a positive number : ";
   cin >> num;
   try
  {  if ( num==0)
        throw ((char*)"Zero");
     else if ( num <0 )
       throw num ;    // Exception 2
     else
           cout <<"\n NUMBER = " << num;
  }
 catch ( int num )
  {
       cout <<" \n" << num << " is negative";
  }
catch ( char *msg)
{
      cout <<"\n The number is " << msg;
}
 cout << "\n Exiting main()";

}    
