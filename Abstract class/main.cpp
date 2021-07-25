#include <iostream>
using namespace std;

class Person
{
public:
        virtual void fun()=0;  //Pure virtual function
}; //abstract class
class Student : public Person
{
public:
    void fun()
    {

    }
};

int main()
{

    return 0;
}

// a class containing a virtual function is known as abstract class

//you cannot create an object of abstract class

//it is necessary to define the pure virtual function in its child class
