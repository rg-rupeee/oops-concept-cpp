#include <iostream>
using namespace std;

class complexNo
{
private:
    int real;
    int imaginary;
public:
    void setValue(int x, int y)
    {
        real=x;
        imaginary=y;
    }
    void showData()
    {
        cout<<"The complex number is : "<<endl;
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    complexNo add(complexNo z)
    {
        complexNo temp;
        temp.real=real+z.real;
        temp.imaginary=imaginary+z.imaginary;

        return temp;
    }
};

int main()
{
    complexNo z1, z2, z3;
    z1.setValue(10, 20);
    z2.setValue(-50,100);
    z1.showData();
    z2.showData();
    z3=z2.add(z1);
    z3.showData();
    return 0;
}
