#include <iostream>
using namespace std;

class complex_
{
private:
    int x;
    int y;
public:
    complex_()
    {

    }
    complex_(int a, int b)
    {
        x=a;
        y=b;
    }
    void showdata()
    {
        cout<<"\nx = "<<x<<",  y = "<<y<<endl;
    }

    complex_ operator -()
    {
        complex_ temp;
        temp.x = -x;
        temp.y = -y;

        return temp;
    }
};
int main()
{
     complex_ c1(100, 50);
     complex_ c3(500, -40);
     complex_ c2, c4;

     c2 = -c1;  // overloading - operator
     cout<<"c2:";
     c2.showdata();


     c4 = c3.operator-(); //using - as a function
     cout<<"c2:";
     c4.showdata();


    return 0;
}
