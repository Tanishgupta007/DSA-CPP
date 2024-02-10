#include <iostream>
using namespace std;

// Pass by value
//  void update(int i){
//      i++;
//  }

// pass by reference
void update(int &i)
{
    i++;
}

int main()
{
    int i = 5;

    cout << "Before: " << i << endl;

    update(i);

    cout << "After: " << i << endl;
}