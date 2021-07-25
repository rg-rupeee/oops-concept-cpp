#include <iostream>
using namespace std;

//member of one class friend of another class
class A
{
public:
    void fun()
    {

    }
    void foo()
    {

    }
};

class B
{
    friend void A::fun();
};

void fun()
{

}



//for making all member of one class friend of another
//we use friend class
class C
{
public:
    void fun1()
    {

    }

    void fun2()
    {

    }
};
class D
{
    friend class C;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
