#include <iostream>
#include <string>
using namespace std;

class Birthday
{
private:
    int day, month, year;
public:
    Birthday(int a, int b, int c)
    : day(a), month(b), year(c)
    {
    }

    void viewDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Person
{
private:
    string name;
    Birthday bd;
public:
    Person(string n, Birthday b)
    : name(n), bd(b)
    {
    }

    void PrintInfo()
    {
        cout<<name<<endl;
        bd.viewDate();
    }
};

int main()
{
    Birthday b(13,3,2001);
    //b.viewDate();
    Person p("Ruchi", b);
    p.PrintInfo();

    return 0;
}
