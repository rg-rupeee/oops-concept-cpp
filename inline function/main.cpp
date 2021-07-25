#include <iostream>
using namespace std;

inline void fun(); //inline keyword is written only once during function declaration

int main()
{
    fun();
    return 0;
}

void fun()
{
    cout<<"You are in fun";
}
