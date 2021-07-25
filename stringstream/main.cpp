#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string mystr("1204");
    int myint;
    stringstream(mystr)>>myint;
    cout<<myint<<endl;

    string str1("hi");
    stringstream(str1)<<"hello";
    cout<<str1<<endl;

    return 0;
}
