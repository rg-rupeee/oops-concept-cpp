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

    friend Complex operator +(Complex, Complex);
};

Complex operator +(Complex X, Complex Y)
{
    Complex temp;
    temp.a = X.a+Y.a;
    temp.b = X.b+Y.b;
    return temp;
}

int main()
{
    Complex c1, c2, c3, c4, c5, c6;
    c1.setData(10,20);
    c2.setData(100,200);
    c3=c1+c2;
    c3.showData();
    c4.setData(20,40);
    c5.setData(200,400);
    c6=operator +(c4,c5);  //+ operator as a function
    c6.showData();

    return 0;
}
