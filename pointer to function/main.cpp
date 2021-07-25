#include <iostream>
using namespace std;

int add(int a, int b);
int subt(int a, int b);
int pdt(int a, int b);
int divide(int a, int b);

int op(int a, int b, int (*fxn)(int, int)) // pointer to function as argument
{
    int g;
    g = (*fxn)(a,b);
    return g;
}

int main()
{
    int m, n, o, p;

    int (*minus_)(int, int) = subt;  // pointer to function

    m = op(10, 20, add);
    n = op(5, 2, pdt);
    o = op(100, m, divide);
    p = op(n, o, minus_);

    cout<<m<<endl;
    cout<<n<<endl;
    cout<<o<<endl;
    cout<<p<<endl;

    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int subt(int a, int b)
{
    return a-b;
}

int pdt(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}
