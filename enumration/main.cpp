#include <iostream>
using namespace std;

//enum class
enum class Colors
{
    red=100, blue, green, black, white
};

enum class month : char{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

int main()
{/*
    enum colors
    {
        red, blue, green, yellow, orange, black, white
    };

    enum days
    {
        mon=1, tue, wed, thu, fri, sat, sun
    };

    colors c1;
    c1 = red;
    cout<<c1<<endl;
    c1 = black;
    cout<<c1<<endl;

    days d;
    d = mon;
    cout<<d<<endl;
    d = wed;
    cout<<d<<endl;
*/

    Colors c2;
    c2 = Colors::red;
    if(c2 == Colors::blue)
    {
        cout<<"blue"<<endl;
    }
    else
    {
        //cout<<Colors::red<<endl;  //error
        cout<<(int)c2<<endl;
        cout<<(int)Colors::white<<endl;
    }
//we need to type cast enum class

    month m;
    m = month::sep;
    cout<<(int)m<<endl;

    return 0;
}
