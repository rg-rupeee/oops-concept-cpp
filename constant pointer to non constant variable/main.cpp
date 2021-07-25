#include <iostream>
using namespace std;

int main()
{
    char a='A', b='B';

    char * const ptr = &a;

    cout<<*ptr<<endl;

    *ptr = 'B';  //valid
    cout<<*ptr<<endl;

//    ptr = &b; //error


    return 0;
}
