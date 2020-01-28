#include <iostream>
using namespace std;

/*

* * * * * * * * * * * * * * * * * * * *
* * * * * * * * *     * * * * * * * * *
* * * * * * * *         * * * * * * * *
* * * * * * *             * * * * * * *
* * * * * *                 * * * * * *
* * * * *                     * * * * *
* * * *                         * * * *
* * *                             * * *
* *                                 * *
*                                     *
*                                     *
* *                                 * *
* * *                             * * *
* * * *                         * * * *
* * * * *                     * * * * *
* * * * * *                 * * * * * *
* * * * * * *             * * * * * * *
* * * * * * * *         * * * * * * * *
* * * * * * * * *     * * * * * * * * *
* * * * * * * * * * * * * * * * * * * *

*/

int main()
{
    int limit;
    cout<<"Please Enter The Limit : ";
    cin>>limit;
    int n = 2*limit;


    for(int i=0; i<n; ++i)
    {
        for(int j=n; j>=1; --j)
        {
            if(j<=i)
                cout<<"  ";
            else
                cout<<"* ";
        }

        for(int k=0; k<n; ++k)
        {
            if(k<i)
                cout<<"  ";
            else
                cout<<"* ";
        }

        cout<<"\n";
    }

    for(int i=0; i<n; ++i)
    {
        for(int l=0; l<n; ++l)
        {
            if(l>i)
                cout<<"  ";
            else
                cout<<"* ";
        }

        for(int m=(n-1); m>=0; --m)
        {
            if(m>i)
                cout<<"  ";
            else
                cout<<"* ";
        }

        cout<<"\n";
    }

    return 0;
}
