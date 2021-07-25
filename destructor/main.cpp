#include <iostream>
using namespace std;

class Complex
{
public:
    ~Complex()
    {
        cout<<"destructor";
    };
};

void fun()
{
    Complex c;
}

int main()
{
    fun();
    return 0;
}
