#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constructor initialization
    int x(100);
    cout<<x<<endl;
    string str("This is string 1");
    cout<<str<<endl;

    // uniform initialization
    int y{500};
    cout<<y<<endl;
    string mystr{"This is my string 2"};
    cout<<mystr<<endl;

    /*******************************************/
    //Type deduction

    //auto
    int foo = 100;
    auto bar = foo;
    auto car = 500;
    cout<<foo<<" "<<bar<<" "<<car<<endl;

    //decltype
//used for type deduction when variable is not initialized
    int integer = 5140;
    decltype(integer) var;
    var = 124;
    cout<<var<<endl;
    decltype(5) var2;
    var2 = 154;
    cout<<var2<<endl;


    return 0;
}
