#include <iostream>
using namespace std;

class Integer
{
private:
    int x;
public:
    void setData(int a)
    {
        x=a;
    }
    void showData()
    {
        cout<<"\nx = "<<x;
    }
    Integer operator++() //pre increment
    {
        Integer i;
        i.x = ++x;
        return i;
    }

    //here we just give an int argument so that compiler
    //identifies post increament
    //we need not have to pass an argument during its use
    Integer operator++(int) //post increment
    {
        Integer i;
        i.x = x++;
        return i;
    }


};

int main()
{
    int a=0;
    Integer i1, i2, i3, i4, i5;
    i1.setData(100);
    cout<<"\ninitial i1 : ";
    i1.showData();
    cout<<endl;

    i2=++i1;
     i1.setData(100);

    i3=i1++;
     i1.setData(100);

    i4=i1.operator++();//using pre increment as a function
     i1.setData(100);

    i5=i1.operator++(a);//using post increment as a function
     i1.setData(100);

    cout<<"\ni2 : ";
    i2.showData();

    cout<<"\ni3 : ";
    i3.showData();

    cout<<"\ni4 : ";
    i4.showData();

    cout<<"\ni5 : ";
    i5.showData();


    return 0;
}
