#include <iostream>
using namespace std;

int main()
{
    const char *p1;
    char const *p2;

    char a='A', b='B';

    p1 = &a;
    p2 = &b;
    cout<<*p1<<" "<<*p2<<endl;

//    *p1 = 'B';  //Error

    p1 = &b;  //valid
    p2 = &a;
    cout<<*p1<<" "<<*p2<<endl;


    return 0;
}
