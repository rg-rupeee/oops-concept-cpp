#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    //ignore all whitespace before word
    istringstream str("     Programmer");
    string line;
    getline(str>>ws, line);
    cout<<line<<endl;

    //use of ends
    cout<<"\na";
    cout<<"b"<<ends;
    cout<<"c"<<endl;
    // o/p:- ab c


    // setw()
    cout<<setw(10)<<10<<endl;
    cout<<20<<endl;

    //setfill()
    cout<<setfill('*')<<10<<endl;
    cout<<setfill('*')<<setw(10)<<10<<endl;

    //setprecision()
    float fl = 10.347489;
    cout<<fl<<endl;
    cout<<setprecision(3)<<fl<<endl;
    cout<<setprecision(8)<<fl<<endl;
    cout<<setprecision(16)<<fl<<endl; //rem char garbage


    //setbase()
    // only 10 16 and 8 area allowed
    int num = 171556;
    cout<<num<<endl;
    cout<<setbase(10)<<num<<endl;
    cout<<setbase(2)<<num<<endl;
    cout<<setbase(8)<<num<<endl;
    cout<<setbase(16)<<num<<endl;

    //setiosflags(flag)
    int a = 10;
    int b = -10;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<showpos<<a<<endl;
    cout<<showpos<<b<<endl;



    return 0;
}
