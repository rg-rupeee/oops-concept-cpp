#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;
public:
    void setDimension(int l, int b, int h)
    {
        this->l=l;
        (*this).b = b;  //this->b=b;
        (*this).h = h;  //this->h=h;
    }
    void showDimension()
    {
        cout<<"\nlength = "<<l<<"\tbreadth = "<<b<<"\theight = "<<h<<endl;
    }
};

int main()
{
    Box smallBox;
    smallBox.setDimension(12,10,5);
    smallBox.showDimension();

    return 0;
}

/*
This is a local object pointer in every instance member
function containing the address of the object
*/

// this pointer can not be modified

//it is used to refer caller object in member function

//this is a keyword
