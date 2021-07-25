#include <iostream>
using namespace std;

class Complex
{
private:
    int x,y;
public:
    Complex()   //default Constructor
    {
        cout<<"\nhello rupee"<<endl;
    }
    Complex(int a, int b)   //parameterised Constructor
    {
        x=a;
        y=b;
    }
    Complex(int a) //parameterised constructor
    {
        x=a;
        y=0;
    }
    void view()
    {
        cout<<"\nx = "<<x<<"\ty = "<<y<<endl;
    }
};

int main()
{
    Complex c1,c2;
    Complex c3(5,7), c4(7,9);
    Complex c5=Complex(8,6);
    Complex c6(8), c7(1);
    Complex c8=7; //This is only for constructor having one parameter
    c1.view();
    c2.view();
    c3.view();
    c4.view();
    c5.view();
    c6.view();
    c7.view();
    c8.view();
    return 0;
}
