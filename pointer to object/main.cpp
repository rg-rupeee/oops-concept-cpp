#include <iostream>
using namespace std;

class Rectangle{
private:
    int width, height;
public:
    Rectangle(int x, int y)
    : width(x), height(y)
    {}

    int area(){ return width*height; }
};

int main()
{
    Rectangle obj(3,4);
    Rectangle *foo, *bar, *baz;
    foo = &obj;
    bar = new Rectangle(5,6);
    baz = new Rectangle[2] {{2,5},{3,6}};

    cout<<obj.area()<<endl;
    cout<<foo->area()<<endl;
    cout<<bar->area()<<endl;
    cout<<baz[0].area()<<endl;
    cout<<baz[1].area()<<endl;

    return 0;
}
