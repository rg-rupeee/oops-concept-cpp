#include <iostream>
using namespace std;

int main()
{
    cout<<"\nType alisaing using \'typedef\'"<<endl;

    typedef int num;
    typedef char letter;
    typedef float realNo;

    num a;
    a = 100;
    cout<<a<<endl;

    letter c;
    c='r';
    cout<<c<<endl;

    realNo rn;
    rn = 99.9;
    cout<<rn<<endl;

    //alter
    cout<<"\nType alisaing using \'using\'"<<endl;
    using p = int;
    using q = char;
    using r = float;

    p p1;
    q q1;
    r r1;
    p1 =5;
    q1 = 'z';
    r1 = 4.2;

    cout<<p1<<endl;
    cout<<q1<<endl;
    cout<<r1<<endl;

    return 0;
}
