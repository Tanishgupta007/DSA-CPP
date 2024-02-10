#include <iostream>
using namespace std;

int main()
{
    int i = 5;

    int *ptr1 = &i;
    int **ptr2 = &ptr1;

    cout << endl
         << "Working Fine!!!" << endl;

    cout << "ptr1: " << ptr1 << endl;
    cout << "Address of ptr1: " << &ptr1 << endl;

    cout << "ptr2: " << *ptr2 << endl;
    cout << "ptr2: " << ptr2 << endl;

    // To print value of i;
    cout << i << endl;
    cout << *ptr1 << endl;
    cout << **ptr2 << endl; // **ptr2 = *(address of ptr1) = value at which ptr1 is pointing

    // To print address of i;

    cout << &i << endl;
    cout << ptr1 << endl;
    cout << *ptr2 << endl;

    // To print address of ptr1;
    cout << endl;
    cout << &ptr1 << endl;
    cout << ptr2 << endl;
}