#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 11, 12, 13};

    cout << arr << endl; // address of first memory block

    cout << arr[0] << endl; // value at index 0

    cout << *arr << endl; // arr->address of index 0 *arr-> value at index 0

    cout << *arr + 1 << endl; // *arr + 1-> 0+1 = 1

    cout << *(arr + 1) << endl; // *(arr + 1-> address of index 1) -> value at index 1

    // Formula  -- arr[i] = *(arr+i)

    // /----------------------------------------------------------------

    cout << sizeof(arr) << endl; // print the size of array -> int*size = 4*10 = 40

    cout << sizeof(*arr) << endl; // arr->address of index 0, *arr = value at 0, sizeof(int);

    cout << sizeof(&arr) << endl; // arr->address of index 0;

    int *p = &arr[0];

    cout << sizeof(p) << endl;

    cout << sizeof(*p) << endl;

    cout << sizeof(&p) << endl;

    cout << "address of pointer p : " << &p;
}