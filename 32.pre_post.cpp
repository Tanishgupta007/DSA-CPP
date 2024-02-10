#include <iostream>
using namespace std;

int main()
{
    // Post increment
    int i = 5;
    int a = i++;
    cout<<"Post Inc"<<endl;
    cout << a << endl;
    cout << i << endl;
    // Pre increment
    int i1 = 5;
    int a1 = ++i1;
    cout<<"Pre Inc"<<endl;
    cout << a1 << endl;
    cout << i1 << endl;
}