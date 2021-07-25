#include <iostream>
using namespace std;

class myclass1
{
private:
    int x;
public:
    myclass1(int a)
    {
        x=a;
    }

    //myclass2 is a friend of myclass1
    friend class myclass2;
};

class myclass2
{
public:
    void showData(myclass1 obj)
    {
        cout<<"x value is "<<obj.x<<endl;
    }
};

int main()
{
    myclass1 obj1(100);
    myclass2 obj2;
    obj2.showData(obj1);
    return 0;
}
