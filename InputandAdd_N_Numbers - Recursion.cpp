#include <iostream>
using std::cout;
using std::cin;

int recurseAdd(int limit);

int main()
{
    int limit;
    cout<<"Enter A Limit : ";
    cin >>limit;
    cout<<"The Sum Is : "<<recurseAdd(limit);
    return 0;
}

int recurseAdd(int limit)
{
    int number;
    cout<<"Please Input A Number : ";
    cin>>number;
    cout<<"\n";

    if(limit==1)
        return number;
    else
    {
        return number + recurseAdd(limit-1);
    }

    return number;
}
