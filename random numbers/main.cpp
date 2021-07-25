#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randNo(int min_, int max_)
{
    return (rand()%(max_-min_+1))+min_;
}

int main()
{
    srand(time(0));
    for(int i=0; i<100; i++){
        cout<<randNo(10,20)<<endl;
    }
    return 0;
}
