#include <iostream>
using namespace std;

class A
{
private:
    int a;
protected:
    void setValue(int x)
    {
        a=x;
    }
};

class B: public A
{
public:
    void setData(int z)
    {
        setValue(z);
    }

};

//use of private inheritance
class Array
{
private:
    int a[10];
public:
    void Insert{int index, int value}
    {
        a[index]=value;
    }
};
class STACK: private Array
{
private:
    int top;
public:
    void push(int value)
    {
        insert(top, value);
    }
};

class Car
{
private:
    int gear;
public:
    void increaseGear()
    {
        if(gear<5)
            gear++;
    }
};
class SportsCar : public Car
{

};

int main()
{
    B obj;
    //obj.setValue(5);      ERROR
    obj.setData(5);

    STACK s1;
    s1.push(34);
    //s1.Insert(2,56);   ERROR not accesible using STACK object
                        //because of private inheritance


    return 0;
}
