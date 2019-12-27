#include <iostream>
using namespace std;

/*
    Functor is a object which acts like a function. Basically, a class which defines operator().

    Simple Explanation :
    It's better to use name function object instead of what we call "functor" in C++.
    This is how other programming languages call similar constructs.
*/

    class MyFunctor
    {
    public:
        int operator()(int x)
        {
            return x * 2;
        }
    }

int main()
{
    MyFunctor doubler;
    int x = doubler(5);
}

