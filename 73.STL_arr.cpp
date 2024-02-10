#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3}; // Normal array

    array<int, 4> a = {1, 2, 3, 4}; // STL array
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        // cout<<a[i]<<endl;//For printing all the elements
    }
    cout << "Element at index 2 is " << a.at(2) << endl; // For printing element at specific index

    cout << "Empty or not: " << a.empty() << endl; // 1->empty | 0->not empty

    cout << "First element: " << a.front() << endl;
    cout << "last element: " << a.back() << endl;
}