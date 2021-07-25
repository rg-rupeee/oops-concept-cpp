#include <iostream>
using namespace std;
// operator overloading expplained using
//program to add two complex number
class complex_
{
private:
    int x;
    int y;
public:
    complex_(){}
    complex_(int a, int b)
    {
        x=a;
        y=b;
    }
    void showData()
    {
        cout<<"\nx = "<<x<<",  y = "<<y<<endl;
    }

    //function to add two members
    complex_ add(complex_ c)
    {
        complex_ temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }

    //operator overloading
    complex_ operator +(complex_ c)
    {
        complex_ temp;
        temp.x = x+c.x;
        temp.y = y+c.y;
        return temp;
    }
};

int main()
{
    complex_ c1(100,200);
    complex_ c2(10,20);
    complex_ c3,c4,c5;

    c3=c1.add(c2);

    c4=c1.operator+(c2); //using + as a function name

    c5=c1+c2; //using + as a operator

    cout<<"\nc3:";
    c3.showData();
    cout<<"\nc4:";
    c4.showData();
    cout<<"\nc5:";
    c5.showData();
    return 0;
}
