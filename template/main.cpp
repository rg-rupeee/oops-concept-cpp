#include <iostream>
using namespace std;


//function template
template <class X>
X big(X a, X b)
{
    if(a>b)
        return a;
    else
        return b;
}

//class template
template <class X>
class ArratList
{
private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;

public:
    ArratList(int capacity)
    {
        s = new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X[s->capacity];
    }

    void addElement(int index, X data)
    {
        if(index>=0 && index<s->capacity)
        {
            s->arr_ptr[index]=data;
        }
        else
        {
            cout<<"\nArray index not valid"<<endl;
        }
    }

    void viewElement(int index, X &data)
    {
        if(index>=0 && index<s->capacity)
        {
            data=s->arr_ptr[index];
        }
        else
        {
            cout<<"\nArray index not valid"<<endl;
        }
    }

    void viewList()
    {
        for(int i=0; i<s->capacity;i++)
        {
            cout<<s->arr_ptr[i]<<"\t";
        }
    }

};


int main()
{
    // use of function template
    cout<<"use of function template"<<endl;
    cout<<big(5,50)<<endl;

    cout<<big(15.20,50.44)<<endl;



    //use of class template
    cout<<"\n\nuse of class template"<<endl;
    int var;
    ArratList <int>list1(4);
    list1.addElement(0,32);
    list1.addElement(1,45);
    list1.addElement(2,44);
    list1.addElement(3,7);
    list1.viewElement(0,var);
    cout<<"\nvalue in array at zero index is "<<var<<endl;
    cout<<"complete list:";
    list1.viewList();



    float fvar;
    ArratList <float>list2(4);
    list2.addElement(0,32.0);
    list2.addElement(1,45.1);
    list2.addElement(2,44.2);
    list2.addElement(3,7.3);
    list2.viewElement(0,fvar);
    cout<<"\nvalue in array at zero index is "<<fvar<<endl;
    cout<<"complete list: ";
    list1.viewList();


    return 0;
}
