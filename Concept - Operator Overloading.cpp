#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r=0, int i=0):real(r),imag(i){}
    friend Complex operator+(Complex c1, Complex c2);           //Overloading With Friend Function so we can take more than 1 argument
    friend ostream& operator<<(ostream& o, Complex c);          //Overloading << operator and it takes Stream Object and User defined data type as arguments
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.imag = c1.imag + c2.imag;
    temp.real = c1.real + c2.real;
    return temp;
}

ostream& operator<<(ostream& o, Complex c)
{
    o<<c.real<<" +i"<<c.imag;
    return o;
}

int main()
{
    Complex c1(2,4);
    Complex c2(4,6);
    Complex c3 = c1+c2;
    cout<<c3;
    return 0;
}
