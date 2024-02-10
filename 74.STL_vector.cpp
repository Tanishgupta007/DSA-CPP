#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; // Doubles the size if the vector is full
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(4);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(5);

    cout << "size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.pop_back();
    cout << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    cout << "Size before clear:" << v.size();
    v.clear();
    cout << endl;
    cout << "Size after clear:" << v.size();
// ---------------------------------------------------------
    vector<int> a(5, 1);
    // a(size of the vector,initialize all the element with 1 : default is 0)
    cout<<endl;
    for (int i:a)
    {
        cout<<a[i]<<" ";
    }
 //Copy the element of one vector to another
 vector<int> b(a);
 cout<<endl;
 cout<<"Printing b: ";
    for(int i:b){
        cout<<b[i];
    }
 }
    
