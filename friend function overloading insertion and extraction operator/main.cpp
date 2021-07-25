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

    friend ostream& operator <<(ostream&, Complex);

    friend istream& operator >>(istream&, Complex&);
};


//NOTE:-  return type for cascading
ostream& operator <<(ostream &dout, Complex C)
{
    cout<<"\na = "<<C.a<<" ,   b = "<<C.b<<endl;
    return dout;
}

istream& operator >>(istream &din, Complex &C)
{
    cin>>C.a>>C.b;
    return din;
}

int main()
{
    Complex c1, c2;

    cout<<"Enter a complex number : "<<endl;
    cin>>c1;
    cout<<"You entered : ";
    cout<<c1<<endl;


    //using as a function
    cout<<"Enter another complex number : "<<endl;
    operator >>(cin, c2);
    cout<<"You entered : ";
    operator <<(cout, c2);

    return 0;
}
