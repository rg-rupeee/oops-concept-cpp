#include <iostream>
#include <string>
using namespace std;

//typed constants
const char newline = '\n';

// preprocessor
#define
 PI 3.14

int main()
{
    int a = 75; //decimal
    int b = 0113; //octal
    int c = 0x4b; //hexadecimal

    cout<<a<<" "<<b<<" "<<c<<newline;

    int l = 75;   //int
    int m = 75u;  //unsigned int
    int n = 75l;  //long int
    int o = 75ul;  //unsinged long
    cout<<l<<" "<<m<<" "<<n<<" "<<o<<newline;

    float f1 = 3.141;
    float f2 = 6.02e23;
    float f3 = 1.6e-19;
    float f4 = 3.0f;
    cout<<f1<<" "<<f2<<" "<<f3<<" "<<f4<<endl;

    //Line Splicing
    string str = "String is expressed \
in two lines";
    cout<<str<<newline;

    cout<<PI<<newline;

    return 0;
}
