#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    flag:
        cout<<n<<endl;
        n++;
        if(n<=10){
            goto flag;
        }

    cout<<"End.....";


    return 0;
}
