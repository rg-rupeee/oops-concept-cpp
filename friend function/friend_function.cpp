#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
public:
    void setvalues(int x, int y)
    {
        a=x;
        b=y;
    }
    friend void fun(Complex);
};

void fun(Complex c)
{
    cout<<c.a+c.b<<endl;
}

int main()
{
    Complex c1, c2;
    c1.setvalues(10,40);
    c2.setvalues(100,200);
    fun(c1);
    fun(c2);

    return 0;
}
