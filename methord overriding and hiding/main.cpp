#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout<<"f1- A"<<endl;
    }
    void f2()
    {
        cout<<"f2-B"<<endl;
    }

};
class B: public A
{
public:
        void f1()   //Methord overriding
        {
            cout<<"f1-B"<<endl;
        }

        void f2(int x)   //methord hiding
        {
            cout<<x<<"f2-B"<<endl;
        }
};


class Car
{
public:
    void shiftGear()
    {
       cout<<"change gear normally"<<endl;
    }
};
class SportsCar : public Car
{
public:
    void shiftGear()
    {
        cout<<"change gear rapidly"<<endl;
    }
};

int main()
{
    B obj;
    obj.f1();

    //obj.f2();    !!ERROR!!

    obj.f2(5);      //B



    SportsCar s;
    s.shiftGear();



    return 0;
}
