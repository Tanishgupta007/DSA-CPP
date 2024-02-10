#include <iostream>
using namespace std;

int main()
{
    // String

    string s; // Tanish Gupta
    // cin>>s; // will print only Tanish
    getline(cin, s);
    cout << s;
    cout<<endl;
    // Char

    char a[15];

    cin.getline(a,15);
    cout<<a;

}