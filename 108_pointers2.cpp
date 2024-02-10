#include <iostream>
using namespace std;

int main()
{
    // Two ways to initialize
    // int i = 5;
    // int *p = &i;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    // // =-----------------
    // int *q = 0;
    // q = &i;

    // cout<<q<<endl;
    // cout<<*q<<endl;

    // ----------------------------------------------

    int num = 5;
    int a = num;
    a++;
    cout << num << endl; // value will be same

    int num1 = 5;
    int *ptr = &num1;
    (*ptr)++;

    cout << num1 << endl;

    // copying pointer to other pointer

    int *q = ptr;
    cout << *q << " - " << *ptr << endl;
    cout << q << " - " << ptr << endl;

    cout << endl;
    cout << endl;

    int i = 3;
    int *t = &i;

    *t = *t + 1;
    cout << *t << endl;

    cout << t << endl;
    t = t + 1;
    cout << t << endl;

    char ch = 'a';

    char *chr = &ch;

    chr = chr + 1;

    cout << chr;
}