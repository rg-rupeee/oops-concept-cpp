#include <iostream>
using namespace std;

int main()
{
    char a='A', b='B';

    const char * const ptr = &a;

    cout<<*ptr<<endl;

//     ptr = &b;  //error

//    *ptr = 'B'; //error

    return 0;
}
