#include <iostream>
using namespace std;

int area(int length, int breadth);
float area(int radius);
float area (float radius);

int main()
{
    float n;
    n =5.2;
    cout<<"area of rectangle : " << endl;
    cout<<"area(30,20) = "<<area(30,20)<<endl;
    cout<<"area of circle : "<<endl;
    cout<<"area(5) = "<<area(5)<<endl;
    cout<<"area(5.2) = "<<area(n)<<endl;
    return 0;
}

int area(int length, int breadth)
{
    return(length*breadth);
}

float area(int radius)
{
    return(3.14*radius*radius);
}

float area (float radius)
{
    return(3.14*radius*radius);
}
