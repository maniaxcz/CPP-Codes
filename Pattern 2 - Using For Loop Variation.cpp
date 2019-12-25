#include <iostream>
#include <stdlib.h>
using namespace std;


/*



* * * * *
* * * *
* * *
*
* *
* * *
* * * *
* * * * *




*/

int main()
{

    for(int i=1,j=5; i<=5; --j)             // Upper Triangle Logic
    {
        if(i==4)
            break;
        else if(j>=i)
            cout<<"* ";
        else
        {
            j = 6;
            ++i;
            cout<<"\n";
        }
    }
    for(int i=1,j=1; i<=5; ++j)             // Lower Triangle Logic
    {
        if(j<=i)
            cout<<"* ";
        else
        {
            j = 0;
            ++i;
            cout<<"\n";
        }

    }

    return 0;
}
