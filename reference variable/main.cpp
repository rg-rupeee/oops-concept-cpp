#include <iostream>
using namespace std;

int main()
{
    int a;
    a=10;
    int &b=a;
    cout<<"\na = "<<a<<endl;
    cout<<"\nb = "<<b<<endl;
    a++;
    cout<<"\na++";
    cout<<"\na = "<<a<<endl;
    cout<<"\nb = "<<b<<endl;
    b++;
    cout<<"\nb++";
    cout<<"\na = "<<a<<endl;
    cout<<"\nb = "<<b<<endl;

    return 0;
}
