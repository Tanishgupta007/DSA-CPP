#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "Num is " << num << endl;

    cout << "Address of num is " << &num << endl;

    int *p = &num;

    double d = 4.5;
    double *p2 = &d;

    // cout<<num and cout<<*p will print same value

    cout << *p << endl; // will print value
    cout << p << endl;  // will print address

    cout << "size of int is " << sizeof(num)<<endl;
    cout << "size of pointer is " << sizeof(p)<<endl;
    cout << "size of double pointer is " << sizeof(p2)<<endl;
}