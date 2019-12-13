#include <iostream>
using std::cout;

int divisibleBy9(long int number);

int main()
{
    long int number = 18;
    int i = divisibleBy9(number);
    if(i==1)
        cout<<"Yes ! The Number was Divisible ";
    else
        cout<<"No ! The Number was not Divisible ";
    return 0;
}
int divisibleBy9(long int number)
{
    int sum = 0;
    if(number==9)
        return 1;
    if(number<9)
        return 0;
    while(number>0)
    {
        sum = sum + number%10;
        number = number/10;
    }
    divisibleBy9(sum);
}
