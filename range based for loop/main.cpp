#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ("Hello Ruchi");
    for(char c: str)
    {
        cout<<c<<endl;
    }

    int arr[] = {1,2,3,4,5,6,7,8,9};
    for(auto x: arr)
    {
        cout<<x<<" ____";
    }


    return 0;
}
