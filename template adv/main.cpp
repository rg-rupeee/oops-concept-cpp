#include <iostream>
using namespace std;

// class template working together with function template

template <typename T>
T square(T x)
{
    return(x*x);
}

template <typename T>
class BoVector
{
    T arr[1000];
    int size;
public:
    BoVector()
    : size(0) {}

    void push(T x)
    {
        arr[size] = x;
        size++;
    }

    T get(int i) const
    {
        return (arr[i]);
    }

    T getSize()
    {
        return size;
    }

    void print() const
    {
        cout<<endl;
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }

};

//overloading operator *
template <typename T>
BoVector<T> operator *(BoVector<T> &rhs1, BoVector<T> &rhs2)
{
    BoVector<T> ret;
    for(int i=0; i<rhs1.getSize(); i++)
    {
        ret.push(rhs1.get(i)*rhs2.get(i));
    }
    return ret;
}


int main()
{
    BoVector <int> bv;
    bv.push(2);
    bv.push(5);
    bv.push(8);
    bv.push(9);
    bv.print();

    bv = square(bv);
    bv.print();

    return 0;
}
