#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;
public:
    void setDimension(int x, int y, int z)
    {
            l=x;
            b=y;
            h=z;
    }
    void showDimension()
    {
        cout<<"\nlength = "<<l<<"\tbreadth = "<<b<<"\theight = "<<h<<endl;
    }
};

int main()
{
    Box smallBox, *p;
    smallBox.setDimension(12,10,5);
    smallBox.showDimension();

    p=&smallBox;
    p->setDimension(20,30,40);
    p->showDimension();

    return 0;
}
