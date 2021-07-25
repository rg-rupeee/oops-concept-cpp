#include <iostream>
using namespace std;
//dynamic memory allocation

class Complex
{

};

int main()
{
    int *p = new int;               //integer
    float *q = new float;           //float
    Complex *ptr = new Complex;     //object

    //array
    int *r = new int[5];  //array

    int x;
    cin>>x;
    int *s = new int[x];


    delete p;
    delete q;
    delete ptr;
    delete []r;
    delete []s;

    return 0;
}
