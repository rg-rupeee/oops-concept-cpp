#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;
public:
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"\na = "<<a<<"\nb = "<<b<<endl;
    }

    friend Complex operator -(Complex);
};

Complex operator -(Complex c)
{
    Complex temp;
    temp.a = -c.a;
    temp.b = -c.b;
    return temp;
}

int main()
{
    Complex c1,c2, c3, c4;
    c1.setData(100, 200);
    c2.setData(200, 400);

    c3=-c1;

    c4=operator -(c2);  //- operator as a function


    cout<<"c1";
    c1.showData();
    cout<<"c2";
    c2.showData();
    cout<<"c3";
    c3.showData();
    cout<<"c4";
    c4.showData();

    return 0;
}
