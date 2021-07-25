#include <iostream>
using namespace std;

int add(int a, int b, int c=0);
/*
int add(int a, int b=0, int c); //this is wrong
we must set default values of argument from last parameter
first then second last and so on...
*/

class ruchi
{
public:
    void fun(int a, int b);
};

void ruchi::fun(int a=0, int b=0)
{
    int c = a + b;
    cout<<"\nsum is : "<<c<<endl;
}

int main()
{
    cout << add(5,2,3)<< endl;
    cout << add(5,2)<< endl;

    ruchi r;
    r.fun();
    r.fun(5);
    r.fun(5,10);

    return 0;
}

int add(int a, int b, int c)
{
    return(a+b+c);
}
