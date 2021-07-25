// function template
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}


template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

int main () {

    //Non-type template arguments
    std::cout << fixed_multiply<int,2>(10) << '\n';  //20
    std::cout << fixed_multiply<int,3>(10) << '\n';  //30



  //Function templates
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << k << '\n'; //11
  cout << h << '\n'; //2.5
/*
It is possible to instead simply write:
k = sum (i,j);
h = sum (f,g);
*/


   if (are_equal(10,10.0))
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";

  /*
  Is equivalent to:
  are_equal<int,double>(10,10.0)
  */

  return 0;
}
