#include <iostream>
#include <math.h>
using namespace std;

/*

5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1

*/

int main()
{
    int limit;
    cout<<"Enter A Limit : ";
    cin>>limit;
    cout<<"\n";

    int p = limit;

    for(int i=1,j=1; i<=limit; ++j)
    {
        if(j>limit)
        {
            j=0;
            ++i;
            p=limit;
            cout<<"\n";
        }
        else if(i==1 || j==1)
            cout<<p<<" ";
        else
        {
            if(j<=i)
            {
                --p;
                cout<<p<<" ";
            }
            else
                cout<<p<<" ";
        }
    }
    return 0;
}
