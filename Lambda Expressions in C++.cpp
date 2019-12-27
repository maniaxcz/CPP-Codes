#include <iostream>
using namespace std;

/*
        Lambda Expression

        Syntax Explanation :

        [capture-list](parameter-list)->return type
        {
          body;
        };

*/


int main()
{
    // Type 1 : Full Unnamed Function

    [](){cout<<"\nHello";}                                          // Declaration
    ();                                                             // Calling

    // Type 2 : Assigning It to a Variable and calling through it

    auto f = [](){cout<<"\nHello Lambda Expression";};              // Declaration
    f();                                                            // Calling


    // Type 3: Specifying the Return Type

    [](int x, int y)->int {return (x+y);};                          //Declaration
    cout<<"\nLambda Sum Is : "<<(20,30);                            // Calling with Parameters



    /* Type 4 : Specifying Capture List
     Explanation - > Suppose we have two local variables and we want to use them in our Lambda Exp,
                     so we go ahead and mention them in our CAPTURE LIST.
    */

    int a = 10;
    int b = 20;
    cout<<"\nLambda with Capture List : ";
    [a,b](){cout<<"\na : "<<a<<" , b : "<<b;}();

    return 0;
}
