#include <iostream>
#include <stdlib.h>
using namespace std;


/*

Pattern Using For-Loop Variation


*
**
***
****
*****


*/



int main()
{
    int i=1,j=1;
    for(i,j; i<=5; ++j)
    {
        if(j<=i)
         cout<<"* ";
        else if(j>i)
        {
            j = 0;
            ++i;
            cout<<"\n";
        }
    }
    return 0;
}
