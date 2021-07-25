#include <iostream>
using namespace std;

//formal declarations for classes
class A;
class B;

class A
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    friend void fun(A, B);
};

class B
{
private:
    int b;
public:
    void setdata(int y)
    {
        b=y;
    }
    friend void fun(A, B);
};

void fun(A ob1, B ob2)
{
    cout<<ob1.a+ob2.b<<endl;
}

int main()
{
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);
    fun(a, b);
    return 0;
}
