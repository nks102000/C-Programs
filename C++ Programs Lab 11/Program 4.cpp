//Multiple Exception Handelling Of all type.
#include <iostream>
using namespace std;
int main()
{
    int num ;
    cout << "\n Enter a positive number : ";
    cin >> num;
    try{
        if ( num==0)
            throw ((char*)"Zero"); // Exception 1
        else if ( num == -1 )
            throw num ;    // Exception 2
        else if ( num == 1)
           cout <<"\n NUMBER = " << num;
        else
            throw (float) num;
    }
    catch ( int num ){
        cout <<" \n" << num << " is negative";
    }
    catch ( char *msg){
        cout <<" The number is " << msg;
    }
    catch (...){   
        cout << "\n No specific code executed ";
    }
    cout << "\n Exiting main()";
}
