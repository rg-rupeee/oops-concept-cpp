#include <iostream>
using namespace std;

//used to initialize const member function

class MyClass{
private:
    int regVar;
    const int constVar;
public:
    MyClass(int a, int b)
   :regVar(a), constVar(b)
   {}

   void view()
   {
       cout<<"\n"<<regVar<<" "<<constVar<<endl;
   }

};

int main()
{
    MyClass c(10,20);
    c.view();
    return 0;
}
