#include <iostream>
using namespace std;

int maximum(int arr[],int n)
{
    int maximum = arr[0];
    int i = 1;

    while(i<n)
    {
        if(arr[i]>maximum)
            maximum = arr[i];
        ++i;
    }

    return maximum;
}

int lcm(int arr[], int n)
{
    int highest = maximum(arr,n);
    int calc = highest;
    for(int i=0;i<n;++i)
    {
        if(calc%arr[i]!=0)
        {
            calc = calc + highest;
            i=-1;
        }
    }
    return calc;
}

int main()
{
    int numbers[] = {90,300,95};
    int siz = sizeof(numbers)/sizeof(numbers[0]);
    cout<<"LCM Is : "<<lcm(numbers,siz);
    return 0;
}
