#include <bits/stdc++.h>
using namespace std;

int main()
{
    wchar_t widech = L'a';
    cout<<widech<<endl;
    wcout<<widech<<endl;
    wcin>>widech;
    wcout<<widech<<endl;
    char str1[] = "This is character array";
    cout << str1 << endl;
    //array using wide characters
    wchar_t str2 [] = L"This is wide character array";
    wcout << str2<<endl;
    wcin>>str2;
    wcout<<str2;


    return 0;
}
