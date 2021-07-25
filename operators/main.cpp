#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    y = 2+(x=5);
    cout<<y<<endl;

    x = y = z = 100;
    cout<<x<<" "<<y<<" "<<z<<endl;
    int a, b, c;
    a = 2;
    b = 3;
    c = ((b=2)==a);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;

    //comma operator
    b=10;
    a = (b=5, b+10);
    cout<<a<<" "<<b<<endl;


    return 0;
}
