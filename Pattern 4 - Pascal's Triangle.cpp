#include <iostream>
using namespace std;

/*

1
2 3
4 5 6
7 8 9 10

*/

int main()
{
    int n;
    cout<<"Enter A Limit : ";
    cin>>n;
    int sum = 1;

    /*
    Code with Worst Case Complexity O(n^2)

    for(int i=1; i<=n; ++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<sum<<" ";
            ++sum;
        }
        cout<<"\n";
    }
    */

    // Optimized Code with Worst Case Complexity O(n)
    for(int i=1,j=1; i<=n; ++j)
    {
        if(j>i)
            {
                cout<<"\n";
                ++i;
                j = 0;
            }
        else
            {
                cout<<sum<<" ";
                ++sum;
            }
    }

    return 0;
}
