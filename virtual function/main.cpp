#include <iostream>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout<<"A"<<endl;
    }

    virtual void fun2()
    {
        cout<<"A"<<endl;
    }
};
class B: public A
{
public:
    void fun1() //function overriding
    {
        cout<<"B"<<endl;
    }
    void fun2()
    {
        cout<<"B"<<endl;
    }
};

int main()
{
    A ob1, *ptr;
    B ob2;

    ptr=&ob2;  //base class ka pointer child class ki value rakh sakta hai

    ob2.fun1();    // B
    ptr->fun1();   // A
    //due to early binding because pointer type is A

    ob2.fun2();     //B
    ptr->fun2();     //B
     //due to late binding due to virtual keyword





    return 0;
}
