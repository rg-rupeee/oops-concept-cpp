#include <iostream>
#include <cstring>
using namespace std;

struct book
{
private:
    int bookid;
    char title[20];
    float price;
public:
    void showdata()
    {
        cout<<"book id = "<<bookid<<endl;
        cout<<"title = "<<title<<endl;
        cout<<"price = "<<price<<endl;
    }
    void setdata()
    {
        cout<<"Enter book id, title and price of the book : "<<endl;
        cin>>bookid>>title>>price;
    }
};

int main()
{
    //book b1={144,"riya",99999.9};
    book b2, b3;
    //b2.bookid=148;
    //strcpy(b2.title,"rupesh");
    //b2.price=0;
    //b3=b2;
    b2.setdata();
    b3.setdata();
    b2.showdata();
    b3.showdata();
      //  b1.showdata();
    return 0;
}
