#include <iostream>
using namespace std;

namespace   mynamespace
{
    int a, b;
}

namespace foo
{
    int value()
    {
        return(5);
    }
}

namespace bar
{
    const double pi = 3.1416;

    float value()
    {
        return(pi*2);
    }

}

namespace first
{
    int x = 10;
    int y = 20;
}

namespace second
{
    double x = 3.14;
    double y = 6.28;
}

int main()
{
    /*
    //******
    //cout<<a<<b; Error:- Not declared in scope
    mynamespace::a = 100;
    mynamespace::b = 200;
    cout<<mynamespace::a<<" "<<mynamespace::b<<endl;
    cout<<foo::value()<<endl;
    cout<<bar::value()<<endl;
    cout<<bar::pi<<endl;
    */

    /*
    //using keyword
    //******
    using first::x;
    using second::y;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<first::y<<endl;
    cout<<second::x<<endl;
    */

    //*******
    {
        using namespace first;
        cout << x << endl;
    }
    {
        using namespace second;
        cout << x << endl;
    }

    return 0;
}
