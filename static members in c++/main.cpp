#include <iostream>
using namespace std;

class Account
{
private:
    //Instance member variable
    int balance;
    //Static member variable/Class Variable
    static float roi;   //variable defination
public:
    void setBalance(int b)
    {
        balance=b;
    }
    static void setroi(float r) //static member function/Class funtion
    {
        roi = r;
    }
    float getroi()
    {
        return roi;
    }
};

float Account:: roi=3.5f;  // variable defination (must be defined outside class)
/*
There will only one copyof ststic member variable for
whole class irrespective of number of objects
*/

int main()
{
    Account a1,a2;
    a1.setroi(4.5);
    cout<<a2.getroi()<<endl;
    Account::setroi(10.59);
    cout<<a2.getroi();

    return 0;
}
