#include <iostream>
using namespace std;

class Complex
{
private:
    int x,y;
public:
    Complex(){}
    Complex(int a)
    {
        x=a;
        y=0;
    }
    Complex(int a, int b)
    {
        x=a;
        y=b;
    }

    //COPY CONSTRUCTOR
    Complex(Complex &c)
    {
        x=c.x;
        y=c.x;
    }

};

int main()
{
    Complex c1(5,6), c2(3), c3;
    Complex c4=c1;
    Complex c5(c1);
    return 0;
}
